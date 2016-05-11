/* */
#include "submit_app.h"

// state
struct _submit_app_myprovider_t {
  int encoding_format_code;
  void *encoder;
  void *decoder;
};

submit_app_myprovider_t *submit_app_myprovider_new(int encoding_format_code,
    void *encoder, void *decoder) {
  submit_app_myprovider_t *self = (submit_app_myprovider_t *) malloc(
      sizeof(submit_app_myprovider_t));
  if (!self)
    return NULL;

  self->encoding_format_code = encoding_format_code;
  self->encoder = encoder;
  self->decoder = decoder;
  return self;
}

int submit_app_myprovider_get_encoding_format_code(
    submit_app_myprovider_t *self) {
  return self->encoding_format_code;
}

void submit_app_myprovider_set_decoder(submit_app_myprovider_t *self,
    void *decoder) {
  self->decoder = decoder;
}

void *submit_app_myprovider_get_decoder(submit_app_myprovider_t *self) {
  return self->decoder;
}

int submit_app_myprovider_initialize(void *self, mal_actor_t *mal_actor) {
  int rc = 0;
  //submit_app_myprovider_t *provider = (submit_app_myprovider_t *) self;

  rc = mal_routing_register_provider_submit_handler(
      mal_actor_get_router(mal_actor),
      TESTAREA_AREA_NUMBER,
      TESTAREA_AREA_VERSION,
      TESTAREA_TESTSERVICE_SERVICE_NUMBER,
      TESTAREA_TESTSERVICE_TESTSUBMIT_OPERATION_NUMBER,
      submit_app_myprovider_testarea_testservice_testsubmit);

  return rc;
}

int submit_app_myprovider_finalize(void *self, mal_actor_t *mal_actor) {
  int rc = 0;
  //submit_app_myprovider_t *provider = (submit_app_myprovider_t *) self;

  return rc;
}

void testarea_testservice_testcomposite_print(
    testarea_testservice_testcomposite_t *self) {
  printf("testarea_testservice_testcomposite_print(");
  printf("stringfield=%s", testarea_testservice_testcomposite_get_stringfield(self));
  printf(",intfield_is_present=%d", testarea_testservice_testcomposite_intfield_is_present(self));
  printf(",intfield=%d", testarea_testservice_testcomposite_get_intfield(self));
  printf(")");
}

void testarea_testservice_testfinalcompositea_print(
    testarea_testservice_testfinalcompositea_t *self) {
  printf("testarea_testservice_testfinalcompositea_print(");
  printf("intfield=%d", self->intfield);
  printf(",intfield1=%d", self->intfield2);
  printf(")");
}

