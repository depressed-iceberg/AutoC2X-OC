/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "its_facilities_pdu_all.asn"
 * 	`asn1c -fnative-types -gen-PER`
 */

#ifndef	_BasicContainer_H_
#define	_BasicContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "StationType.h"
#include "ReferencePosition.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BasicContainer */
typedef struct BasicContainer {
	StationType_t	 stationType;
	ReferencePosition_t	 referencePosition;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BasicContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _BasicContainer_H_ */
#include <asn_internal.h>
