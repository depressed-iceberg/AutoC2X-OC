/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "its_facilities_pdu_all.asn"
 * 	`asn1c -fnative-types -gen-PER -pdu=auto`
 */

#ifndef	_VDS_H_
#define	_VDS_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VDS */
typedef IA5String_t	 VDS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VDS;
asn_struct_free_f VDS_free;
asn_struct_print_f VDS_print;
asn_constr_check_f VDS_constraint;
ber_type_decoder_f VDS_decode_ber;
der_type_encoder_f VDS_encode_der;
xer_type_decoder_f VDS_decode_xer;
xer_type_encoder_f VDS_encode_xer;
per_type_decoder_f VDS_decode_uper;
per_type_encoder_f VDS_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _VDS_H_ */
#include <asn_internal.h>
