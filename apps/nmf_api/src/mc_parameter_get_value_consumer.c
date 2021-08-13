/*  =========================================================================
    mc_parameter_get_value_consumer - The request consumer for the getValue operation.

    The MIT License (MIT)
    =========================================================================
*/

/*
@header
    mc_parameter_get_value_consumer - The request consumer for the getValue operation.
@discuss
@end
*/

#include "nmf_api_classes.h"

//  Structure of our class

struct _mc_parameter_get_value_consumer_t {
    mal_uri_t *provider_uri;
    mal_blob_t *authentication_id;
    mal_qoslevel_t qoslevel;
    mal_uinteger_t priority;
    mal_identifier_list_t *domain;
    mal_identifier_t *network_zone;
    mal_sessiontype_t session;
    mal_identifier_t *session_name;
    mal_encoder_t *encoder;
    mal_decoder_t *decoder;
};

// Consumer actor
mal_actor_t *consumer_actor = NULL;


//  --------------------------------------------------------------------------
//  Create a new mc_parameter_get_value_consumer

mc_parameter_get_value_consumer_t *
mc_parameter_get_value_consumer_new (mal_uri_t *provider_uri)
{
    mc_parameter_get_value_consumer_t *self = (mc_parameter_get_value_consumer_t *) zmalloc (sizeof (mc_parameter_get_value_consumer_t));
    assert (self);
    
    //  Initialize class properties here
    self->provider_uri = provider_uri;
    self->authentication_id = mal_blob_new(0);
    self->qoslevel = MAL_QOSLEVEL_ASSURED;
    self->priority = 4;
    self->domain = mal_identifier_list_new(0);
    self->network_zone = mal_identifier_new(MC_PARAMETER_GET_VALUE_CONSUMER_NETWORK_ZONE);
    self->session = MAL_SESSIONTYPE_LIVE;
    self->session_name = mal_identifier_new(MC_PARAMETER_GET_VALUE_CONSUMER_SESSION_NAME_LIVE);
    self->encoder = malbinary_encoder_new(false);
    self->decoder = malbinary_decoder_new(false);

    return self;
}

