/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-nov2021.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "UEID-GNB-DU.h"

asn_TYPE_member_t asn_MBR_UEID_GNB_DU_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UEID_GNB_DU, gNB_CU_UE_F1AP_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNB_CU_UE_F1AP_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB-CU-UE-F1AP-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct UEID_GNB_DU, ran_UEID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANUEID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ran-UEID"
		},
};
static const int asn_MAP_UEID_GNB_DU_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_UEID_GNB_DU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEID_GNB_DU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gNB-CU-UE-F1AP-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ran-UEID */
};
asn_SEQUENCE_specifics_t asn_SPC_UEID_GNB_DU_specs_1 = {
	sizeof(struct UEID_GNB_DU),
	offsetof(struct UEID_GNB_DU, _asn_ctx),
	asn_MAP_UEID_GNB_DU_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UEID_GNB_DU_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEID_GNB_DU = {
	"UEID-GNB-DU",
	"UEID-GNB-DU",
	&asn_OP_SEQUENCE,
	asn_DEF_UEID_GNB_DU_tags_1,
	sizeof(asn_DEF_UEID_GNB_DU_tags_1)
		/sizeof(asn_DEF_UEID_GNB_DU_tags_1[0]), /* 1 */
	asn_DEF_UEID_GNB_DU_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEID_GNB_DU_tags_1)
		/sizeof(asn_DEF_UEID_GNB_DU_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UEID_GNB_DU_1,
	2,	/* Elements count */
	&asn_SPC_UEID_GNB_DU_specs_1	/* Additional specs */
};

