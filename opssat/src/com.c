#include "com.h"

// generated code for operation com_event_monitorevent

int com_event_monitorevent_update_add_encoding_length_0(mal_encoder_t * encoder, com_objectdetails_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = com_objectdetails_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_0(void * cursor, mal_encoder_t * encoder, com_objectdetails_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = com_objectdetails_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_decode_0(void * cursor, mal_decoder_t * decoder, com_objectdetails_list_t ** element_res)
{
  int rc = 0;
  switch (decoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag;
      presence_flag = true;
      if (presence_flag)
      {
        *element_res = com_objectdetails_list_new(0);
        if (*element_res == NULL) return -1;
        rc = com_objectdetails_list_decode_malbinary(*element_res, decoder, cursor);
        if (rc < 0)
          return rc;
      }
      else
      {
        *element_res = NULL;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_decode_0_mal_element(void * cursor, mal_decoder_t * decoder, mal_element_holder_t * element_holder)
{
  int rc = 0;
  union mal_element_t value;
  rc = com_event_monitorevent_update_decode_0(cursor, decoder, (void*)&value.composite_value);
  mal_element_holder_set_presence_flag(element_holder, ((void*)value.composite_value != NULL));
  mal_element_holder_set_value(element_holder, value);
  mal_element_holder_set_short_form(element_holder, COM_OBJECTDETAILS_LIST_SHORT_FORM);
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_activitytracking_activityacceptance_list(mal_encoder_t * encoder, com_activitytracking_activityacceptance_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activityacceptance_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_activitytracking_activityacceptance_list(void * cursor, mal_encoder_t * encoder, com_activitytracking_activityacceptance_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activityacceptance_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_activitytracking_activityacceptance(mal_encoder_t * encoder, com_activitytracking_activityacceptance_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activityacceptance_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_activitytracking_activityacceptance(void * cursor, mal_encoder_t * encoder, com_activitytracking_activityacceptance_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activityacceptance_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_activitytracking_activityexecution_list(mal_encoder_t * encoder, com_activitytracking_activityexecution_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activityexecution_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_activitytracking_activityexecution_list(void * cursor, mal_encoder_t * encoder, com_activitytracking_activityexecution_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activityexecution_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_activitytracking_activityexecution(mal_encoder_t * encoder, com_activitytracking_activityexecution_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activityexecution_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_activitytracking_activityexecution(void * cursor, mal_encoder_t * encoder, com_activitytracking_activityexecution_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activityexecution_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_activitytracking_activitytransfer_list(mal_encoder_t * encoder, com_activitytracking_activitytransfer_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activitytransfer_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_activitytracking_activitytransfer_list(void * cursor, mal_encoder_t * encoder, com_activitytracking_activitytransfer_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activitytransfer_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_activitytracking_activitytransfer(mal_encoder_t * encoder, com_activitytracking_activitytransfer_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activitytransfer_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_activitytracking_activitytransfer(void * cursor, mal_encoder_t * encoder, com_activitytracking_activitytransfer_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_activitytransfer_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_activitytracking_operationactivity_list(mal_encoder_t * encoder, com_activitytracking_operationactivity_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ACTIVITYTRACKING_OPERATIONACTIVITY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_operationactivity_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_activitytracking_operationactivity_list(void * cursor, mal_encoder_t * encoder, com_activitytracking_operationactivity_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ACTIVITYTRACKING_OPERATIONACTIVITY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_operationactivity_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_activitytracking_operationactivity(mal_encoder_t * encoder, com_activitytracking_operationactivity_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ACTIVITYTRACKING_OPERATIONACTIVITY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_operationactivity_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_activitytracking_operationactivity(void * cursor, mal_encoder_t * encoder, com_activitytracking_operationactivity_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ACTIVITYTRACKING_OPERATIONACTIVITY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_activitytracking_operationactivity_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_archivedetails_list(mal_encoder_t * encoder, com_archive_archivedetails_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_ARCHIVEDETAILS_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_archive_archivedetails_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_archivedetails_list(void * cursor, mal_encoder_t * encoder, com_archive_archivedetails_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_ARCHIVEDETAILS_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_archive_archivedetails_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_archivedetails(mal_encoder_t * encoder, com_archive_archivedetails_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_ARCHIVEDETAILS_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_archive_archivedetails_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_archivedetails(void * cursor, mal_encoder_t * encoder, com_archive_archivedetails_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_ARCHIVEDETAILS_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_archive_archivedetails_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_archivequery_list(mal_encoder_t * encoder, com_archive_archivequery_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_ARCHIVEQUERY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_archive_archivequery_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_archivequery_list(void * cursor, mal_encoder_t * encoder, com_archive_archivequery_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_ARCHIVEQUERY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_archive_archivequery_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_archivequery(mal_encoder_t * encoder, com_archive_archivequery_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_ARCHIVEQUERY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_archive_archivequery_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_archivequery(void * cursor, mal_encoder_t * encoder, com_archive_archivequery_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_ARCHIVEQUERY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_archive_archivequery_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_compositefilter_list(mal_encoder_t * encoder, com_archive_compositefilter_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_COMPOSITEFILTER_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_archive_compositefilter_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_compositefilter_list(void * cursor, mal_encoder_t * encoder, com_archive_compositefilter_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_COMPOSITEFILTER_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_archive_compositefilter_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_compositefilter(mal_encoder_t * encoder, com_archive_compositefilter_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_COMPOSITEFILTER_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_archive_compositefilter_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_compositefilter(void * cursor, mal_encoder_t * encoder, com_archive_compositefilter_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_COMPOSITEFILTER_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_archive_compositefilter_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_compositefilterset_list(mal_encoder_t * encoder, com_archive_compositefilterset_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_COMPOSITEFILTERSET_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_archive_compositefilterset_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_compositefilterset_list(void * cursor, mal_encoder_t * encoder, com_archive_compositefilterset_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_COMPOSITEFILTERSET_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_archive_compositefilterset_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_compositefilterset(mal_encoder_t * encoder, com_archive_compositefilterset_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_COMPOSITEFILTERSET_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_archive_compositefilterset_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_compositefilterset(void * cursor, mal_encoder_t * encoder, com_archive_compositefilterset_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_COMPOSITEFILTERSET_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_archive_compositefilterset_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_expressionoperator_list(mal_encoder_t * encoder, com_archive_expressionoperator_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_EXPRESSIONOPERATOR_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_archive_expressionoperator_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_expressionoperator_list(void * cursor, mal_encoder_t * encoder, com_archive_expressionoperator_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_EXPRESSIONOPERATOR_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_archive_expressionoperator_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_archive_expressionoperator(mal_encoder_t * encoder, bool presence_flag, com_archive_expressionoperator_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_ARCHIVE_EXPRESSIONOPERATOR_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_archive_expressionoperator(void * cursor, mal_encoder_t * encoder, bool presence_flag, com_archive_expressionoperator_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_ARCHIVE_EXPRESSIONOPERATOR_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_instancebooleanpair_list(mal_encoder_t * encoder, com_instancebooleanpair_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_INSTANCEBOOLEANPAIR_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_instancebooleanpair_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_instancebooleanpair_list(void * cursor, mal_encoder_t * encoder, com_instancebooleanpair_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_INSTANCEBOOLEANPAIR_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_instancebooleanpair_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_instancebooleanpair(mal_encoder_t * encoder, com_instancebooleanpair_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_INSTANCEBOOLEANPAIR_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_instancebooleanpair_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_instancebooleanpair(void * cursor, mal_encoder_t * encoder, com_instancebooleanpair_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_INSTANCEBOOLEANPAIR_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_instancebooleanpair_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_objectdetails_list(mal_encoder_t * encoder, com_objectdetails_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_OBJECTDETAILS_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_objectdetails_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_objectdetails_list(void * cursor, mal_encoder_t * encoder, com_objectdetails_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_OBJECTDETAILS_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_objectdetails_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_objectdetails(mal_encoder_t * encoder, com_objectdetails_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_OBJECTDETAILS_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_objectdetails_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_objectdetails(void * cursor, mal_encoder_t * encoder, com_objectdetails_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_OBJECTDETAILS_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_objectdetails_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_objectid_list(mal_encoder_t * encoder, com_objectid_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_OBJECTID_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_objectid_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_objectid_list(void * cursor, mal_encoder_t * encoder, com_objectid_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_OBJECTID_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_objectid_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_objectid(mal_encoder_t * encoder, com_objectid_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_OBJECTID_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_objectid_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_objectid(void * cursor, mal_encoder_t * encoder, com_objectid_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_OBJECTID_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_objectid_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_objectkey_list(mal_encoder_t * encoder, com_objectkey_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_OBJECTKEY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_objectkey_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_objectkey_list(void * cursor, mal_encoder_t * encoder, com_objectkey_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_OBJECTKEY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_objectkey_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_objectkey(mal_encoder_t * encoder, com_objectkey_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_OBJECTKEY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_objectkey_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_objectkey(void * cursor, mal_encoder_t * encoder, com_objectkey_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_OBJECTKEY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_objectkey_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_objecttype_list(mal_encoder_t * encoder, com_objecttype_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_OBJECTTYPE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_objecttype_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_objecttype_list(void * cursor, mal_encoder_t * encoder, com_objecttype_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_OBJECTTYPE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_objecttype_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_com_objecttype(mal_encoder_t * encoder, com_objecttype_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, COM_OBJECTTYPE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = com_objecttype_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_com_objecttype(void * cursor, mal_encoder_t * encoder, com_objecttype_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, COM_OBJECTTYPE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = com_objecttype_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_blob_list(mal_encoder_t * encoder, mal_blob_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_BLOB_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_blob_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_blob_list(void * cursor, mal_encoder_t * encoder, mal_blob_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_BLOB_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_blob_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_blob(mal_encoder_t * encoder, mal_blob_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_BLOB_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_blob_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_blob(void * cursor, mal_encoder_t * encoder, mal_blob_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_BLOB_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_blob(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_boolean_list(mal_encoder_t * encoder, mal_boolean_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_BOOLEAN_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_boolean_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_boolean_list(void * cursor, mal_encoder_t * encoder, mal_boolean_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_BOOLEAN_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_boolean_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_boolean(mal_encoder_t * encoder, bool presence_flag, mal_boolean_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_BOOLEAN_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_boolean_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_boolean(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_boolean_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_BOOLEAN_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_boolean(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_double_list(mal_encoder_t * encoder, mal_double_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_DOUBLE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_double_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_double_list(void * cursor, mal_encoder_t * encoder, mal_double_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_DOUBLE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_double_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_double(mal_encoder_t * encoder, bool presence_flag, mal_double_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_DOUBLE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_double_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_double(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_double_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_DOUBLE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_double(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_duration_list(mal_encoder_t * encoder, mal_duration_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_DURATION_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_duration_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_duration_list(void * cursor, mal_encoder_t * encoder, mal_duration_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_DURATION_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_duration_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_duration(mal_encoder_t * encoder, bool presence_flag, mal_duration_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_DURATION_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_duration_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_duration(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_duration_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_DURATION_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_duration(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_entitykey_list(mal_encoder_t * encoder, mal_entitykey_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_ENTITYKEY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_entitykey_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_entitykey_list(void * cursor, mal_encoder_t * encoder, mal_entitykey_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_ENTITYKEY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_entitykey_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_entitykey(mal_encoder_t * encoder, mal_entitykey_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_ENTITYKEY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_entitykey_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_entitykey(void * cursor, mal_encoder_t * encoder, mal_entitykey_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_ENTITYKEY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_entitykey_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_entityrequest_list(mal_encoder_t * encoder, mal_entityrequest_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_ENTITYREQUEST_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_entityrequest_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_entityrequest_list(void * cursor, mal_encoder_t * encoder, mal_entityrequest_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_ENTITYREQUEST_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_entityrequest_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_entityrequest(mal_encoder_t * encoder, mal_entityrequest_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_ENTITYREQUEST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_entityrequest_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_entityrequest(void * cursor, mal_encoder_t * encoder, mal_entityrequest_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_ENTITYREQUEST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_entityrequest_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_file_list(mal_encoder_t * encoder, mal_file_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_FILE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_file_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_file_list(void * cursor, mal_encoder_t * encoder, mal_file_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_FILE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_file_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_file(mal_encoder_t * encoder, mal_file_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_FILE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_file_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_file(void * cursor, mal_encoder_t * encoder, mal_file_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_FILE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_file_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_finetime_list(mal_encoder_t * encoder, mal_finetime_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_FINETIME_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_finetime_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_finetime_list(void * cursor, mal_encoder_t * encoder, mal_finetime_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_FINETIME_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_finetime_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_finetime(mal_encoder_t * encoder, bool presence_flag, mal_finetime_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_FINETIME_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_finetime_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_finetime(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_finetime_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_FINETIME_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_finetime(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_float_list(mal_encoder_t * encoder, mal_float_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_FLOAT_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_float_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_float_list(void * cursor, mal_encoder_t * encoder, mal_float_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_FLOAT_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_float_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_float(mal_encoder_t * encoder, bool presence_flag, mal_float_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_FLOAT_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_float_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_float(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_float_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_FLOAT_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_float(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_idbooleanpair_list(mal_encoder_t * encoder, mal_idbooleanpair_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_IDBOOLEANPAIR_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_idbooleanpair_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_idbooleanpair_list(void * cursor, mal_encoder_t * encoder, mal_idbooleanpair_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_IDBOOLEANPAIR_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_idbooleanpair_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_idbooleanpair(mal_encoder_t * encoder, mal_idbooleanpair_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_IDBOOLEANPAIR_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_idbooleanpair_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_idbooleanpair(void * cursor, mal_encoder_t * encoder, mal_idbooleanpair_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_IDBOOLEANPAIR_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_idbooleanpair_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_identifier_list(mal_encoder_t * encoder, mal_identifier_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_IDENTIFIER_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_identifier_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_identifier_list(void * cursor, mal_encoder_t * encoder, mal_identifier_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_IDENTIFIER_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_identifier_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_identifier(mal_encoder_t * encoder, mal_identifier_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_IDENTIFIER_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_identifier_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_identifier(void * cursor, mal_encoder_t * encoder, mal_identifier_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_IDENTIFIER_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_identifier(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_integer_list(mal_encoder_t * encoder, mal_integer_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_INTEGER_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_integer_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_integer_list(void * cursor, mal_encoder_t * encoder, mal_integer_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_INTEGER_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_integer_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_integer(mal_encoder_t * encoder, bool presence_flag, mal_integer_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_INTEGER_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_integer_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_integer(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_integer_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_INTEGER_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_integer(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_interactiontype_list(mal_encoder_t * encoder, mal_interactiontype_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_INTERACTIONTYPE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_interactiontype_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_interactiontype_list(void * cursor, mal_encoder_t * encoder, mal_interactiontype_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_INTERACTIONTYPE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_interactiontype_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_interactiontype(mal_encoder_t * encoder, bool presence_flag, mal_interactiontype_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_INTERACTIONTYPE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_interactiontype(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_interactiontype_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_INTERACTIONTYPE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_long_list(mal_encoder_t * encoder, mal_long_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_LONG_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_long_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_long_list(void * cursor, mal_encoder_t * encoder, mal_long_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_LONG_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_long_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_long(mal_encoder_t * encoder, bool presence_flag, mal_long_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_LONG_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_long_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_long(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_long_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_LONG_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_long(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_namedvalue_list(mal_encoder_t * encoder, mal_namedvalue_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_NAMEDVALUE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_namedvalue_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_namedvalue_list(void * cursor, mal_encoder_t * encoder, mal_namedvalue_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_NAMEDVALUE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_namedvalue_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_namedvalue(mal_encoder_t * encoder, mal_namedvalue_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_NAMEDVALUE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_namedvalue_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_namedvalue(void * cursor, mal_encoder_t * encoder, mal_namedvalue_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_NAMEDVALUE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_namedvalue_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_octet_list(mal_encoder_t * encoder, mal_octet_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_OCTET_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_octet_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_octet_list(void * cursor, mal_encoder_t * encoder, mal_octet_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_OCTET_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_octet_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_octet(mal_encoder_t * encoder, bool presence_flag, mal_octet_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_OCTET_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_octet_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_octet(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_octet_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_OCTET_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_octet(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_pair_list(mal_encoder_t * encoder, mal_pair_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_PAIR_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_pair_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_pair_list(void * cursor, mal_encoder_t * encoder, mal_pair_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_PAIR_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_pair_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_pair(mal_encoder_t * encoder, mal_pair_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_PAIR_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_pair_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_pair(void * cursor, mal_encoder_t * encoder, mal_pair_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_PAIR_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_pair_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_qoslevel_list(mal_encoder_t * encoder, mal_qoslevel_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_QOSLEVEL_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_qoslevel_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_qoslevel_list(void * cursor, mal_encoder_t * encoder, mal_qoslevel_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_QOSLEVEL_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_qoslevel_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_qoslevel(mal_encoder_t * encoder, bool presence_flag, mal_qoslevel_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_QOSLEVEL_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_qoslevel(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_qoslevel_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_QOSLEVEL_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_sessiontype_list(mal_encoder_t * encoder, mal_sessiontype_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_SESSIONTYPE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_sessiontype_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_sessiontype_list(void * cursor, mal_encoder_t * encoder, mal_sessiontype_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_SESSIONTYPE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_sessiontype_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_sessiontype(mal_encoder_t * encoder, bool presence_flag, mal_sessiontype_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_SESSIONTYPE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_sessiontype(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_sessiontype_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_SESSIONTYPE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_short_list(mal_encoder_t * encoder, mal_short_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_SHORT_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_short_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_short_list(void * cursor, mal_encoder_t * encoder, mal_short_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_SHORT_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_short_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_short(mal_encoder_t * encoder, bool presence_flag, mal_short_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_SHORT_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_short_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_short(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_short_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_SHORT_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_short(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_string_list(mal_encoder_t * encoder, mal_string_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_STRING_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_string_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_string_list(void * cursor, mal_encoder_t * encoder, mal_string_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_STRING_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_string_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_string(mal_encoder_t * encoder, mal_string_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_STRING_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_string_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_string(void * cursor, mal_encoder_t * encoder, mal_string_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_STRING_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_string(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_subscription_list(mal_encoder_t * encoder, mal_subscription_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_SUBSCRIPTION_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_subscription_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_subscription_list(void * cursor, mal_encoder_t * encoder, mal_subscription_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_SUBSCRIPTION_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_subscription_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_subscription(mal_encoder_t * encoder, mal_subscription_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_SUBSCRIPTION_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_subscription_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_subscription(void * cursor, mal_encoder_t * encoder, mal_subscription_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_SUBSCRIPTION_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_subscription_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_time_list(mal_encoder_t * encoder, mal_time_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_TIME_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_time_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_time_list(void * cursor, mal_encoder_t * encoder, mal_time_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_TIME_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_time_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_time(mal_encoder_t * encoder, bool presence_flag, mal_time_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_TIME_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_time_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_time(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_time_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_TIME_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_time(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_uinteger_list(mal_encoder_t * encoder, mal_uinteger_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_UINTEGER_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_uinteger_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_uinteger_list(void * cursor, mal_encoder_t * encoder, mal_uinteger_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_UINTEGER_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_uinteger_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_uinteger(mal_encoder_t * encoder, bool presence_flag, mal_uinteger_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_UINTEGER_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_uinteger_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_uinteger(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_uinteger_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_UINTEGER_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_uinteger(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_ulong_list(mal_encoder_t * encoder, mal_ulong_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_ULONG_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_ulong_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_ulong_list(void * cursor, mal_encoder_t * encoder, mal_ulong_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_ULONG_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_ulong_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_ulong(mal_encoder_t * encoder, bool presence_flag, mal_ulong_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_ULONG_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_ulong_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_ulong(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_ulong_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_ULONG_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_ulong(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_uoctet_list(mal_encoder_t * encoder, mal_uoctet_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_UOCTET_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_uoctet_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_uoctet_list(void * cursor, mal_encoder_t * encoder, mal_uoctet_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_UOCTET_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_uoctet_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_uoctet(mal_encoder_t * encoder, bool presence_flag, mal_uoctet_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_UOCTET_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_uoctet_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_uoctet(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_uoctet_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_UOCTET_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_uoctet(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_uri_list(mal_encoder_t * encoder, mal_uri_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_URI_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_uri_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_uri_list(void * cursor, mal_encoder_t * encoder, mal_uri_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_URI_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_uri_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_uri(mal_encoder_t * encoder, mal_uri_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_URI_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_uri_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_uri(void * cursor, mal_encoder_t * encoder, mal_uri_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_URI_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_uri(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_ushort_list(mal_encoder_t * encoder, mal_ushort_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_USHORT_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_ushort_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_ushort_list(void * cursor, mal_encoder_t * encoder, mal_ushort_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_USHORT_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_ushort_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_ushort(mal_encoder_t * encoder, bool presence_flag, mal_ushort_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_USHORT_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_ushort_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_ushort(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_ushort_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_USHORT_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_ushort(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_updateheader_list(mal_encoder_t * encoder, mal_updateheader_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_UPDATEHEADER_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_updateheader_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_updateheader_list(void * cursor, mal_encoder_t * encoder, mal_updateheader_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_UPDATEHEADER_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_updateheader_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_updateheader(mal_encoder_t * encoder, mal_updateheader_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_UPDATEHEADER_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_updateheader_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_updateheader(void * cursor, mal_encoder_t * encoder, mal_updateheader_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_UPDATEHEADER_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_updateheader_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_updatetype_list(mal_encoder_t * encoder, mal_updatetype_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_UPDATETYPE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_updatetype_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_updatetype_list(void * cursor, mal_encoder_t * encoder, mal_updatetype_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_UPDATETYPE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_updatetype_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mal_updatetype(mal_encoder_t * encoder, bool presence_flag, mal_updatetype_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MAL_UPDATETYPE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mal_updatetype(void * cursor, mal_encoder_t * encoder, bool presence_flag, mal_updatetype_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MAL_UPDATETYPE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_action_actioncategory_list(mal_encoder_t * encoder, mc_action_actioncategory_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ACTION_ACTIONCATEGORY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_action_actioncategory_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_action_actioncategory_list(void * cursor, mal_encoder_t * encoder, mc_action_actioncategory_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ACTION_ACTIONCATEGORY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_action_actioncategory_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_action_actioncategory(mal_encoder_t * encoder, bool presence_flag, mc_action_actioncategory_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ACTION_ACTIONCATEGORY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_action_actioncategory(void * cursor, mal_encoder_t * encoder, bool presence_flag, mc_action_actioncategory_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ACTION_ACTIONCATEGORY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_action_actioncreationrequest_list(mal_encoder_t * encoder, mc_action_actioncreationrequest_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ACTION_ACTIONCREATIONREQUEST_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_action_actioncreationrequest_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_action_actioncreationrequest_list(void * cursor, mal_encoder_t * encoder, mc_action_actioncreationrequest_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ACTION_ACTIONCREATIONREQUEST_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_action_actioncreationrequest_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_action_actioncreationrequest(mal_encoder_t * encoder, mc_action_actioncreationrequest_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ACTION_ACTIONCREATIONREQUEST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_action_actioncreationrequest_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_action_actioncreationrequest(void * cursor, mal_encoder_t * encoder, mc_action_actioncreationrequest_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ACTION_ACTIONCREATIONREQUEST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_action_actioncreationrequest_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_action_actiondefinitiondetails_list(mal_encoder_t * encoder, mc_action_actiondefinitiondetails_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ACTION_ACTIONDEFINITIONDETAILS_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_action_actiondefinitiondetails_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_action_actiondefinitiondetails_list(void * cursor, mal_encoder_t * encoder, mc_action_actiondefinitiondetails_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ACTION_ACTIONDEFINITIONDETAILS_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_action_actiondefinitiondetails_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_action_actiondefinitiondetails(mal_encoder_t * encoder, mc_action_actiondefinitiondetails_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ACTION_ACTIONDEFINITIONDETAILS_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_action_actiondefinitiondetails_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_action_actiondefinitiondetails(void * cursor, mal_encoder_t * encoder, mc_action_actiondefinitiondetails_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ACTION_ACTIONDEFINITIONDETAILS_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_action_actiondefinitiondetails_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_action_actioninstancedetails_list(mal_encoder_t * encoder, mc_action_actioninstancedetails_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ACTION_ACTIONINSTANCEDETAILS_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_action_actioninstancedetails_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_action_actioninstancedetails_list(void * cursor, mal_encoder_t * encoder, mc_action_actioninstancedetails_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ACTION_ACTIONINSTANCEDETAILS_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_action_actioninstancedetails_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_action_actioninstancedetails(mal_encoder_t * encoder, mc_action_actioninstancedetails_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ACTION_ACTIONINSTANCEDETAILS_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_action_actioninstancedetails_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_action_actioninstancedetails(void * cursor, mal_encoder_t * encoder, mc_action_actioninstancedetails_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ACTION_ACTIONINSTANCEDETAILS_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_action_actioninstancedetails_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_aggregationcategory_list(mal_encoder_t * encoder, mc_aggregation_aggregationcategory_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_AGGREGATIONCATEGORY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationcategory_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_aggregationcategory_list(void * cursor, mal_encoder_t * encoder, mc_aggregation_aggregationcategory_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_AGGREGATIONCATEGORY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationcategory_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_aggregationcategory(mal_encoder_t * encoder, bool presence_flag, mc_aggregation_aggregationcategory_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_AGGREGATIONCATEGORY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_aggregationcategory(void * cursor, mal_encoder_t * encoder, bool presence_flag, mc_aggregation_aggregationcategory_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_AGGREGATIONCATEGORY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_aggregationdefinition_list(mal_encoder_t * encoder, mc_aggregation_aggregationdefinition_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_AGGREGATIONDEFINITION_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationdefinition_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_aggregationdefinition_list(void * cursor, mal_encoder_t * encoder, mc_aggregation_aggregationdefinition_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_AGGREGATIONDEFINITION_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationdefinition_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_aggregationdefinition(mal_encoder_t * encoder, mc_aggregation_aggregationdefinition_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_AGGREGATIONDEFINITION_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationdefinition_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_aggregationdefinition(void * cursor, mal_encoder_t * encoder, mc_aggregation_aggregationdefinition_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_AGGREGATIONDEFINITION_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationdefinition_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_aggregationreference_list(mal_encoder_t * encoder, mc_aggregation_aggregationreference_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_AGGREGATIONREFERENCE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationreference_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_aggregationreference_list(void * cursor, mal_encoder_t * encoder, mc_aggregation_aggregationreference_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_AGGREGATIONREFERENCE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationreference_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_aggregationreference(mal_encoder_t * encoder, mc_aggregation_aggregationreference_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_AGGREGATIONREFERENCE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationreference_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_aggregationreference(void * cursor, mal_encoder_t * encoder, mc_aggregation_aggregationreference_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_AGGREGATIONREFERENCE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationreference_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_aggregationvalue_list(mal_encoder_t * encoder, mc_aggregation_aggregationvalue_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_AGGREGATIONVALUE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationvalue_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_aggregationvalue_list(void * cursor, mal_encoder_t * encoder, mc_aggregation_aggregationvalue_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_AGGREGATIONVALUE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationvalue_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_aggregationvalue(mal_encoder_t * encoder, mc_aggregation_aggregationvalue_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_AGGREGATIONVALUE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationvalue_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_aggregationvalue(void * cursor, mal_encoder_t * encoder, mc_aggregation_aggregationvalue_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_AGGREGATIONVALUE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_aggregationvalue_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_generationmode_list(mal_encoder_t * encoder, mc_aggregation_generationmode_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_GENERATIONMODE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_generationmode_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_generationmode_list(void * cursor, mal_encoder_t * encoder, mc_aggregation_generationmode_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_GENERATIONMODE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_generationmode_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_generationmode(mal_encoder_t * encoder, bool presence_flag, mc_aggregation_generationmode_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_GENERATIONMODE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_generationmode(void * cursor, mal_encoder_t * encoder, bool presence_flag, mc_aggregation_generationmode_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_GENERATIONMODE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_thresholdfilter_list(mal_encoder_t * encoder, mc_aggregation_thresholdfilter_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_THRESHOLDFILTER_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_thresholdfilter_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_thresholdfilter_list(void * cursor, mal_encoder_t * encoder, mc_aggregation_thresholdfilter_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_THRESHOLDFILTER_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_thresholdfilter_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_thresholdfilter(mal_encoder_t * encoder, mc_aggregation_thresholdfilter_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_THRESHOLDFILTER_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_thresholdfilter_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_thresholdfilter(void * cursor, mal_encoder_t * encoder, mc_aggregation_thresholdfilter_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_THRESHOLDFILTER_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_thresholdfilter_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_thresholdtype_list(mal_encoder_t * encoder, mc_aggregation_thresholdtype_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_THRESHOLDTYPE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_thresholdtype_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_thresholdtype_list(void * cursor, mal_encoder_t * encoder, mc_aggregation_thresholdtype_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_THRESHOLDTYPE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_aggregation_thresholdtype_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_aggregation_thresholdtype(mal_encoder_t * encoder, bool presence_flag, mc_aggregation_thresholdtype_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_AGGREGATION_THRESHOLDTYPE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_aggregation_thresholdtype(void * cursor, mal_encoder_t * encoder, bool presence_flag, mc_aggregation_thresholdtype_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_AGGREGATION_THRESHOLDTYPE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_alert_alertdefinition_list(mal_encoder_t * encoder, mc_alert_alertdefinition_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ALERT_ALERTDEFINITION_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_alert_alertdefinition_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_alert_alertdefinition_list(void * cursor, mal_encoder_t * encoder, mc_alert_alertdefinition_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ALERT_ALERTDEFINITION_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_alert_alertdefinition_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_alert_alertdefinition(mal_encoder_t * encoder, mc_alert_alertdefinition_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ALERT_ALERTDEFINITION_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_alert_alertdefinition_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_alert_alertdefinition(void * cursor, mal_encoder_t * encoder, mc_alert_alertdefinition_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ALERT_ALERTDEFINITION_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_alert_alertdefinition_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_alert_alertevent_list(mal_encoder_t * encoder, mc_alert_alertevent_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ALERT_ALERTEVENT_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_alert_alertevent_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_alert_alertevent_list(void * cursor, mal_encoder_t * encoder, mc_alert_alertevent_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ALERT_ALERTEVENT_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_alert_alertevent_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_alert_alertevent(mal_encoder_t * encoder, mc_alert_alertevent_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ALERT_ALERTEVENT_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_alert_alertevent_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_alert_alertevent(void * cursor, mal_encoder_t * encoder, mc_alert_alertevent_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ALERT_ALERTEVENT_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_alert_alertevent_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checklink_list(mal_encoder_t * encoder, mc_check_checklink_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKLINK_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_checklink_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checklink_list(void * cursor, mal_encoder_t * encoder, mc_check_checklink_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKLINK_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_checklink_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checklink(mal_encoder_t * encoder, mc_check_checklink_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKLINK_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_checklink_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checklink(void * cursor, mal_encoder_t * encoder, mc_check_checklink_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKLINK_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_checklink_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checkresult_list(mal_encoder_t * encoder, mc_check_checkresult_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKRESULT_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_checkresult_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checkresult_list(void * cursor, mal_encoder_t * encoder, mc_check_checkresult_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKRESULT_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_checkresult_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checkresult(mal_encoder_t * encoder, mc_check_checkresult_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKRESULT_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_checkresult_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checkresult(void * cursor, mal_encoder_t * encoder, mc_check_checkresult_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKRESULT_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_checkresult_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checkresultfilter_list(mal_encoder_t * encoder, mc_check_checkresultfilter_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKRESULTFILTER_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_checkresultfilter_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checkresultfilter_list(void * cursor, mal_encoder_t * encoder, mc_check_checkresultfilter_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKRESULTFILTER_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_checkresultfilter_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checkresultfilter(mal_encoder_t * encoder, mc_check_checkresultfilter_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKRESULTFILTER_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_checkresultfilter_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checkresultfilter(void * cursor, mal_encoder_t * encoder, mc_check_checkresultfilter_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKRESULTFILTER_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_checkresultfilter_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checkstate_list(mal_encoder_t * encoder, mc_check_checkstate_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKSTATE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_checkstate_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checkstate_list(void * cursor, mal_encoder_t * encoder, mc_check_checkstate_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKSTATE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_checkstate_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checkstate(mal_encoder_t * encoder, bool presence_flag, mc_check_checkstate_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKSTATE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checkstate(void * cursor, mal_encoder_t * encoder, bool presence_flag, mc_check_checkstate_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKSTATE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checksummary_list(mal_encoder_t * encoder, mc_check_checksummary_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKSUMMARY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_checksummary_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checksummary_list(void * cursor, mal_encoder_t * encoder, mc_check_checksummary_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKSUMMARY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_checksummary_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_checksummary(mal_encoder_t * encoder, mc_check_checksummary_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CHECKSUMMARY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_checksummary_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_checksummary(void * cursor, mal_encoder_t * encoder, mc_check_checksummary_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CHECKSUMMARY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_checksummary_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_constantcheck_list(mal_encoder_t * encoder, mc_check_constantcheck_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CONSTANTCHECK_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_constantcheck_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_constantcheck_list(void * cursor, mal_encoder_t * encoder, mc_check_constantcheck_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CONSTANTCHECK_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_constantcheck_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_constantcheck(mal_encoder_t * encoder, mc_check_constantcheck_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_CONSTANTCHECK_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_constantcheck_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_constantcheck(void * cursor, mal_encoder_t * encoder, mc_check_constantcheck_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_CONSTANTCHECK_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_constantcheck_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_deltacheck_list(mal_encoder_t * encoder, mc_check_deltacheck_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_DELTACHECK_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_deltacheck_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_deltacheck_list(void * cursor, mal_encoder_t * encoder, mc_check_deltacheck_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_DELTACHECK_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_deltacheck_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_deltacheck(mal_encoder_t * encoder, mc_check_deltacheck_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_DELTACHECK_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_deltacheck_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_deltacheck(void * cursor, mal_encoder_t * encoder, mc_check_deltacheck_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_DELTACHECK_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_deltacheck_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_limitcheck_list(mal_encoder_t * encoder, mc_check_limitcheck_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_LIMITCHECK_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_limitcheck_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_limitcheck_list(void * cursor, mal_encoder_t * encoder, mc_check_limitcheck_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_LIMITCHECK_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_limitcheck_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_limitcheck(mal_encoder_t * encoder, mc_check_limitcheck_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_LIMITCHECK_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_limitcheck_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_limitcheck(void * cursor, mal_encoder_t * encoder, mc_check_limitcheck_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_LIMITCHECK_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_limitcheck_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_referencecheck_list(mal_encoder_t * encoder, mc_check_referencecheck_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_REFERENCECHECK_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_referencecheck_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_referencecheck_list(void * cursor, mal_encoder_t * encoder, mc_check_referencecheck_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_REFERENCECHECK_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_referencecheck_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_referencecheck(mal_encoder_t * encoder, mc_check_referencecheck_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_REFERENCECHECK_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_referencecheck_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_referencecheck(void * cursor, mal_encoder_t * encoder, mc_check_referencecheck_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_REFERENCECHECK_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_referencecheck_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_referencevalue_list(mal_encoder_t * encoder, mc_check_referencevalue_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_REFERENCEVALUE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_referencevalue_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_referencevalue_list(void * cursor, mal_encoder_t * encoder, mc_check_referencevalue_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_REFERENCEVALUE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_referencevalue_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_check_referencevalue(mal_encoder_t * encoder, mc_check_referencevalue_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CHECK_REFERENCEVALUE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_check_referencevalue_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_check_referencevalue(void * cursor, mal_encoder_t * encoder, mc_check_referencevalue_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CHECK_REFERENCEVALUE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_check_referencevalue_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameter_parameterconversion_list(mal_encoder_t * encoder, mc_parameter_parameterconversion_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETER_PARAMETERCONVERSION_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parameterconversion_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameter_parameterconversion_list(void * cursor, mal_encoder_t * encoder, mc_parameter_parameterconversion_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETER_PARAMETERCONVERSION_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parameterconversion_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameter_parameterconversion(mal_encoder_t * encoder, mc_parameter_parameterconversion_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETER_PARAMETERCONVERSION_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parameterconversion_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameter_parameterconversion(void * cursor, mal_encoder_t * encoder, mc_parameter_parameterconversion_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETER_PARAMETERCONVERSION_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parameterconversion_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameter_parameterdefinition_list(mal_encoder_t * encoder, mc_parameter_parameterdefinition_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETER_PARAMETERDEFINITION_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parameterdefinition_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameter_parameterdefinition_list(void * cursor, mal_encoder_t * encoder, mc_parameter_parameterdefinition_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETER_PARAMETERDEFINITION_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parameterdefinition_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameter_parameterdefinition(mal_encoder_t * encoder, mc_parameter_parameterdefinition_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETER_PARAMETERDEFINITION_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parameterdefinition_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameter_parameterdefinition(void * cursor, mal_encoder_t * encoder, mc_parameter_parameterdefinition_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETER_PARAMETERDEFINITION_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parameterdefinition_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameter_parametervalue_list(mal_encoder_t * encoder, mc_parameter_parametervalue_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETER_PARAMETERVALUE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parametervalue_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameter_parametervalue_list(void * cursor, mal_encoder_t * encoder, mc_parameter_parametervalue_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETER_PARAMETERVALUE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parametervalue_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameter_parametervalue(mal_encoder_t * encoder, mc_parameter_parametervalue_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETER_PARAMETERVALUE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parametervalue_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameter_parametervalue(void * cursor, mal_encoder_t * encoder, mc_parameter_parametervalue_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETER_PARAMETERVALUE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_parameter_parametervalue_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameter_validity_list(mal_encoder_t * encoder, mc_parameter_validity_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETER_VALIDITY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_parameter_validity_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameter_validity_list(void * cursor, mal_encoder_t * encoder, mc_parameter_validity_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETER_VALIDITY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_parameter_validity_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameter_validity(mal_encoder_t * encoder, bool presence_flag, mc_parameter_validity_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETER_VALIDITY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameter_validity(void * cursor, mal_encoder_t * encoder, bool presence_flag, mc_parameter_validity_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETER_VALIDITY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_argumentdefinition_list(mal_encoder_t * encoder, mc_argumentdefinition_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ARGUMENTDEFINITION_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_argumentdefinition_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_argumentdefinition_list(void * cursor, mal_encoder_t * encoder, mc_argumentdefinition_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ARGUMENTDEFINITION_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_argumentdefinition_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_argumentdefinition(mal_encoder_t * encoder, mc_argumentdefinition_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ARGUMENTDEFINITION_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_argumentdefinition_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_argumentdefinition(void * cursor, mal_encoder_t * encoder, mc_argumentdefinition_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ARGUMENTDEFINITION_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_argumentdefinition_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_argumentvalue_list(mal_encoder_t * encoder, mc_argumentvalue_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ARGUMENTVALUE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_argumentvalue_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_argumentvalue_list(void * cursor, mal_encoder_t * encoder, mc_argumentvalue_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ARGUMENTVALUE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_argumentvalue_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_argumentvalue(mal_encoder_t * encoder, mc_argumentvalue_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ARGUMENTVALUE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_argumentvalue_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_argumentvalue(void * cursor, mal_encoder_t * encoder, mc_argumentvalue_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ARGUMENTVALUE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_argumentvalue_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_attributevalue_list(mal_encoder_t * encoder, mc_attributevalue_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ATTRIBUTEVALUE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_attributevalue_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_attributevalue_list(void * cursor, mal_encoder_t * encoder, mc_attributevalue_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ATTRIBUTEVALUE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_attributevalue_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_attributevalue(mal_encoder_t * encoder, mc_attributevalue_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_ATTRIBUTEVALUE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_attributevalue_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_attributevalue(void * cursor, mal_encoder_t * encoder, mc_attributevalue_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_ATTRIBUTEVALUE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_attributevalue_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_conditionalreference_list(mal_encoder_t * encoder, mc_conditionalreference_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CONDITIONALREFERENCE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_conditionalreference_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_conditionalreference_list(void * cursor, mal_encoder_t * encoder, mc_conditionalreference_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CONDITIONALREFERENCE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_conditionalreference_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_conditionalreference(mal_encoder_t * encoder, mc_conditionalreference_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_CONDITIONALREFERENCE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_conditionalreference_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_conditionalreference(void * cursor, mal_encoder_t * encoder, mc_conditionalreference_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_CONDITIONALREFERENCE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_conditionalreference_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameterexpression_list(mal_encoder_t * encoder, mc_parameterexpression_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETEREXPRESSION_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_parameterexpression_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameterexpression_list(void * cursor, mal_encoder_t * encoder, mc_parameterexpression_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETEREXPRESSION_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_parameterexpression_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_parameterexpression(mal_encoder_t * encoder, mc_parameterexpression_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_PARAMETEREXPRESSION_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_parameterexpression_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_parameterexpression(void * cursor, mal_encoder_t * encoder, mc_parameterexpression_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_PARAMETEREXPRESSION_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_parameterexpression_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_severity_list(mal_encoder_t * encoder, mc_severity_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_SEVERITY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mc_severity_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_severity_list(void * cursor, mal_encoder_t * encoder, mc_severity_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_SEVERITY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mc_severity_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_mc_severity(mal_encoder_t * encoder, bool presence_flag, mc_severity_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, MC_SEVERITY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_mc_severity(void * cursor, mal_encoder_t * encoder, bool presence_flag, mc_severity_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, MC_SEVERITY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_coarseadcs_adcsmode_list(mal_encoder_t * encoder, opssat_pf_coarseadcs_adcsmode_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_COARSEADCS_ADCSMODE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_pf_coarseadcs_adcsmode_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_coarseadcs_adcsmode_list(void * cursor, mal_encoder_t * encoder, opssat_pf_coarseadcs_adcsmode_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_COARSEADCS_ADCSMODE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_pf_coarseadcs_adcsmode_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_coarseadcs_adcsmode(mal_encoder_t * encoder, bool presence_flag, opssat_pf_coarseadcs_adcsmode_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_COARSEADCS_ADCSMODE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_coarseadcs_adcsmode(void * cursor, mal_encoder_t * encoder, bool presence_flag, opssat_pf_coarseadcs_adcsmode_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_COARSEADCS_ADCSMODE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_coarseadcs_orbittledata_list(mal_encoder_t * encoder, opssat_pf_coarseadcs_orbittledata_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_COARSEADCS_ORBITTLEDATA_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_pf_coarseadcs_orbittledata_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_coarseadcs_orbittledata_list(void * cursor, mal_encoder_t * encoder, opssat_pf_coarseadcs_orbittledata_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_COARSEADCS_ORBITTLEDATA_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_pf_coarseadcs_orbittledata_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_coarseadcs_orbittledata(mal_encoder_t * encoder, opssat_pf_coarseadcs_orbittledata_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_COARSEADCS_ORBITTLEDATA_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_pf_coarseadcs_orbittledata_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_coarseadcs_orbittledata(void * cursor, mal_encoder_t * encoder, opssat_pf_coarseadcs_orbittledata_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_COARSEADCS_ORBITTLEDATA_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_pf_coarseadcs_orbittledata_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_mode_systemmode_list(mal_encoder_t * encoder, opssat_pf_mode_systemmode_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_MODE_SYSTEMMODE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_pf_mode_systemmode_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_mode_systemmode_list(void * cursor, mal_encoder_t * encoder, opssat_pf_mode_systemmode_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_MODE_SYSTEMMODE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_pf_mode_systemmode_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_mode_systemmode(mal_encoder_t * encoder, bool presence_flag, opssat_pf_mode_systemmode_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_MODE_SYSTEMMODE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_mode_systemmode(void * cursor, mal_encoder_t * encoder, bool presence_flag, opssat_pf_mode_systemmode_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_MODE_SYSTEMMODE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_devices_list(mal_encoder_t * encoder, opssat_pf_devices_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_DEVICES_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_pf_devices_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_devices_list(void * cursor, mal_encoder_t * encoder, opssat_pf_devices_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_DEVICES_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_pf_devices_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_devices(mal_encoder_t * encoder, bool presence_flag, opssat_pf_devices_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_DEVICES_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_devices(void * cursor, mal_encoder_t * encoder, bool presence_flag, opssat_pf_devices_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_DEVICES_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_i2cbus_list(mal_encoder_t * encoder, opssat_pf_i2cbus_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_I2CBUS_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_pf_i2cbus_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_i2cbus_list(void * cursor, mal_encoder_t * encoder, opssat_pf_i2cbus_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_I2CBUS_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_pf_i2cbus_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_i2cbus(mal_encoder_t * encoder, bool presence_flag, opssat_pf_i2cbus_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_I2CBUS_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_i2cbus(void * cursor, mal_encoder_t * encoder, bool presence_flag, opssat_pf_i2cbus_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_I2CBUS_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_onboarddevice_list(mal_encoder_t * encoder, opssat_pf_onboarddevice_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_ONBOARDDEVICE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_pf_onboarddevice_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_onboarddevice_list(void * cursor, mal_encoder_t * encoder, opssat_pf_onboarddevice_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_ONBOARDDEVICE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_pf_onboarddevice_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_pf_onboarddevice(mal_encoder_t * encoder, bool presence_flag, opssat_pf_onboarddevice_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_PF_ONBOARDDEVICE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_pf_onboarddevice(void * cursor, mal_encoder_t * encoder, bool presence_flag, opssat_pf_onboarddevice_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_PF_ONBOARDDEVICE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_filemanagement_fileaccessmode_list(mal_encoder_t * encoder, opssat_std_filemanagement_fileaccessmode_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_filemanagement_fileaccessmode_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_filemanagement_fileaccessmode_list(void * cursor, mal_encoder_t * encoder, opssat_std_filemanagement_fileaccessmode_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_filemanagement_fileaccessmode_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_filemanagement_fileaccessmode(mal_encoder_t * encoder, bool presence_flag, opssat_std_filemanagement_fileaccessmode_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_filemanagement_fileaccessmode(void * cursor, mal_encoder_t * encoder, bool presence_flag, opssat_std_filemanagement_fileaccessmode_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_memorymanagement_memoryblock_list(mal_encoder_t * encoder, opssat_std_memorymanagement_memoryblock_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memoryblock_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_memorymanagement_memoryblock_list(void * cursor, mal_encoder_t * encoder, opssat_std_memorymanagement_memoryblock_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memoryblock_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_memorymanagement_memoryblock(mal_encoder_t * encoder, opssat_std_memorymanagement_memoryblock_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memoryblock_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_memorymanagement_memoryblock(void * cursor, mal_encoder_t * encoder, opssat_std_memorymanagement_memoryblock_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memoryblock_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_memorymanagement_memorydevice_list(mal_encoder_t * encoder, opssat_std_memorymanagement_memorydevice_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memorydevice_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_memorymanagement_memorydevice_list(void * cursor, mal_encoder_t * encoder, opssat_std_memorymanagement_memorydevice_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memorydevice_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_memorymanagement_memorydevice(mal_encoder_t * encoder, bool presence_flag, opssat_std_memorymanagement_memorydevice_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_memorymanagement_memorydevice(void * cursor, mal_encoder_t * encoder, bool presence_flag, opssat_std_memorymanagement_memorydevice_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_memorymanagement_memoryrange_list(mal_encoder_t * encoder, opssat_std_memorymanagement_memoryrange_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memoryrange_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_memorymanagement_memoryrange_list(void * cursor, mal_encoder_t * encoder, opssat_std_memorymanagement_memoryrange_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memoryrange_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_memorymanagement_memoryrange(mal_encoder_t * encoder, opssat_std_memorymanagement_memoryrange_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memoryrange_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_memorymanagement_memoryrange(void * cursor, mal_encoder_t * encoder, opssat_std_memorymanagement_memoryrange_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_memorymanagement_memoryrange_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_schedulemanagement_listscheduleentry_list(mal_encoder_t * encoder, opssat_std_schedulemanagement_listscheduleentry_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_listscheduleentry_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_schedulemanagement_listscheduleentry_list(void * cursor, mal_encoder_t * encoder, opssat_std_schedulemanagement_listscheduleentry_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_listscheduleentry_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_schedulemanagement_listscheduleentry(mal_encoder_t * encoder, opssat_std_schedulemanagement_listscheduleentry_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_listscheduleentry_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_schedulemanagement_listscheduleentry(void * cursor, mal_encoder_t * encoder, opssat_std_schedulemanagement_listscheduleentry_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_listscheduleentry_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_schedulemanagement_schedule_list(mal_encoder_t * encoder, opssat_std_schedulemanagement_schedule_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_schedule_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_schedulemanagement_schedule_list(void * cursor, mal_encoder_t * encoder, opssat_std_schedulemanagement_schedule_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_schedule_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_schedulemanagement_schedule(mal_encoder_t * encoder, bool presence_flag, opssat_std_schedulemanagement_schedule_t element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = mal_encoder_add_small_enum_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_schedulemanagement_schedule(void * cursor, mal_encoder_t * encoder, bool presence_flag, opssat_std_schedulemanagement_schedule_t element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = mal_encoder_encode_small_enum(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_schedulemanagement_scheduleentry_list(mal_encoder_t * encoder, opssat_std_schedulemanagement_scheduleentry_list_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_LIST_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_scheduleentry_list_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_schedulemanagement_scheduleentry_list(void * cursor, mal_encoder_t * encoder, opssat_std_schedulemanagement_scheduleentry_list_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_LIST_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_scheduleentry_list_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1_opssat_std_schedulemanagement_scheduleentry(mal_encoder_t * encoder, opssat_std_schedulemanagement_scheduleentry_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      if ((element != NULL))
      {
        rc = mal_encoder_add_short_form_encoding_length(encoder, OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_SHORT_FORM, cursor);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_scheduleentry_add_encoding_length_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1_opssat_std_schedulemanagement_scheduleentry(void * cursor, mal_encoder_t * encoder, opssat_std_schedulemanagement_scheduleentry_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag = (element != NULL);
      if (presence_flag)
      {
        rc = mal_encoder_encode_short_form(encoder, cursor, OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_SHORT_FORM);
        if (rc < 0)
          return rc;
        rc = opssat_std_schedulemanagement_scheduleentry_encode_malbinary(element, encoder, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_add_encoding_length_1(mal_encoder_t * encoder, mal_element_holder_t * element, void * cursor)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      rc = mal_encoder_add_presence_flag_encoding_length(encoder, (element != NULL && element->presence_flag), cursor);
      if (rc < 0)
        return rc;
      if ((element != NULL && element->presence_flag))
      {
        rc = com_malbinary_add_mal_element_encoding_length(encoder, element, cursor);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_encode_1(void * cursor, mal_encoder_t * encoder, mal_element_holder_t * element)
{
  int rc = 0;
  switch (encoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      rc = mal_encoder_encode_presence_flag(encoder, cursor, (element != NULL && element->presence_flag));
      if (rc < 0)
        return rc;
      if ((element != NULL && element->presence_flag))
      {
        rc = com_malbinary_encode_mal_element(encoder, cursor, element);
        if (rc < 0)
          return rc;
      }
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_update_decode_1(void * cursor, mal_decoder_t * decoder, mal_element_holder_t * element_holder)
{
  int rc = 0;
  switch (decoder->encoding_format_code)
  {
    case MALBINARY_FORMAT_CODE:
    case MALSPLITBINARY_FORMAT_CODE:
    {
      bool presence_flag;
      presence_flag = true;
      if (presence_flag)
      {
        rc = com_malbinary_decode_mal_element(decoder, cursor, element_holder);
        if (rc < 0)
          return rc;
      }
      mal_element_holder_set_presence_flag(element_holder, presence_flag);
      break;
    }
    default:
    rc = -1;
  }
  return rc;
}

int com_event_monitorevent_register(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri)
{
  int rc = 0;
  mal_message_init(message, COM_AREA_NUMBER, COM_AREA_VERSION, COM_EVENT_SERVICE_NUMBER, COM_EVENT_MONITOREVENT_OPERATION_NUMBER, MAL_INTERACTIONTYPE_PUBSUB, MAL_IP_STAGE_PUBSUB_REGISTER);
  rc = mal_endpoint_init_operation(endpoint, message, broker_uri, true);
  return rc;
}

int com_event_monitorevent_register_full(mal_encoder_t * encoder, mal_endpoint_t * endpoint, mal_uri_t * broker_uri, mal_blob_t * authentication_id, mal_qoslevel_t  qoslevel, mal_uinteger_t  priority, mal_identifier_list_t * domain, mal_identifier_t * network_zone, mal_sessiontype_t  session, mal_identifier_t * session_name, mal_element_holder_t * arg)
{
  int rc = 0;
  mal_subscription_t *subscription = (mal_subscription_t *)arg->value.composite_value;
  void *cursor = mal_encoder_new_cursor(encoder);
  // Length
  rc = mal_register_add_encoding_length(encoder, subscription, cursor);
  if (rc < 0)
    return rc;
  mal_message_t *message = mal_message_new(authentication_id, qoslevel, priority, domain, network_zone, session, session_name, mal_encoder_cursor_get_length(encoder, cursor));
  mal_encoder_cursor_init(encoder, cursor, mal_message_get_body(message), mal_encoder_cursor_get_length(encoder, cursor), mal_message_get_body_offset(message));
  // Encoding
  rc = mal_register_encode(cursor, encoder, subscription);
  if (rc < 0)
    return rc;
  // Clean
  mal_encoder_cursor_destroy(encoder, cursor);
  rc = com_event_monitorevent_register(endpoint, message, broker_uri);
  return rc;
}

int com_event_monitorevent_publish_register(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri)
{
  int rc = 0;
  mal_message_init(message, COM_AREA_NUMBER, COM_AREA_VERSION, COM_EVENT_SERVICE_NUMBER, COM_EVENT_MONITOREVENT_OPERATION_NUMBER, MAL_INTERACTIONTYPE_PUBSUB, MAL_IP_STAGE_PUBSUB_PUBLISH_REGISTER);
  rc = mal_endpoint_init_operation(endpoint, message, broker_uri, true);
  return rc;
}

int com_event_monitorevent_publish(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri, long initial_publish_register_tid)
{
  int rc = 0;
  mal_message_init(message, COM_AREA_NUMBER, COM_AREA_VERSION, COM_EVENT_SERVICE_NUMBER, COM_EVENT_MONITOREVENT_OPERATION_NUMBER, MAL_INTERACTIONTYPE_PUBSUB, MAL_IP_STAGE_PUBSUB_PUBLISH);
  mal_message_set_transaction_id(message, initial_publish_register_tid);
  rc = mal_endpoint_init_operation(endpoint, message, broker_uri, false);
  return rc;
}

int com_event_monitorevent_deregister(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri)
{
  int rc = 0;
  mal_message_init(message, COM_AREA_NUMBER, COM_AREA_VERSION, COM_EVENT_SERVICE_NUMBER, COM_EVENT_MONITOREVENT_OPERATION_NUMBER, MAL_INTERACTIONTYPE_PUBSUB, MAL_IP_STAGE_PUBSUB_DEREGISTER);
  rc = mal_endpoint_init_operation(endpoint, message, broker_uri, true);
  return rc;
}

int com_event_monitorevent_deregister_full(mal_encoder_t * encoder, mal_endpoint_t * endpoint, mal_uri_t * broker_uri, mal_blob_t * authentication_id, mal_qoslevel_t  qoslevel, mal_uinteger_t  priority, mal_identifier_list_t * domain, mal_identifier_t * network_zone, mal_sessiontype_t  session, mal_identifier_t * session_name, mal_element_holder_t * arg)
{
  int rc = 0;
  mal_identifier_list_t *subscription = (mal_identifier_list_t *)arg->value.list_value;
  void *cursor = mal_encoder_new_cursor(encoder);
  // Length
  rc = mal_deregister_add_encoding_length(encoder, subscription, cursor);
  if (rc < 0)
    return rc;
  mal_message_t *message = mal_message_new(authentication_id, qoslevel, priority, domain, network_zone, session, session_name, mal_encoder_cursor_get_length(encoder, cursor));
  mal_encoder_cursor_init(encoder, cursor, mal_message_get_body(message), mal_encoder_cursor_get_length(encoder, cursor), mal_message_get_body_offset(message));
  // Encoding
  rc = mal_deregister_encode(cursor, encoder, subscription);
  if (rc < 0)
    return rc;
  // Clean
  mal_encoder_cursor_destroy(encoder, cursor);
  rc = com_event_monitorevent_deregister(endpoint, message, broker_uri);
  return rc;
}

int com_event_monitorevent_publish_deregister(mal_endpoint_t * endpoint, mal_message_t * message, mal_uri_t * broker_uri)
{
  int rc = 0;
  mal_message_init(message, COM_AREA_NUMBER, COM_AREA_VERSION, COM_EVENT_SERVICE_NUMBER, COM_EVENT_MONITOREVENT_OPERATION_NUMBER, MAL_INTERACTIONTYPE_PUBSUB, MAL_IP_STAGE_PUBSUB_PUBLISH_DEREGISTER);
  rc = mal_endpoint_init_operation(endpoint, message, broker_uri, true);
  return rc;
}

int COM_ARCHIVE_EXPRESSIONOPERATOR_NUMERIC_VALUES[] =
{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8
};

int com_malbinary_add_mal_element_encoding_length(mal_encoder_t * encoder, mal_element_holder_t * element_holder, void * cursor)
{
  int rc = 0;
  // Encoding abstract mal_element require encoding short form
  rc = mal_encoder_add_short_form_encoding_length(encoder, element_holder->short_form, cursor);
  if (rc < 0)
    return rc;
  if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_SHORT_FORM)
  {
    rc = com_activitytracking_activityacceptance_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_LIST_SHORT_FORM)
  {
    rc = com_activitytracking_activityacceptance_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_SHORT_FORM)
  {
    rc = com_activitytracking_activityexecution_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_LIST_SHORT_FORM)
  {
    rc = com_activitytracking_activityexecution_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_SHORT_FORM)
  {
    rc = com_activitytracking_activitytransfer_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_LIST_SHORT_FORM)
  {
    rc = com_activitytracking_activitytransfer_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_OPERATIONACTIVITY_SHORT_FORM)
  {
    rc = com_activitytracking_operationactivity_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_OPERATIONACTIVITY_LIST_SHORT_FORM)
  {
    rc = com_activitytracking_operationactivity_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEDETAILS_SHORT_FORM)
  {
    rc = com_archive_archivedetails_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEDETAILS_LIST_SHORT_FORM)
  {
    rc = com_archive_archivedetails_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEQUERY_SHORT_FORM)
  {
    rc = com_archive_archivequery_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEQUERY_LIST_SHORT_FORM)
  {
    rc = com_archive_archivequery_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTER_SHORT_FORM)
  {
    rc = com_archive_compositefilter_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTER_LIST_SHORT_FORM)
  {
    rc = com_archive_compositefilter_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTERSET_SHORT_FORM)
  {
    rc = com_archive_compositefilterset_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTERSET_LIST_SHORT_FORM)
  {
    rc = com_archive_compositefilterset_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_EXPRESSIONOPERATOR_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_EXPRESSIONOPERATOR_LIST_SHORT_FORM)
  {
    rc = com_archive_expressionoperator_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_INSTANCEBOOLEANPAIR_SHORT_FORM)
  {
    rc = com_instancebooleanpair_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_INSTANCEBOOLEANPAIR_LIST_SHORT_FORM)
  {
    rc = com_instancebooleanpair_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTDETAILS_SHORT_FORM)
  {
    rc = com_objectdetails_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTDETAILS_LIST_SHORT_FORM)
  {
    rc = com_objectdetails_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTID_SHORT_FORM)
  {
    rc = com_objectid_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTID_LIST_SHORT_FORM)
  {
    rc = com_objectid_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTKEY_SHORT_FORM)
  {
    rc = com_objectkey_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTKEY_LIST_SHORT_FORM)
  {
    rc = com_objectkey_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTTYPE_SHORT_FORM)
  {
    rc = com_objecttype_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTTYPE_LIST_SHORT_FORM)
  {
    rc = com_objecttype_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BLOB_SHORT_FORM)
  {
    rc = mal_encoder_add_blob_encoding_length(encoder, element_holder->value.blob_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BLOB_LIST_SHORT_FORM)
  {
    rc = mal_blob_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BOOLEAN_SHORT_FORM)
  {
    rc = mal_encoder_add_boolean_encoding_length(encoder, element_holder->value.boolean_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BOOLEAN_LIST_SHORT_FORM)
  {
    rc = mal_boolean_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DOUBLE_SHORT_FORM)
  {
    rc = mal_encoder_add_double_encoding_length(encoder, element_holder->value.double_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DOUBLE_LIST_SHORT_FORM)
  {
    rc = mal_double_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DURATION_SHORT_FORM)
  {
    rc = mal_encoder_add_duration_encoding_length(encoder, element_holder->value.duration_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DURATION_LIST_SHORT_FORM)
  {
    rc = mal_duration_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYKEY_SHORT_FORM)
  {
    rc = mal_entitykey_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYKEY_LIST_SHORT_FORM)
  {
    rc = mal_entitykey_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYREQUEST_SHORT_FORM)
  {
    rc = mal_entityrequest_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYREQUEST_LIST_SHORT_FORM)
  {
    rc = mal_entityrequest_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FILE_SHORT_FORM)
  {
    rc = mal_file_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FILE_LIST_SHORT_FORM)
  {
    rc = mal_file_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FINETIME_SHORT_FORM)
  {
    rc = mal_encoder_add_finetime_encoding_length(encoder, element_holder->value.finetime_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FINETIME_LIST_SHORT_FORM)
  {
    rc = mal_finetime_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FLOAT_SHORT_FORM)
  {
    rc = mal_encoder_add_float_encoding_length(encoder, element_holder->value.float_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FLOAT_LIST_SHORT_FORM)
  {
    rc = mal_float_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDBOOLEANPAIR_SHORT_FORM)
  {
    rc = mal_idbooleanpair_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDBOOLEANPAIR_LIST_SHORT_FORM)
  {
    rc = mal_idbooleanpair_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDENTIFIER_SHORT_FORM)
  {
    rc = mal_encoder_add_identifier_encoding_length(encoder, element_holder->value.identifier_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDENTIFIER_LIST_SHORT_FORM)
  {
    rc = mal_identifier_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTEGER_SHORT_FORM)
  {
    rc = mal_encoder_add_integer_encoding_length(encoder, element_holder->value.integer_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTEGER_LIST_SHORT_FORM)
  {
    rc = mal_integer_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTERACTIONTYPE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTERACTIONTYPE_LIST_SHORT_FORM)
  {
    rc = mal_interactiontype_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_LONG_SHORT_FORM)
  {
    rc = mal_encoder_add_long_encoding_length(encoder, element_holder->value.long_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_LONG_LIST_SHORT_FORM)
  {
    rc = mal_long_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_NAMEDVALUE_SHORT_FORM)
  {
    rc = mal_namedvalue_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_NAMEDVALUE_LIST_SHORT_FORM)
  {
    rc = mal_namedvalue_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_OCTET_SHORT_FORM)
  {
    rc = mal_encoder_add_octet_encoding_length(encoder, element_holder->value.octet_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_OCTET_LIST_SHORT_FORM)
  {
    rc = mal_octet_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_PAIR_SHORT_FORM)
  {
    rc = mal_pair_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_PAIR_LIST_SHORT_FORM)
  {
    rc = mal_pair_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_QOSLEVEL_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_QOSLEVEL_LIST_SHORT_FORM)
  {
    rc = mal_qoslevel_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SESSIONTYPE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SESSIONTYPE_LIST_SHORT_FORM)
  {
    rc = mal_sessiontype_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SHORT_SHORT_FORM)
  {
    rc = mal_encoder_add_short_encoding_length(encoder, element_holder->value.short_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SHORT_LIST_SHORT_FORM)
  {
    rc = mal_short_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_STRING_SHORT_FORM)
  {
    rc = mal_encoder_add_string_encoding_length(encoder, element_holder->value.string_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_STRING_LIST_SHORT_FORM)
  {
    rc = mal_string_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SUBSCRIPTION_SHORT_FORM)
  {
    rc = mal_subscription_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SUBSCRIPTION_LIST_SHORT_FORM)
  {
    rc = mal_subscription_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_TIME_SHORT_FORM)
  {
    rc = mal_encoder_add_time_encoding_length(encoder, element_holder->value.time_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_TIME_LIST_SHORT_FORM)
  {
    rc = mal_time_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UINTEGER_SHORT_FORM)
  {
    rc = mal_encoder_add_uinteger_encoding_length(encoder, element_holder->value.uinteger_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UINTEGER_LIST_SHORT_FORM)
  {
    rc = mal_uinteger_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ULONG_SHORT_FORM)
  {
    rc = mal_encoder_add_ulong_encoding_length(encoder, element_holder->value.ulong_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ULONG_LIST_SHORT_FORM)
  {
    rc = mal_ulong_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UOCTET_SHORT_FORM)
  {
    rc = mal_encoder_add_uoctet_encoding_length(encoder, element_holder->value.uoctet_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UOCTET_LIST_SHORT_FORM)
  {
    rc = mal_uoctet_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_URI_SHORT_FORM)
  {
    rc = mal_encoder_add_uri_encoding_length(encoder, element_holder->value.uri_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_URI_LIST_SHORT_FORM)
  {
    rc = mal_uri_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_USHORT_SHORT_FORM)
  {
    rc = mal_encoder_add_ushort_encoding_length(encoder, element_holder->value.ushort_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_USHORT_LIST_SHORT_FORM)
  {
    rc = mal_ushort_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATEHEADER_SHORT_FORM)
  {
    rc = mal_updateheader_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATEHEADER_LIST_SHORT_FORM)
  {
    rc = mal_updateheader_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATETYPE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATETYPE_LIST_SHORT_FORM)
  {
    rc = mal_updatetype_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCATEGORY_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCATEGORY_LIST_SHORT_FORM)
  {
    rc = mc_action_actioncategory_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCREATIONREQUEST_SHORT_FORM)
  {
    rc = mc_action_actioncreationrequest_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCREATIONREQUEST_LIST_SHORT_FORM)
  {
    rc = mc_action_actioncreationrequest_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONDEFINITIONDETAILS_SHORT_FORM)
  {
    rc = mc_action_actiondefinitiondetails_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONDEFINITIONDETAILS_LIST_SHORT_FORM)
  {
    rc = mc_action_actiondefinitiondetails_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONINSTANCEDETAILS_SHORT_FORM)
  {
    rc = mc_action_actioninstancedetails_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONINSTANCEDETAILS_LIST_SHORT_FORM)
  {
    rc = mc_action_actioninstancedetails_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONCATEGORY_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONCATEGORY_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationcategory_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONDEFINITION_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationdefinition_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONDEFINITION_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationdefinition_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONREFERENCE_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationreference_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONREFERENCE_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationreference_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONVALUE_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationvalue_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONVALUE_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationvalue_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_GENERATIONMODE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_GENERATIONMODE_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_generationmode_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDFILTER_SHORT_FORM)
  {
    rc = mc_aggregation_thresholdfilter_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDFILTER_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_thresholdfilter_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDTYPE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDTYPE_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_thresholdtype_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTDEFINITION_SHORT_FORM)
  {
    rc = mc_alert_alertdefinition_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTDEFINITION_LIST_SHORT_FORM)
  {
    rc = mc_alert_alertdefinition_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTEVENT_SHORT_FORM)
  {
    rc = mc_alert_alertevent_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTEVENT_LIST_SHORT_FORM)
  {
    rc = mc_alert_alertevent_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKLINK_SHORT_FORM)
  {
    rc = mc_check_checklink_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKLINK_LIST_SHORT_FORM)
  {
    rc = mc_check_checklink_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULT_SHORT_FORM)
  {
    rc = mc_check_checkresult_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULT_LIST_SHORT_FORM)
  {
    rc = mc_check_checkresult_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULTFILTER_SHORT_FORM)
  {
    rc = mc_check_checkresultfilter_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULTFILTER_LIST_SHORT_FORM)
  {
    rc = mc_check_checkresultfilter_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSTATE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSTATE_LIST_SHORT_FORM)
  {
    rc = mc_check_checkstate_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSUMMARY_SHORT_FORM)
  {
    rc = mc_check_checksummary_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSUMMARY_LIST_SHORT_FORM)
  {
    rc = mc_check_checksummary_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CONSTANTCHECK_SHORT_FORM)
  {
    rc = mc_check_constantcheck_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CONSTANTCHECK_LIST_SHORT_FORM)
  {
    rc = mc_check_constantcheck_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_DELTACHECK_SHORT_FORM)
  {
    rc = mc_check_deltacheck_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_DELTACHECK_LIST_SHORT_FORM)
  {
    rc = mc_check_deltacheck_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_LIMITCHECK_SHORT_FORM)
  {
    rc = mc_check_limitcheck_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_LIMITCHECK_LIST_SHORT_FORM)
  {
    rc = mc_check_limitcheck_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCECHECK_SHORT_FORM)
  {
    rc = mc_check_referencecheck_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCECHECK_LIST_SHORT_FORM)
  {
    rc = mc_check_referencecheck_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCEVALUE_SHORT_FORM)
  {
    rc = mc_check_referencevalue_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCEVALUE_LIST_SHORT_FORM)
  {
    rc = mc_check_referencevalue_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERCONVERSION_SHORT_FORM)
  {
    rc = mc_parameter_parameterconversion_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERCONVERSION_LIST_SHORT_FORM)
  {
    rc = mc_parameter_parameterconversion_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERDEFINITION_SHORT_FORM)
  {
    rc = mc_parameter_parameterdefinition_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERDEFINITION_LIST_SHORT_FORM)
  {
    rc = mc_parameter_parameterdefinition_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERVALUE_SHORT_FORM)
  {
    rc = mc_parameter_parametervalue_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERVALUE_LIST_SHORT_FORM)
  {
    rc = mc_parameter_parametervalue_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_VALIDITY_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_VALIDITY_LIST_SHORT_FORM)
  {
    rc = mc_parameter_validity_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTDEFINITION_SHORT_FORM)
  {
    rc = mc_argumentdefinition_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTDEFINITION_LIST_SHORT_FORM)
  {
    rc = mc_argumentdefinition_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTVALUE_SHORT_FORM)
  {
    rc = mc_argumentvalue_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTVALUE_LIST_SHORT_FORM)
  {
    rc = mc_argumentvalue_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ATTRIBUTEVALUE_SHORT_FORM)
  {
    rc = mc_attributevalue_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ATTRIBUTEVALUE_LIST_SHORT_FORM)
  {
    rc = mc_attributevalue_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CONDITIONALREFERENCE_SHORT_FORM)
  {
    rc = mc_conditionalreference_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CONDITIONALREFERENCE_LIST_SHORT_FORM)
  {
    rc = mc_conditionalreference_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETEREXPRESSION_SHORT_FORM)
  {
    rc = mc_parameterexpression_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETEREXPRESSION_LIST_SHORT_FORM)
  {
    rc = mc_parameterexpression_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_SEVERITY_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_SEVERITY_LIST_SHORT_FORM)
  {
    rc = mc_severity_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ADCSMODE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ADCSMODE_LIST_SHORT_FORM)
  {
    rc = opssat_pf_coarseadcs_adcsmode_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ORBITTLEDATA_SHORT_FORM)
  {
    rc = opssat_pf_coarseadcs_orbittledata_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ORBITTLEDATA_LIST_SHORT_FORM)
  {
    rc = opssat_pf_coarseadcs_orbittledata_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_MODE_SYSTEMMODE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_MODE_SYSTEMMODE_LIST_SHORT_FORM)
  {
    rc = opssat_pf_mode_systemmode_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_DEVICES_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_DEVICES_LIST_SHORT_FORM)
  {
    rc = opssat_pf_devices_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_I2CBUS_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_I2CBUS_LIST_SHORT_FORM)
  {
    rc = opssat_pf_i2cbus_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_ONBOARDDEVICE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_ONBOARDDEVICE_LIST_SHORT_FORM)
  {
    rc = opssat_pf_onboarddevice_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_LIST_SHORT_FORM)
  {
    rc = opssat_std_filemanagement_fileaccessmode_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memoryblock_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_LIST_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memoryblock_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_LIST_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memorydevice_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memoryrange_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_LIST_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memoryrange_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_listscheduleentry_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_LIST_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_listscheduleentry_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_SHORT_FORM)
  {
    rc = mal_encoder_add_small_enum_encoding_length(encoder, element_holder->value.enumerated_value, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_LIST_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_schedule_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_scheduleentry_add_encoding_length_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_LIST_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_scheduleentry_list_add_encoding_length_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else
    return -1;
  return rc;
}

int com_malbinary_encode_mal_element(mal_encoder_t * encoder, void * cursor, mal_element_holder_t * element_holder)
{
  int rc = 0;
  // Encoding abstract mal_element require encoding short form
  rc = mal_encoder_encode_short_form(encoder, cursor, element_holder->short_form);
  if (rc < 0)
    return rc;
  if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_SHORT_FORM)
  {
    rc = com_activitytracking_activityacceptance_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_LIST_SHORT_FORM)
  {
    rc = com_activitytracking_activityacceptance_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_SHORT_FORM)
  {
    rc = com_activitytracking_activityexecution_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_LIST_SHORT_FORM)
  {
    rc = com_activitytracking_activityexecution_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_SHORT_FORM)
  {
    rc = com_activitytracking_activitytransfer_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_LIST_SHORT_FORM)
  {
    rc = com_activitytracking_activitytransfer_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_OPERATIONACTIVITY_SHORT_FORM)
  {
    rc = com_activitytracking_operationactivity_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_OPERATIONACTIVITY_LIST_SHORT_FORM)
  {
    rc = com_activitytracking_operationactivity_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEDETAILS_SHORT_FORM)
  {
    rc = com_archive_archivedetails_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEDETAILS_LIST_SHORT_FORM)
  {
    rc = com_archive_archivedetails_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEQUERY_SHORT_FORM)
  {
    rc = com_archive_archivequery_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEQUERY_LIST_SHORT_FORM)
  {
    rc = com_archive_archivequery_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTER_SHORT_FORM)
  {
    rc = com_archive_compositefilter_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTER_LIST_SHORT_FORM)
  {
    rc = com_archive_compositefilter_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTERSET_SHORT_FORM)
  {
    rc = com_archive_compositefilterset_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTERSET_LIST_SHORT_FORM)
  {
    rc = com_archive_compositefilterset_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_EXPRESSIONOPERATOR_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_EXPRESSIONOPERATOR_LIST_SHORT_FORM)
  {
    rc = com_archive_expressionoperator_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_INSTANCEBOOLEANPAIR_SHORT_FORM)
  {
    rc = com_instancebooleanpair_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_INSTANCEBOOLEANPAIR_LIST_SHORT_FORM)
  {
    rc = com_instancebooleanpair_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTDETAILS_SHORT_FORM)
  {
    rc = com_objectdetails_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTDETAILS_LIST_SHORT_FORM)
  {
    rc = com_objectdetails_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTID_SHORT_FORM)
  {
    rc = com_objectid_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTID_LIST_SHORT_FORM)
  {
    rc = com_objectid_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTKEY_SHORT_FORM)
  {
    rc = com_objectkey_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTKEY_LIST_SHORT_FORM)
  {
    rc = com_objectkey_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTTYPE_SHORT_FORM)
  {
    rc = com_objecttype_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTTYPE_LIST_SHORT_FORM)
  {
    rc = com_objecttype_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BLOB_SHORT_FORM)
  {
    rc = mal_encoder_encode_blob(encoder, cursor, element_holder->value.blob_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BLOB_LIST_SHORT_FORM)
  {
    rc = mal_blob_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BOOLEAN_SHORT_FORM)
  {
    rc = mal_encoder_encode_boolean(encoder, cursor, element_holder->value.boolean_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BOOLEAN_LIST_SHORT_FORM)
  {
    rc = mal_boolean_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DOUBLE_SHORT_FORM)
  {
    rc = mal_encoder_encode_double(encoder, cursor, element_holder->value.double_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DOUBLE_LIST_SHORT_FORM)
  {
    rc = mal_double_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DURATION_SHORT_FORM)
  {
    rc = mal_encoder_encode_duration(encoder, cursor, element_holder->value.duration_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DURATION_LIST_SHORT_FORM)
  {
    rc = mal_duration_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYKEY_SHORT_FORM)
  {
    rc = mal_entitykey_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYKEY_LIST_SHORT_FORM)
  {
    rc = mal_entitykey_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYREQUEST_SHORT_FORM)
  {
    rc = mal_entityrequest_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYREQUEST_LIST_SHORT_FORM)
  {
    rc = mal_entityrequest_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FILE_SHORT_FORM)
  {
    rc = mal_file_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FILE_LIST_SHORT_FORM)
  {
    rc = mal_file_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FINETIME_SHORT_FORM)
  {
    rc = mal_encoder_encode_finetime(encoder, cursor, element_holder->value.finetime_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FINETIME_LIST_SHORT_FORM)
  {
    rc = mal_finetime_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FLOAT_SHORT_FORM)
  {
    rc = mal_encoder_encode_float(encoder, cursor, element_holder->value.float_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FLOAT_LIST_SHORT_FORM)
  {
    rc = mal_float_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDBOOLEANPAIR_SHORT_FORM)
  {
    rc = mal_idbooleanpair_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDBOOLEANPAIR_LIST_SHORT_FORM)
  {
    rc = mal_idbooleanpair_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDENTIFIER_SHORT_FORM)
  {
    rc = mal_encoder_encode_identifier(encoder, cursor, element_holder->value.identifier_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDENTIFIER_LIST_SHORT_FORM)
  {
    rc = mal_identifier_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTEGER_SHORT_FORM)
  {
    rc = mal_encoder_encode_integer(encoder, cursor, element_holder->value.integer_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTEGER_LIST_SHORT_FORM)
  {
    rc = mal_integer_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTERACTIONTYPE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTERACTIONTYPE_LIST_SHORT_FORM)
  {
    rc = mal_interactiontype_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_LONG_SHORT_FORM)
  {
    rc = mal_encoder_encode_long(encoder, cursor, element_holder->value.long_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_LONG_LIST_SHORT_FORM)
  {
    rc = mal_long_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_NAMEDVALUE_SHORT_FORM)
  {
    rc = mal_namedvalue_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_NAMEDVALUE_LIST_SHORT_FORM)
  {
    rc = mal_namedvalue_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_OCTET_SHORT_FORM)
  {
    rc = mal_encoder_encode_octet(encoder, cursor, element_holder->value.octet_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_OCTET_LIST_SHORT_FORM)
  {
    rc = mal_octet_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_PAIR_SHORT_FORM)
  {
    rc = mal_pair_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_PAIR_LIST_SHORT_FORM)
  {
    rc = mal_pair_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_QOSLEVEL_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_QOSLEVEL_LIST_SHORT_FORM)
  {
    rc = mal_qoslevel_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SESSIONTYPE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SESSIONTYPE_LIST_SHORT_FORM)
  {
    rc = mal_sessiontype_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SHORT_SHORT_FORM)
  {
    rc = mal_encoder_encode_short(encoder, cursor, element_holder->value.short_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SHORT_LIST_SHORT_FORM)
  {
    rc = mal_short_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_STRING_SHORT_FORM)
  {
    rc = mal_encoder_encode_string(encoder, cursor, element_holder->value.string_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_STRING_LIST_SHORT_FORM)
  {
    rc = mal_string_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SUBSCRIPTION_SHORT_FORM)
  {
    rc = mal_subscription_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SUBSCRIPTION_LIST_SHORT_FORM)
  {
    rc = mal_subscription_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_TIME_SHORT_FORM)
  {
    rc = mal_encoder_encode_time(encoder, cursor, element_holder->value.time_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_TIME_LIST_SHORT_FORM)
  {
    rc = mal_time_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UINTEGER_SHORT_FORM)
  {
    rc = mal_encoder_encode_uinteger(encoder, cursor, element_holder->value.uinteger_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UINTEGER_LIST_SHORT_FORM)
  {
    rc = mal_uinteger_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ULONG_SHORT_FORM)
  {
    rc = mal_encoder_encode_ulong(encoder, cursor, element_holder->value.ulong_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ULONG_LIST_SHORT_FORM)
  {
    rc = mal_ulong_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UOCTET_SHORT_FORM)
  {
    rc = mal_encoder_encode_uoctet(encoder, cursor, element_holder->value.uoctet_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UOCTET_LIST_SHORT_FORM)
  {
    rc = mal_uoctet_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_URI_SHORT_FORM)
  {
    rc = mal_encoder_encode_uri(encoder, cursor, element_holder->value.uri_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_URI_LIST_SHORT_FORM)
  {
    rc = mal_uri_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_USHORT_SHORT_FORM)
  {
    rc = mal_encoder_encode_ushort(encoder, cursor, element_holder->value.ushort_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_USHORT_LIST_SHORT_FORM)
  {
    rc = mal_ushort_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATEHEADER_SHORT_FORM)
  {
    rc = mal_updateheader_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATEHEADER_LIST_SHORT_FORM)
  {
    rc = mal_updateheader_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATETYPE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATETYPE_LIST_SHORT_FORM)
  {
    rc = mal_updatetype_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCATEGORY_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCATEGORY_LIST_SHORT_FORM)
  {
    rc = mc_action_actioncategory_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCREATIONREQUEST_SHORT_FORM)
  {
    rc = mc_action_actioncreationrequest_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCREATIONREQUEST_LIST_SHORT_FORM)
  {
    rc = mc_action_actioncreationrequest_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONDEFINITIONDETAILS_SHORT_FORM)
  {
    rc = mc_action_actiondefinitiondetails_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONDEFINITIONDETAILS_LIST_SHORT_FORM)
  {
    rc = mc_action_actiondefinitiondetails_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONINSTANCEDETAILS_SHORT_FORM)
  {
    rc = mc_action_actioninstancedetails_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONINSTANCEDETAILS_LIST_SHORT_FORM)
  {
    rc = mc_action_actioninstancedetails_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONCATEGORY_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONCATEGORY_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationcategory_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONDEFINITION_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationdefinition_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONDEFINITION_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationdefinition_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONREFERENCE_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationreference_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONREFERENCE_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationreference_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONVALUE_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationvalue_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONVALUE_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_aggregationvalue_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_GENERATIONMODE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_GENERATIONMODE_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_generationmode_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDFILTER_SHORT_FORM)
  {
    rc = mc_aggregation_thresholdfilter_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDFILTER_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_thresholdfilter_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDTYPE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDTYPE_LIST_SHORT_FORM)
  {
    rc = mc_aggregation_thresholdtype_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTDEFINITION_SHORT_FORM)
  {
    rc = mc_alert_alertdefinition_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTDEFINITION_LIST_SHORT_FORM)
  {
    rc = mc_alert_alertdefinition_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTEVENT_SHORT_FORM)
  {
    rc = mc_alert_alertevent_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTEVENT_LIST_SHORT_FORM)
  {
    rc = mc_alert_alertevent_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKLINK_SHORT_FORM)
  {
    rc = mc_check_checklink_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKLINK_LIST_SHORT_FORM)
  {
    rc = mc_check_checklink_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULT_SHORT_FORM)
  {
    rc = mc_check_checkresult_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULT_LIST_SHORT_FORM)
  {
    rc = mc_check_checkresult_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULTFILTER_SHORT_FORM)
  {
    rc = mc_check_checkresultfilter_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULTFILTER_LIST_SHORT_FORM)
  {
    rc = mc_check_checkresultfilter_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSTATE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSTATE_LIST_SHORT_FORM)
  {
    rc = mc_check_checkstate_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSUMMARY_SHORT_FORM)
  {
    rc = mc_check_checksummary_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSUMMARY_LIST_SHORT_FORM)
  {
    rc = mc_check_checksummary_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CONSTANTCHECK_SHORT_FORM)
  {
    rc = mc_check_constantcheck_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CONSTANTCHECK_LIST_SHORT_FORM)
  {
    rc = mc_check_constantcheck_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_DELTACHECK_SHORT_FORM)
  {
    rc = mc_check_deltacheck_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_DELTACHECK_LIST_SHORT_FORM)
  {
    rc = mc_check_deltacheck_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_LIMITCHECK_SHORT_FORM)
  {
    rc = mc_check_limitcheck_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_LIMITCHECK_LIST_SHORT_FORM)
  {
    rc = mc_check_limitcheck_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCECHECK_SHORT_FORM)
  {
    rc = mc_check_referencecheck_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCECHECK_LIST_SHORT_FORM)
  {
    rc = mc_check_referencecheck_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCEVALUE_SHORT_FORM)
  {
    rc = mc_check_referencevalue_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCEVALUE_LIST_SHORT_FORM)
  {
    rc = mc_check_referencevalue_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERCONVERSION_SHORT_FORM)
  {
    rc = mc_parameter_parameterconversion_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERCONVERSION_LIST_SHORT_FORM)
  {
    rc = mc_parameter_parameterconversion_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERDEFINITION_SHORT_FORM)
  {
    rc = mc_parameter_parameterdefinition_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERDEFINITION_LIST_SHORT_FORM)
  {
    rc = mc_parameter_parameterdefinition_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERVALUE_SHORT_FORM)
  {
    rc = mc_parameter_parametervalue_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERVALUE_LIST_SHORT_FORM)
  {
    rc = mc_parameter_parametervalue_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_VALIDITY_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_VALIDITY_LIST_SHORT_FORM)
  {
    rc = mc_parameter_validity_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTDEFINITION_SHORT_FORM)
  {
    rc = mc_argumentdefinition_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTDEFINITION_LIST_SHORT_FORM)
  {
    rc = mc_argumentdefinition_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTVALUE_SHORT_FORM)
  {
    rc = mc_argumentvalue_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTVALUE_LIST_SHORT_FORM)
  {
    rc = mc_argumentvalue_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ATTRIBUTEVALUE_SHORT_FORM)
  {
    rc = mc_attributevalue_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ATTRIBUTEVALUE_LIST_SHORT_FORM)
  {
    rc = mc_attributevalue_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CONDITIONALREFERENCE_SHORT_FORM)
  {
    rc = mc_conditionalreference_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CONDITIONALREFERENCE_LIST_SHORT_FORM)
  {
    rc = mc_conditionalreference_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETEREXPRESSION_SHORT_FORM)
  {
    rc = mc_parameterexpression_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETEREXPRESSION_LIST_SHORT_FORM)
  {
    rc = mc_parameterexpression_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_SEVERITY_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_SEVERITY_LIST_SHORT_FORM)
  {
    rc = mc_severity_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ADCSMODE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ADCSMODE_LIST_SHORT_FORM)
  {
    rc = opssat_pf_coarseadcs_adcsmode_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ORBITTLEDATA_SHORT_FORM)
  {
    rc = opssat_pf_coarseadcs_orbittledata_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ORBITTLEDATA_LIST_SHORT_FORM)
  {
    rc = opssat_pf_coarseadcs_orbittledata_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_MODE_SYSTEMMODE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_MODE_SYSTEMMODE_LIST_SHORT_FORM)
  {
    rc = opssat_pf_mode_systemmode_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_DEVICES_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_DEVICES_LIST_SHORT_FORM)
  {
    rc = opssat_pf_devices_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_I2CBUS_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_I2CBUS_LIST_SHORT_FORM)
  {
    rc = opssat_pf_i2cbus_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_ONBOARDDEVICE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_ONBOARDDEVICE_LIST_SHORT_FORM)
  {
    rc = opssat_pf_onboarddevice_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_LIST_SHORT_FORM)
  {
    rc = opssat_std_filemanagement_fileaccessmode_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memoryblock_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_LIST_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memoryblock_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_LIST_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memorydevice_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memoryrange_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_LIST_SHORT_FORM)
  {
    rc = opssat_std_memorymanagement_memoryrange_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_listscheduleentry_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_LIST_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_listscheduleentry_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_SHORT_FORM)
  {
    rc = mal_encoder_encode_small_enum(encoder, cursor, element_holder->value.enumerated_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_LIST_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_schedule_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_scheduleentry_encode_malbinary(element_holder->value.composite_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_LIST_SHORT_FORM)
  {
    rc = opssat_std_schedulemanagement_scheduleentry_list_encode_malbinary(element_holder->value.list_value, encoder, cursor);
    if (rc < 0)
      return rc;
  }
  else
    return -1;
  return rc;
}

int com_malbinary_decode_mal_element(mal_decoder_t * decoder, void * cursor, mal_element_holder_t * element_holder)
{
  int enumerated_value = 0;
  int rc = 0;
  rc = mal_decoder_decode_short_form(decoder, cursor, &element_holder->short_form);
  if (rc < 0)
    return rc;
  if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_SHORT_FORM)
  {
    element_holder->value.composite_value = com_activitytracking_activityacceptance_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_activitytracking_activityacceptance_decode_malbinary((com_activitytracking_activityacceptance_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYACCEPTANCE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_activitytracking_activityacceptance_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_activitytracking_activityacceptance_list_decode_malbinary((com_activitytracking_activityacceptance_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_SHORT_FORM)
  {
    element_holder->value.composite_value = com_activitytracking_activityexecution_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_activitytracking_activityexecution_decode_malbinary((com_activitytracking_activityexecution_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYEXECUTION_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_activitytracking_activityexecution_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_activitytracking_activityexecution_list_decode_malbinary((com_activitytracking_activityexecution_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_SHORT_FORM)
  {
    element_holder->value.composite_value = com_activitytracking_activitytransfer_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_activitytracking_activitytransfer_decode_malbinary((com_activitytracking_activitytransfer_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_ACTIVITYTRANSFER_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_activitytracking_activitytransfer_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_activitytracking_activitytransfer_list_decode_malbinary((com_activitytracking_activitytransfer_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_OPERATIONACTIVITY_SHORT_FORM)
  {
    element_holder->value.composite_value = com_activitytracking_operationactivity_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_activitytracking_operationactivity_decode_malbinary((com_activitytracking_operationactivity_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ACTIVITYTRACKING_OPERATIONACTIVITY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_activitytracking_operationactivity_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_activitytracking_operationactivity_list_decode_malbinary((com_activitytracking_operationactivity_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEDETAILS_SHORT_FORM)
  {
    element_holder->value.composite_value = com_archive_archivedetails_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_archive_archivedetails_decode_malbinary((com_archive_archivedetails_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEDETAILS_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_archive_archivedetails_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_archive_archivedetails_list_decode_malbinary((com_archive_archivedetails_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEQUERY_SHORT_FORM)
  {
    element_holder->value.composite_value = com_archive_archivequery_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_archive_archivequery_decode_malbinary((com_archive_archivequery_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_ARCHIVEQUERY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_archive_archivequery_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_archive_archivequery_list_decode_malbinary((com_archive_archivequery_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTER_SHORT_FORM)
  {
    element_holder->value.composite_value = com_archive_compositefilter_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_archive_compositefilter_decode_malbinary((com_archive_compositefilter_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTER_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_archive_compositefilter_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_archive_compositefilter_list_decode_malbinary((com_archive_compositefilter_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTERSET_SHORT_FORM)
  {
    element_holder->value.composite_value = com_archive_compositefilterset_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_archive_compositefilterset_decode_malbinary((com_archive_compositefilterset_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_COMPOSITEFILTERSET_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_archive_compositefilterset_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_archive_compositefilterset_list_decode_malbinary((com_archive_compositefilterset_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_ARCHIVE_EXPRESSIONOPERATOR_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (com_archive_expressionoperator_t) enumerated_value;
  }
  else if (element_holder->short_form == COM_ARCHIVE_EXPRESSIONOPERATOR_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_archive_expressionoperator_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_archive_expressionoperator_list_decode_malbinary((com_archive_expressionoperator_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_INSTANCEBOOLEANPAIR_SHORT_FORM)
  {
    element_holder->value.composite_value = com_instancebooleanpair_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_instancebooleanpair_decode_malbinary((com_instancebooleanpair_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_INSTANCEBOOLEANPAIR_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_instancebooleanpair_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_instancebooleanpair_list_decode_malbinary((com_instancebooleanpair_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTDETAILS_SHORT_FORM)
  {
    element_holder->value.composite_value = com_objectdetails_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_objectdetails_decode_malbinary((com_objectdetails_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTDETAILS_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_objectdetails_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_objectdetails_list_decode_malbinary((com_objectdetails_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTID_SHORT_FORM)
  {
    element_holder->value.composite_value = com_objectid_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_objectid_decode_malbinary((com_objectid_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTID_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_objectid_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_objectid_list_decode_malbinary((com_objectid_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTKEY_SHORT_FORM)
  {
    element_holder->value.composite_value = com_objectkey_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_objectkey_decode_malbinary((com_objectkey_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTKEY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_objectkey_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_objectkey_list_decode_malbinary((com_objectkey_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTTYPE_SHORT_FORM)
  {
    element_holder->value.composite_value = com_objecttype_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = com_objecttype_decode_malbinary((com_objecttype_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == COM_OBJECTTYPE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = com_objecttype_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = com_objecttype_list_decode_malbinary((com_objecttype_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BLOB_SHORT_FORM)
  {
    rc = mal_decoder_decode_blob(decoder, cursor, &element_holder->value.blob_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BLOB_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_blob_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_blob_list_decode_malbinary((mal_blob_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BOOLEAN_SHORT_FORM)
  {
    rc = mal_decoder_decode_boolean(decoder, cursor, &element_holder->value.boolean_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_BOOLEAN_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_boolean_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_boolean_list_decode_malbinary((mal_boolean_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DOUBLE_SHORT_FORM)
  {
    rc = mal_decoder_decode_double(decoder, cursor, &element_holder->value.double_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DOUBLE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_double_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_double_list_decode_malbinary((mal_double_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DURATION_SHORT_FORM)
  {
    rc = mal_decoder_decode_duration(decoder, cursor, &element_holder->value.duration_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_DURATION_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_duration_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_duration_list_decode_malbinary((mal_duration_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYKEY_SHORT_FORM)
  {
    element_holder->value.composite_value = mal_entitykey_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mal_entitykey_decode_malbinary((mal_entitykey_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYKEY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_entitykey_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_entitykey_list_decode_malbinary((mal_entitykey_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYREQUEST_SHORT_FORM)
  {
    element_holder->value.composite_value = mal_entityrequest_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mal_entityrequest_decode_malbinary((mal_entityrequest_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ENTITYREQUEST_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_entityrequest_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_entityrequest_list_decode_malbinary((mal_entityrequest_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FILE_SHORT_FORM)
  {
    element_holder->value.composite_value = mal_file_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mal_file_decode_malbinary((mal_file_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FILE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_file_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_file_list_decode_malbinary((mal_file_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FINETIME_SHORT_FORM)
  {
    rc = mal_decoder_decode_finetime(decoder, cursor, &element_holder->value.finetime_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FINETIME_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_finetime_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_finetime_list_decode_malbinary((mal_finetime_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FLOAT_SHORT_FORM)
  {
    rc = mal_decoder_decode_float(decoder, cursor, &element_holder->value.float_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_FLOAT_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_float_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_float_list_decode_malbinary((mal_float_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDBOOLEANPAIR_SHORT_FORM)
  {
    element_holder->value.composite_value = mal_idbooleanpair_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mal_idbooleanpair_decode_malbinary((mal_idbooleanpair_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDBOOLEANPAIR_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_idbooleanpair_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_idbooleanpair_list_decode_malbinary((mal_idbooleanpair_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDENTIFIER_SHORT_FORM)
  {
    rc = mal_decoder_decode_identifier(decoder, cursor, &element_holder->value.identifier_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_IDENTIFIER_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_identifier_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_identifier_list_decode_malbinary((mal_identifier_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTEGER_SHORT_FORM)
  {
    rc = mal_decoder_decode_integer(decoder, cursor, &element_holder->value.integer_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTEGER_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_integer_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_integer_list_decode_malbinary((mal_integer_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_INTERACTIONTYPE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mal_interactiontype_t) enumerated_value;
  }
  else if (element_holder->short_form == MAL_INTERACTIONTYPE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_interactiontype_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_interactiontype_list_decode_malbinary((mal_interactiontype_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_LONG_SHORT_FORM)
  {
    rc = mal_decoder_decode_long(decoder, cursor, &element_holder->value.long_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_LONG_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_long_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_long_list_decode_malbinary((mal_long_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_NAMEDVALUE_SHORT_FORM)
  {
    element_holder->value.composite_value = mal_namedvalue_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mal_namedvalue_decode_malbinary((mal_namedvalue_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_NAMEDVALUE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_namedvalue_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_namedvalue_list_decode_malbinary((mal_namedvalue_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_OCTET_SHORT_FORM)
  {
    rc = mal_decoder_decode_octet(decoder, cursor, &element_holder->value.octet_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_OCTET_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_octet_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_octet_list_decode_malbinary((mal_octet_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_PAIR_SHORT_FORM)
  {
    element_holder->value.composite_value = mal_pair_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mal_pair_decode_malbinary((mal_pair_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_PAIR_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_pair_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_pair_list_decode_malbinary((mal_pair_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_QOSLEVEL_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mal_qoslevel_t) enumerated_value;
  }
  else if (element_holder->short_form == MAL_QOSLEVEL_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_qoslevel_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_qoslevel_list_decode_malbinary((mal_qoslevel_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SESSIONTYPE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mal_sessiontype_t) enumerated_value;
  }
  else if (element_holder->short_form == MAL_SESSIONTYPE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_sessiontype_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_sessiontype_list_decode_malbinary((mal_sessiontype_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SHORT_SHORT_FORM)
  {
    rc = mal_decoder_decode_short(decoder, cursor, &element_holder->value.short_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SHORT_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_short_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_short_list_decode_malbinary((mal_short_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_STRING_SHORT_FORM)
  {
    rc = mal_decoder_decode_string(decoder, cursor, &element_holder->value.string_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_STRING_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_string_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_string_list_decode_malbinary((mal_string_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SUBSCRIPTION_SHORT_FORM)
  {
    element_holder->value.composite_value = mal_subscription_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mal_subscription_decode_malbinary((mal_subscription_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_SUBSCRIPTION_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_subscription_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_subscription_list_decode_malbinary((mal_subscription_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_TIME_SHORT_FORM)
  {
    rc = mal_decoder_decode_time(decoder, cursor, &element_holder->value.time_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_TIME_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_time_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_time_list_decode_malbinary((mal_time_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UINTEGER_SHORT_FORM)
  {
    rc = mal_decoder_decode_uinteger(decoder, cursor, &element_holder->value.uinteger_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UINTEGER_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_uinteger_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_uinteger_list_decode_malbinary((mal_uinteger_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ULONG_SHORT_FORM)
  {
    rc = mal_decoder_decode_ulong(decoder, cursor, &element_holder->value.ulong_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_ULONG_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_ulong_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_ulong_list_decode_malbinary((mal_ulong_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UOCTET_SHORT_FORM)
  {
    rc = mal_decoder_decode_uoctet(decoder, cursor, &element_holder->value.uoctet_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UOCTET_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_uoctet_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_uoctet_list_decode_malbinary((mal_uoctet_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_URI_SHORT_FORM)
  {
    rc = mal_decoder_decode_uri(decoder, cursor, &element_holder->value.uri_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_URI_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_uri_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_uri_list_decode_malbinary((mal_uri_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_USHORT_SHORT_FORM)
  {
    rc = mal_decoder_decode_ushort(decoder, cursor, &element_holder->value.ushort_value);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_USHORT_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_ushort_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_ushort_list_decode_malbinary((mal_ushort_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATEHEADER_SHORT_FORM)
  {
    element_holder->value.composite_value = mal_updateheader_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mal_updateheader_decode_malbinary((mal_updateheader_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATEHEADER_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_updateheader_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_updateheader_list_decode_malbinary((mal_updateheader_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MAL_UPDATETYPE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mal_updatetype_t) enumerated_value;
  }
  else if (element_holder->short_form == MAL_UPDATETYPE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mal_updatetype_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mal_updatetype_list_decode_malbinary((mal_updatetype_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCATEGORY_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mc_action_actioncategory_t) enumerated_value;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCATEGORY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_action_actioncategory_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_action_actioncategory_list_decode_malbinary((mc_action_actioncategory_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCREATIONREQUEST_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_action_actioncreationrequest_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_action_actioncreationrequest_decode_malbinary((mc_action_actioncreationrequest_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONCREATIONREQUEST_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_action_actioncreationrequest_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_action_actioncreationrequest_list_decode_malbinary((mc_action_actioncreationrequest_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONDEFINITIONDETAILS_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_action_actiondefinitiondetails_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_action_actiondefinitiondetails_decode_malbinary((mc_action_actiondefinitiondetails_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONDEFINITIONDETAILS_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_action_actiondefinitiondetails_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_action_actiondefinitiondetails_list_decode_malbinary((mc_action_actiondefinitiondetails_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONINSTANCEDETAILS_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_action_actioninstancedetails_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_action_actioninstancedetails_decode_malbinary((mc_action_actioninstancedetails_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ACTION_ACTIONINSTANCEDETAILS_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_action_actioninstancedetails_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_action_actioninstancedetails_list_decode_malbinary((mc_action_actioninstancedetails_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONCATEGORY_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mc_aggregation_aggregationcategory_t) enumerated_value;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONCATEGORY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_aggregation_aggregationcategory_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_aggregation_aggregationcategory_list_decode_malbinary((mc_aggregation_aggregationcategory_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONDEFINITION_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_aggregation_aggregationdefinition_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_aggregation_aggregationdefinition_decode_malbinary((mc_aggregation_aggregationdefinition_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONDEFINITION_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_aggregation_aggregationdefinition_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_aggregation_aggregationdefinition_list_decode_malbinary((mc_aggregation_aggregationdefinition_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONREFERENCE_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_aggregation_aggregationreference_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_aggregation_aggregationreference_decode_malbinary((mc_aggregation_aggregationreference_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONREFERENCE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_aggregation_aggregationreference_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_aggregation_aggregationreference_list_decode_malbinary((mc_aggregation_aggregationreference_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONVALUE_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_aggregation_aggregationvalue_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_aggregation_aggregationvalue_decode_malbinary((mc_aggregation_aggregationvalue_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_AGGREGATIONVALUE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_aggregation_aggregationvalue_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_aggregation_aggregationvalue_list_decode_malbinary((mc_aggregation_aggregationvalue_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_GENERATIONMODE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mc_aggregation_generationmode_t) enumerated_value;
  }
  else if (element_holder->short_form == MC_AGGREGATION_GENERATIONMODE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_aggregation_generationmode_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_aggregation_generationmode_list_decode_malbinary((mc_aggregation_generationmode_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDFILTER_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_aggregation_thresholdfilter_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_aggregation_thresholdfilter_decode_malbinary((mc_aggregation_thresholdfilter_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDFILTER_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_aggregation_thresholdfilter_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_aggregation_thresholdfilter_list_decode_malbinary((mc_aggregation_thresholdfilter_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDTYPE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mc_aggregation_thresholdtype_t) enumerated_value;
  }
  else if (element_holder->short_form == MC_AGGREGATION_THRESHOLDTYPE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_aggregation_thresholdtype_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_aggregation_thresholdtype_list_decode_malbinary((mc_aggregation_thresholdtype_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTDEFINITION_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_alert_alertdefinition_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_alert_alertdefinition_decode_malbinary((mc_alert_alertdefinition_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTDEFINITION_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_alert_alertdefinition_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_alert_alertdefinition_list_decode_malbinary((mc_alert_alertdefinition_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTEVENT_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_alert_alertevent_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_alert_alertevent_decode_malbinary((mc_alert_alertevent_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ALERT_ALERTEVENT_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_alert_alertevent_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_alert_alertevent_list_decode_malbinary((mc_alert_alertevent_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKLINK_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_check_checklink_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_check_checklink_decode_malbinary((mc_check_checklink_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKLINK_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_checklink_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_checklink_list_decode_malbinary((mc_check_checklink_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULT_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_check_checkresult_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_check_checkresult_decode_malbinary((mc_check_checkresult_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULT_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_checkresult_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_checkresult_list_decode_malbinary((mc_check_checkresult_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULTFILTER_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_check_checkresultfilter_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_check_checkresultfilter_decode_malbinary((mc_check_checkresultfilter_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKRESULTFILTER_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_checkresultfilter_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_checkresultfilter_list_decode_malbinary((mc_check_checkresultfilter_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSTATE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mc_check_checkstate_t) enumerated_value;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSTATE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_checkstate_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_checkstate_list_decode_malbinary((mc_check_checkstate_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSUMMARY_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_check_checksummary_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_check_checksummary_decode_malbinary((mc_check_checksummary_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CHECKSUMMARY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_checksummary_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_checksummary_list_decode_malbinary((mc_check_checksummary_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CONSTANTCHECK_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_check_constantcheck_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_check_constantcheck_decode_malbinary((mc_check_constantcheck_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_CONSTANTCHECK_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_constantcheck_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_constantcheck_list_decode_malbinary((mc_check_constantcheck_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_DELTACHECK_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_check_deltacheck_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_check_deltacheck_decode_malbinary((mc_check_deltacheck_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_DELTACHECK_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_deltacheck_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_deltacheck_list_decode_malbinary((mc_check_deltacheck_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_LIMITCHECK_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_check_limitcheck_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_check_limitcheck_decode_malbinary((mc_check_limitcheck_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_LIMITCHECK_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_limitcheck_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_limitcheck_list_decode_malbinary((mc_check_limitcheck_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCECHECK_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_check_referencecheck_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_check_referencecheck_decode_malbinary((mc_check_referencecheck_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCECHECK_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_referencecheck_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_referencecheck_list_decode_malbinary((mc_check_referencecheck_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCEVALUE_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_check_referencevalue_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_check_referencevalue_decode_malbinary((mc_check_referencevalue_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CHECK_REFERENCEVALUE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_check_referencevalue_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_check_referencevalue_list_decode_malbinary((mc_check_referencevalue_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERCONVERSION_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_parameter_parameterconversion_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_parameter_parameterconversion_decode_malbinary((mc_parameter_parameterconversion_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERCONVERSION_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_parameter_parameterconversion_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_parameter_parameterconversion_list_decode_malbinary((mc_parameter_parameterconversion_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERDEFINITION_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_parameter_parameterdefinition_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_parameter_parameterdefinition_decode_malbinary((mc_parameter_parameterdefinition_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERDEFINITION_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_parameter_parameterdefinition_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_parameter_parameterdefinition_list_decode_malbinary((mc_parameter_parameterdefinition_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERVALUE_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_parameter_parametervalue_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_parameter_parametervalue_decode_malbinary((mc_parameter_parametervalue_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_PARAMETERVALUE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_parameter_parametervalue_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_parameter_parametervalue_list_decode_malbinary((mc_parameter_parametervalue_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETER_VALIDITY_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mc_parameter_validity_t) enumerated_value;
  }
  else if (element_holder->short_form == MC_PARAMETER_VALIDITY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_parameter_validity_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_parameter_validity_list_decode_malbinary((mc_parameter_validity_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTDEFINITION_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_argumentdefinition_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_argumentdefinition_decode_malbinary((mc_argumentdefinition_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTDEFINITION_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_argumentdefinition_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_argumentdefinition_list_decode_malbinary((mc_argumentdefinition_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTVALUE_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_argumentvalue_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_argumentvalue_decode_malbinary((mc_argumentvalue_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ARGUMENTVALUE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_argumentvalue_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_argumentvalue_list_decode_malbinary((mc_argumentvalue_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ATTRIBUTEVALUE_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_attributevalue_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_attributevalue_decode_malbinary((mc_attributevalue_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_ATTRIBUTEVALUE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_attributevalue_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_attributevalue_list_decode_malbinary((mc_attributevalue_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CONDITIONALREFERENCE_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_conditionalreference_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_conditionalreference_decode_malbinary((mc_conditionalreference_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_CONDITIONALREFERENCE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_conditionalreference_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_conditionalreference_list_decode_malbinary((mc_conditionalreference_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETEREXPRESSION_SHORT_FORM)
  {
    element_holder->value.composite_value = mc_parameterexpression_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = mc_parameterexpression_decode_malbinary((mc_parameterexpression_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_PARAMETEREXPRESSION_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_parameterexpression_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_parameterexpression_list_decode_malbinary((mc_parameterexpression_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == MC_SEVERITY_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (mc_severity_t) enumerated_value;
  }
  else if (element_holder->short_form == MC_SEVERITY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = mc_severity_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = mc_severity_list_decode_malbinary((mc_severity_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ADCSMODE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (opssat_pf_coarseadcs_adcsmode_t) enumerated_value;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ADCSMODE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_pf_coarseadcs_adcsmode_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_pf_coarseadcs_adcsmode_list_decode_malbinary((opssat_pf_coarseadcs_adcsmode_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ORBITTLEDATA_SHORT_FORM)
  {
    element_holder->value.composite_value = opssat_pf_coarseadcs_orbittledata_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = opssat_pf_coarseadcs_orbittledata_decode_malbinary((opssat_pf_coarseadcs_orbittledata_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_COARSEADCS_ORBITTLEDATA_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_pf_coarseadcs_orbittledata_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_pf_coarseadcs_orbittledata_list_decode_malbinary((opssat_pf_coarseadcs_orbittledata_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_MODE_SYSTEMMODE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (opssat_pf_mode_systemmode_t) enumerated_value;
  }
  else if (element_holder->short_form == OPSSAT_PF_MODE_SYSTEMMODE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_pf_mode_systemmode_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_pf_mode_systemmode_list_decode_malbinary((opssat_pf_mode_systemmode_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_DEVICES_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (opssat_pf_devices_t) enumerated_value;
  }
  else if (element_holder->short_form == OPSSAT_PF_DEVICES_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_pf_devices_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_pf_devices_list_decode_malbinary((opssat_pf_devices_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_I2CBUS_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (opssat_pf_i2cbus_t) enumerated_value;
  }
  else if (element_holder->short_form == OPSSAT_PF_I2CBUS_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_pf_i2cbus_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_pf_i2cbus_list_decode_malbinary((opssat_pf_i2cbus_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_PF_ONBOARDDEVICE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (opssat_pf_onboarddevice_t) enumerated_value;
  }
  else if (element_holder->short_form == OPSSAT_PF_ONBOARDDEVICE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_pf_onboarddevice_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_pf_onboarddevice_list_decode_malbinary((opssat_pf_onboarddevice_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (opssat_std_filemanagement_fileaccessmode_t) enumerated_value;
  }
  else if (element_holder->short_form == OPSSAT_STD_FILEMANAGEMENT_FILEACCESSMODE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_std_filemanagement_fileaccessmode_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_std_filemanagement_fileaccessmode_list_decode_malbinary((opssat_std_filemanagement_fileaccessmode_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_SHORT_FORM)
  {
    element_holder->value.composite_value = opssat_std_memorymanagement_memoryblock_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = opssat_std_memorymanagement_memoryblock_decode_malbinary((opssat_std_memorymanagement_memoryblock_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYBLOCK_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_std_memorymanagement_memoryblock_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_std_memorymanagement_memoryblock_list_decode_malbinary((opssat_std_memorymanagement_memoryblock_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (opssat_std_memorymanagement_memorydevice_t) enumerated_value;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_std_memorymanagement_memorydevice_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_std_memorymanagement_memorydevice_list_decode_malbinary((opssat_std_memorymanagement_memorydevice_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_SHORT_FORM)
  {
    element_holder->value.composite_value = opssat_std_memorymanagement_memoryrange_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = opssat_std_memorymanagement_memoryrange_decode_malbinary((opssat_std_memorymanagement_memoryrange_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_MEMORYMANAGEMENT_MEMORYRANGE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_std_memorymanagement_memoryrange_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_std_memorymanagement_memoryrange_list_decode_malbinary((opssat_std_memorymanagement_memoryrange_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_SHORT_FORM)
  {
    element_holder->value.composite_value = opssat_std_schedulemanagement_listscheduleentry_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = opssat_std_schedulemanagement_listscheduleentry_decode_malbinary((opssat_std_schedulemanagement_listscheduleentry_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_LISTSCHEDULEENTRY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_std_schedulemanagement_listscheduleentry_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_std_schedulemanagement_listscheduleentry_list_decode_malbinary((opssat_std_schedulemanagement_listscheduleentry_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_SHORT_FORM)
  {
    rc = mal_decoder_decode_small_enum(decoder, cursor, &enumerated_value);
    if (rc < 0)
      return rc;
    element_holder->value.enumerated_value = (opssat_std_schedulemanagement_schedule_t) enumerated_value;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULE_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_std_schedulemanagement_schedule_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_std_schedulemanagement_schedule_list_decode_malbinary((opssat_std_schedulemanagement_schedule_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_SHORT_FORM)
  {
    element_holder->value.composite_value = opssat_std_schedulemanagement_scheduleentry_new();
    if (element_holder->value.composite_value == NULL) return -1;
    rc = opssat_std_schedulemanagement_scheduleentry_decode_malbinary((opssat_std_schedulemanagement_scheduleentry_t *)element_holder->value.composite_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else if (element_holder->short_form == OPSSAT_STD_SCHEDULEMANAGEMENT_SCHEDULEENTRY_LIST_SHORT_FORM)
  {
    element_holder->value.list_value = opssat_std_schedulemanagement_scheduleentry_list_new(0);
    if (element_holder->value.list_value == NULL) return -1;
    rc = opssat_std_schedulemanagement_scheduleentry_list_decode_malbinary((opssat_std_schedulemanagement_scheduleentry_list_t *)element_holder->value.list_value, decoder, cursor);
    if (rc < 0)
      return rc;
  }
  else
    return -1;
  return rc;
}

// test function
void com_test(bool verbose)
{
  printf(" * com: ");
  if (verbose)
    printf("\n");
  printf("OK\n");
}