int
mc_parameter_get_value_consumer_response (void *self, mal_ctx_t *mal_ctx,
    mal_endpoint_t *mal_endpoint, mal_message_t *message)
{
    printf("mc_parameter_get_value_consumer_response\n");

    // The response code
    int rc = 0;

    mc_parameter_get_value_consumer_t *consumer = (mc_parameter_get_value_consumer_t *) self;

    // Get response parameter from response MAL message.

    void *cursor = mal_decoder_new_cursor(
        consumer->decoder,
        mal_message_get_body(message),
        mal_message_get_body_offset(message) + mal_message_get_body_length(message),
        mal_message_get_body_offset(message));

    printf("mc_parameter_get_value_consumer: offset=%d\n", mal_message_get_body_offset(message));


    // Decode the resposne parameter
    printf("mc_parameter_get_value_consumer: decode paramValDetails\n");
    mc_parameter_parametervaluedetails_list_t *param_value_details;
    rc = mc_parameter_getvalue_request_response_decode_0(cursor, consumer->decoder, &param_value_details);
    mal_decoder_cursor_assert(consumer->decoder, cursor);

    if (rc < 0)
    {
        // Destroy
        mal_decoder_cursor_destroy(consumer->decoder, cursor);
        mc_parameter_parametervaluedetails_list_destroy(&param_value_details);
        mal_message_destroy(&message, mal_ctx);

        // Cleanup
        mal_actor_term(consumer_actor);

        return rc;
    }

    // TODO: remove
    // Print results
    // Do we return raw types or mal types
    printf("mc_parameter_get_value_consumer: get paramValDetails content\n");
    mc_parameter_parametervaluedetails_t **content = mc_parameter_parametervaluedetails_list_get_content(param_value_details);

    mal_long_t param_id;
    mal_long_t def_id;
    //mc_parameter_parametervalue_t param_value;
    //mal_attribute_t value;

    printf("mc_parameter_get_value_consumer: loop\n");
    for (int i = 0; i < mc_parameter_parametervaluedetails_list_get_element_count(param_value_details); i++)
    {
        param_id = mc_parameter_parametervaluedetails_get_paramid(content[i]);
        def_id = mc_parameter_parametervaluedetails_get_defid(content[i]);
        //mal_time_t mc_parameter_parametervaluedetails_get_timestamp(mc_parameter_parametervaluedetails_t * self)

        // Get value
        //param_value = mc_parameter_parametervaluedetails_get_value(content[i]);
        //value = param_value->f_rawvalue; //f_convertedvalue

        printf("(%ld, %ld), \n", param_id, def_id);

        printf("Y, ");
    }

    /**
    struct _mc_parameter_parametervaluedetails_list_t {
    unsigned int element_count;
    mc_parameter_parametervaluedetails_t ** content;
    };
    */

    /**
    struct _mc_parameter_parametervaluedetails_t {
    mal_long_t f_paramid;
    mal_long_t f_defid;
    mal_time_t f_timestamp;
    mc_parameter_parametervalue_t * f_value;
    };
    */

    //mal_time_t f_timestamp;
    //mc_parameter_parametervalue_t * f_value;

    /**
    struct _mc_parameter_parametervalue_t {
    mal_uoctet_t f_validitystate;
    bool f_rawvalue_is_present;
    unsigned char f_rawvalue_attribute_tag;
    union mal_attribute_t f_rawvalue;
    bool f_convertedvalue_is_present;
    unsigned char f_convertedvalue_attribute_tag;
    union mal_attribute_t f_convertedvalue;
    };

    */

    // Destroy
    printf("mc_parameter_get_value_consumer: Destroy\n");
    mal_decoder_cursor_destroy(consumer->decoder, cursor);
    mc_parameter_parametervaluedetails_list_destroy(&param_value_details);
    mal_message_destroy(&message, mal_ctx);

    // Cleanup
    printf("mc_parameter_get_value_consumer: Cleanup\n");
    mal_actor_term(consumer_actor);

    return rc;
}

int
mc_parameter_get_value_consumer_initialize (void *self, mal_actor_t *mal_actor)
{
    printf("mc_parameter_get_value_consumer_initialize()\n");

    // The response code
    int rc = 0;

    rc = mal_routing_register_consumer_request_handler(
        mal_actor_get_router(mal_actor),
        MC_AREA_NUMBER,
        MC_AREA_VERSION,
        MC_PARAMETER_SERVICE_NUMBER,
        MC_PARAMETER_GETVALUE_OPERATION_NUMBER,
        mc_parameter_get_value_consumer_response);

    mc_parameter_get_value_consumer_t *consumer = (mc_parameter_get_value_consumer_t *) self;

    // Initiate a request interaction
    mal_uri_t *provider_uri = consumer->provider_uri;
    printf("mc_parameter_get_value_consumer: provider URI: %s\n", provider_uri);

    // Build the paramInstIds request field
    // The paramInstIds field shall provide the list of ParameterIdentity object instance identifiers
    // The wildcard value of '0' shall be supported and matches all parameters of the provider
    mal_long_list_t *param_inst_ids = mal_long_list_new(1);
    mal_long_t* content = mal_long_list_get_content(param_inst_ids);
    content[0] = 1;

    // Create a cursor
    void *cursor = mal_encoder_new_cursor(consumer->encoder);

    // Add encoding length for the field
    printf("mc_parameter_get_value_consumer: encoding_length_0 for paramInstIds\n");
    rc = mc_parameter_getvalue_request_add_encoding_length_0(consumer->encoder, param_inst_ids, cursor);

    if (rc < 0)
    {
        // Destroy the MAL encoder cursor
        mal_encoder_cursor_destroy(consumer->encoder, cursor);

        // Desstroy the field
        mal_long_list_destroy(&param_inst_ids);

        return rc;
    }

    // Build the MAL Message that will contain the field
    printf("mc_parameter_get_value_consumer: new MAL message\n");
    mal_message_t *message = mal_message_new(consumer->authentication_id,
        consumer->qoslevel, consumer->priority, consumer->domain,
        consumer->network_zone, consumer->session, consumer->session_name,
        mal_encoder_cursor_get_length(consumer->encoder, cursor));

    // Initialize the MAL encoder cursor
    mal_encoder_cursor_init(
        consumer->encoder, cursor,
        mal_message_get_body(message),
        mal_encoder_cursor_get_length(consumer->encoder, cursor),
        mal_message_get_body_offset(message));

    // Encode the request field
    printf("mc_parameter_get_value_consumer: encode 0 for paramInstIds\n");
    rc = mc_parameter_getvalue_request_encode_0(
        cursor, consumer->encoder, param_inst_ids);
    
    mal_encoder_cursor_assert(consumer->encoder, cursor);

    // Destroy the MAL encoder cursor
    mal_encoder_cursor_destroy(consumer->encoder, cursor);

    // Send the request message
    mc_parameter_getvalue_request(
        mal_actor_get_mal_endpoint(mal_actor), message, provider_uri);

    // Destroy the field
    mal_long_list_destroy(&param_inst_ids);

    return rc;
}

