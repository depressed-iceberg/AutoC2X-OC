/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "its_facilities_pdu_all.asn"
 * 	`asn1c -fnative-types -gen-PER -pdu=auto`
 */

#ifndef	_VehicleLength_H_
#define	_VehicleLength_H_


#include <asn_application.h>

/* Including external dependencies */
#include "VehicleLengthValue.h"
#include "VehicleLengthConfidenceIndication.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* VehicleLength */
typedef struct VehicleLength {
	VehicleLengthValue_t	 vehicleLengthValue;
	VehicleLengthConfidenceIndication_t	 vehicleLengthConfidenceIndication;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleLength_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleLength;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleLength_H_ */
#include <asn_internal.h>