int submit_app_myprovider_testarea_testservice_testsubmit(
    void *self, mal_ctx_t *mal_ctx,
    mal_endpoint_t *mal_endpoint, mal_message_t *message) {
  int rc = 0;

  submit_app_myprovider_t *provider = (submit_app_myprovider_t *) self;

  printf("submit_app_myprovider: URI To=%s\n", mal_message_get_uri_to(message));

  // application code (may decode only a part of the message body)

  // TODO (AF): Use virtual allocation and initialization functions from encoder.
  malbinary_cursor_t cursor;
  malbinary_cursor_init(&cursor,
      mal_message_get_body(message),
      mal_message_get_body_offset(message) + mal_message_get_body_length(message),
      mal_message_get_body_offset(message));

  printf("submit_app_myprovider: offset=%d", mal_message_get_body_offset(message));

  testarea_testservice_testcomposite_t *parameter_0;
  printf("submit_app_myprovider: decode first parameter\n");
  rc = testarea_testservice_testsend_send_decode_0(provider->encoding_format_code,
      &cursor, provider->decoder, &parameter_0);
  malbinary_cursor_assert(&cursor);
  if (rc < 0)
    return rc;

  printf("parameter_0=\n");
  testarea_testservice_testcomposite_print(parameter_0);
  printf("\n");

  printf("submit_app_myprovider: offset=%d", malbinary_cursor_get_body_offset(&cursor));

  mal_string_list_t *parameter_1;
  printf("submit_app_myprovider: decode second parameter\n");
  rc = testarea_testservice_testsend_send_decode_1(provider->encoding_format_code,
      &cursor, provider->decoder, &parameter_1);
  malbinary_cursor_assert(&cursor);
  if (rc < 0)
    return rc;

  printf("parameter_1=\n");
  mal_string_list_print(parameter_1);
  printf("\n");

  printf("submit_app_myprovider: offset=%d", malbinary_cursor_get_body_offset(&cursor));

  long short_form;
  void *parameter_2;
  printf("submit_app_myprovider: decode third parameter\n");
  rc = testarea_testservice_testsend_send_decode_2(provider->encoding_format_code,
      &cursor, provider->decoder, &short_form, &parameter_2);
  malbinary_cursor_assert(&cursor);
  if (rc < 0)
    return rc;

  printf("submit_app_myprovider: offset=%d", malbinary_cursor_get_body_offset(&cursor));
  printf("submit_app_myprovider: decoding done, short form=%lu\n", short_form);

  // parameter_0 may be NULL
  if (parameter_0 == NULL) {
  } else {
  }

  // parameter_1 may be NULL
  if (parameter_1 == NULL) {
  } else {
  }

  // parameter_2 may be NULL
  if (parameter_2 == NULL) {
  } else {
    if (short_form == TESTAREA_TESTSERVICE_TESTFINALCOMPOSITEA_SHORT_FORM) {
      testarea_testservice_testfinalcompositea_t *testfinalcompositea =
          (testarea_testservice_testfinalcompositea_t *) parameter_2;
      mal_integer_t int_value =
          testarea_testservice_testfinalcompositea_get_intfield2(testfinalcompositea);
      printf("int_value=%d\n", int_value);

      printf("parameter_2=\n");
      testarea_testservice_testfinalcompositea_print(testfinalcompositea);
      printf("\n");

      printf("destroy parameter_2\n");
      testarea_testservice_testfinalcompositea_destroy(&testfinalcompositea);
    }
  }

  // Send ack to consumer

  mal_message_t *result_message = mal_message_new_void();

  mal_message_set_uri_from(result_message, "");
  mal_message_set_uri_to(result_message, "");

  mal_message_set_authentication_id(result_message, mal_blob_new(0));
  mal_message_set_qoslevel(result_message, mal_message_get_qoslevel(message));
  mal_message_set_priority(result_message, mal_message_get_priority(message));
  mal_message_set_domain(result_message, mal_message_get_domain(message));
  mal_message_set_network_zone(result_message, mal_message_get_network_zone(message));
  mal_message_set_session(result_message, mal_message_get_session(message));
  mal_message_set_session_name(result_message, mal_message_get_session_name(message));
  mal_message_set_body(result_message, NULL);
  mal_message_set_body_length(result_message, 0);

  printf("AF: submit_app_myprovider: handler send ACK\n");
  rc = testarea_testservice_testsubmit_submit_ack(mal_endpoint, message, result_message, (0 != 0));
  printf("AF: submit_app_myprovider: handler ACK sent\n");

  printf("destroy parameter_0\n");
  testarea_testservice_testcomposite_destroy(&parameter_0);
  printf("destroy parameter_1\n");
  mal_string_list_destroy(&parameter_1);

  printf("destroy MAL init message\n");
  mal_message_destroy(&message, mal_ctx);

  printf("destroy MAL result message\n");
  mal_message_destroy(&result_message, mal_ctx);

  printf("Provider done.\n");
  return rc;
}

void submit_app_myprovider_test(bool verbose) {
  printf(" * submit_app_myprovider_test: ");
  if (verbose)
    printf("\n");

  //  @selftest
  // ...
  //  @end
  printf("OK\n");
}
