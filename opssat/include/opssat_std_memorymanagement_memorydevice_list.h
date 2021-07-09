#ifndef __OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_LIST_H_INCLUDED__
#define __OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_LIST_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


// default constructor
opssat_std_memorymanagement_memorydevice_list_t * opssat_std_memorymanagement_memorydevice_list_new(unsigned int element_count);

// destructor, free the list and its content
void opssat_std_memorymanagement_memorydevice_list_destroy(opssat_std_memorymanagement_memorydevice_list_t ** self_p);

// fields accessors for enumeration list opssat_std_memorymanagement_memorydevice_list
unsigned int opssat_std_memorymanagement_memorydevice_list_get_element_count(opssat_std_memorymanagement_memorydevice_list_t * self);
bool * opssat_std_memorymanagement_memorydevice_list_get_presence_flags(opssat_std_memorymanagement_memorydevice_list_t * self);
opssat_std_memorymanagement_memorydevice_t * opssat_std_memorymanagement_memorydevice_list_get_content(opssat_std_memorymanagement_memorydevice_list_t * self);

// encoding functions related to transport malbinary
int opssat_std_memorymanagement_memorydevice_list_add_encoding_length_malbinary(opssat_std_memorymanagement_memorydevice_list_t * self, mal_encoder_t * encoder, void * cursor);
int opssat_std_memorymanagement_memorydevice_list_encode_malbinary(opssat_std_memorymanagement_memorydevice_list_t * self, mal_encoder_t * encoder, void * cursor);
int opssat_std_memorymanagement_memorydevice_list_decode_malbinary(opssat_std_memorymanagement_memorydevice_list_t * self, mal_decoder_t * decoder, void * cursor);

// test function
void opssat_std_memorymanagement_memorydevice_list_test(bool verbose);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __OPSSAT_STD_MEMORYMANAGEMENT_MEMORYDEVICE_LIST_H_INCLUDED__