int
mc_parameter_get_value_consumer_finalize (void *self, mal_actor_t *mal_actor)
{
    // The response code
    int rc = 0;

    mal_ctx_t* mal_ctx = mal_actor_get_mal_ctx(mal_actor);
    mal_ctx_stop(mal_ctx);

    return rc;
}

void
mc_parameter_get_value_consumer_actor_create (mc_parameter_get_value_consumer_t *self, mal_ctx_t *mal_ctx)
{
    mal_uri_t *consumer_uri= mal_ctx_create_uri(mal_ctx, MC_PARAMETER_GET_VALUE_CONSUMER_URI);

    consumer_actor = mal_actor_new(
        mal_ctx, consumer_uri, self,
        mc_parameter_get_value_consumer_initialize, mc_parameter_get_value_consumer_finalize);
}


//  --------------------------------------------------------------------------
//  Destroy the mc_parameter_get_value_consumer

void
mc_parameter_get_value_consumer_destroy (mc_parameter_get_value_consumer_t **self_p, mal_ctx_t *mal_ctx)
{
    assert (self_p);
    if (*self_p) {
        mc_parameter_get_value_consumer_t *self = *self_p;
        //  Free class properties here
        
        // Destroy consumer actor
        mal_actor_join(consumer_actor);
        mal_actor_destroy(mal_ctx, &consumer_actor);

        //  Free object itself
        free (self);
        *self_p = NULL;
    }
}

//  --------------------------------------------------------------------------
//  Self test of this class

// If your selftest reads SCMed fixture data, please keep it in
// src/selftest-ro; if your test creates filesystem objects, please
// do so under src/selftest-rw.
// The following pattern is suggested for C selftest code:
//    char *filename = NULL;
//    filename = zsys_sprintf ("%s/%s", SELFTEST_DIR_RO, "mytemplate.file");
//    assert (filename);
//    ... use the "filename" for I/O ...
//    zstr_free (&filename);
// This way the same "filename" variable can be reused for many subtests.
#define SELFTEST_DIR_RO "src/selftest-ro"
#define SELFTEST_DIR_RW "src/selftest-rw"

void
mc_parameter_get_value_consumer_test (bool verbose)
{
    printf (" * mc_parameter_get_value_consumer: ");

    //  @selftest
    //  Simple create/destroy test
    //mc_parameter_get_value_consumer_t *self = mc_parameter_get_value_consumer_new ();
    //assert (self);
    //mc_parameter_get_value_consumer_destroy (&self);
    //  @end
    printf ("OK\n");
}
