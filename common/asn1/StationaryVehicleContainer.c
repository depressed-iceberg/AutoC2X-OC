/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DENM-PDU-Descriptions"
 * 	found in "its_facilities_pdu_all.asn"
 * 	`asn1c -fnative-types -gen-PER -pdu=auto`
 */

#include "StationaryVehicleContainer.h"

static asn_TYPE_member_t asn_MBR_StationaryVehicleContainer_1[] = {
	{ ATF_POINTER, 6, offsetof(struct StationaryVehicleContainer, stationarySince),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_StationarySince,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"stationarySince"
		},
	{ ATF_POINTER, 5, offsetof(struct StationaryVehicleContainer, stationaryCause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CauseCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"stationaryCause"
		},
	{ ATF_POINTER, 4, offsetof(struct StationaryVehicleContainer, carryingDangerousGoods),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DangerousGoodsExtended,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carryingDangerousGoods"
		},
	{ ATF_POINTER, 3, offsetof(struct StationaryVehicleContainer, numberOfOccupants),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfOccupants,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numberOfOccupants"
		},
	{ ATF_POINTER, 2, offsetof(struct StationaryVehicleContainer, vehicleIdentification),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleIdentification,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vehicleIdentification"
		},
	{ ATF_POINTER, 1, offsetof(struct StationaryVehicleContainer, energyStorageType),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EnergyStorageType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"energyStorageType"
		},
};
static const int asn_MAP_StationaryVehicleContainer_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_StationaryVehicleContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_StationaryVehicleContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* stationarySince */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* stationaryCause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carryingDangerousGoods */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* numberOfOccupants */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* vehicleIdentification */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* energyStorageType */
};
static asn_SEQUENCE_specifics_t asn_SPC_StationaryVehicleContainer_specs_1 = {
	sizeof(struct StationaryVehicleContainer),
	offsetof(struct StationaryVehicleContainer, _asn_ctx),
	asn_MAP_StationaryVehicleContainer_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_StationaryVehicleContainer_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_StationaryVehicleContainer = {
	"StationaryVehicleContainer",
	"StationaryVehicleContainer",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_StationaryVehicleContainer_tags_1,
	sizeof(asn_DEF_StationaryVehicleContainer_tags_1)
		/sizeof(asn_DEF_StationaryVehicleContainer_tags_1[0]), /* 1 */
	asn_DEF_StationaryVehicleContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_StationaryVehicleContainer_tags_1)
		/sizeof(asn_DEF_StationaryVehicleContainer_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_StationaryVehicleContainer_1,
	6,	/* Elements count */
	&asn_SPC_StationaryVehicleContainer_specs_1	/* Additional specs */
};

