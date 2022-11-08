/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-nov2021.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "E2SM-RC-ControlOutcome.h"

#include "E2SM-RC-ControlOutcome-Format1.h"
static asn_oer_constraints_t asn_OER_type_ric_controlOutcome_formats_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ric_controlOutcome_formats_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ric_controlOutcome_formats_2[] = {
	{ ATF_POINTER, 0, offsetof(struct E2SM_RC_ControlOutcome__ric_controlOutcome_formats, choice.controlOutcome_Format1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_RC_ControlOutcome_Format1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"controlOutcome-Format1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ric_controlOutcome_formats_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* controlOutcome-Format1 */
};
static asn_CHOICE_specifics_t asn_SPC_ric_controlOutcome_formats_specs_2 = {
	sizeof(struct E2SM_RC_ControlOutcome__ric_controlOutcome_formats),
	offsetof(struct E2SM_RC_ControlOutcome__ric_controlOutcome_formats, _asn_ctx),
	offsetof(struct E2SM_RC_ControlOutcome__ric_controlOutcome_formats, present),
	sizeof(((struct E2SM_RC_ControlOutcome__ric_controlOutcome_formats *)0)->present),
	asn_MAP_ric_controlOutcome_formats_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ric_controlOutcome_formats_2 = {
	"ric-controlOutcome-formats",
	"ric-controlOutcome-formats",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ric_controlOutcome_formats_constr_2, &asn_PER_type_ric_controlOutcome_formats_constr_2, CHOICE_constraint },
	asn_MBR_ric_controlOutcome_formats_2,
	1,	/* Elements count */
	&asn_SPC_ric_controlOutcome_formats_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E2SM_RC_ControlOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_ControlOutcome, ric_controlOutcome_formats),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ric_controlOutcome_formats_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-controlOutcome-formats"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_RC_ControlOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_ControlOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ric-controlOutcome-formats */
};
static asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_ControlOutcome_specs_1 = {
	sizeof(struct E2SM_RC_ControlOutcome),
	offsetof(struct E2SM_RC_ControlOutcome, _asn_ctx),
	asn_MAP_E2SM_RC_ControlOutcome_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_ControlOutcome = {
	"E2SM-RC-ControlOutcome",
	"E2SM-RC-ControlOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_ControlOutcome_tags_1,
	sizeof(asn_DEF_E2SM_RC_ControlOutcome_tags_1)
		/sizeof(asn_DEF_E2SM_RC_ControlOutcome_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_ControlOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_ControlOutcome_tags_1)
		/sizeof(asn_DEF_E2SM_RC_ControlOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_RC_ControlOutcome_1,
	1,	/* Elements count */
	&asn_SPC_E2SM_RC_ControlOutcome_specs_1	/* Additional specs */
};

