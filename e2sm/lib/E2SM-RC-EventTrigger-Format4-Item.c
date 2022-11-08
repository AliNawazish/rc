/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-nov2021.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "E2SM-RC-EventTrigger-Format4-Item.h"

#include "EventTrigger-UE-Info.h"
asn_TYPE_member_t asn_MBR_E2SM_RC_EventTrigger_Format4_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_EventTrigger_Format4_Item, ric_eventTriggerCondition_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_EventTriggerCondition_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ric-eventTriggerCondition-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_RC_EventTrigger_Format4_Item, triggerType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TriggerType_Choice,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"triggerType"
		},
	{ ATF_POINTER, 2, offsetof(struct E2SM_RC_EventTrigger_Format4_Item, associatedUEInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventTrigger_UE_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"associatedUEInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_RC_EventTrigger_Format4_Item, logicalOR),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalOR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalOR"
		},
};
static const int asn_MAP_E2SM_RC_EventTrigger_Format4_Item_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_E2SM_RC_EventTrigger_Format4_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_EventTrigger_Format4_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ric-eventTriggerCondition-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* triggerType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* associatedUEInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* logicalOR */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_EventTrigger_Format4_Item_specs_1 = {
	sizeof(struct E2SM_RC_EventTrigger_Format4_Item),
	offsetof(struct E2SM_RC_EventTrigger_Format4_Item, _asn_ctx),
	asn_MAP_E2SM_RC_EventTrigger_Format4_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_E2SM_RC_EventTrigger_Format4_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_EventTrigger_Format4_Item = {
	"E2SM-RC-EventTrigger-Format4-Item",
	"E2SM-RC-EventTrigger-Format4-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_RC_EventTrigger_Format4_Item_tags_1,
	sizeof(asn_DEF_E2SM_RC_EventTrigger_Format4_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_EventTrigger_Format4_Item_tags_1[0]), /* 1 */
	asn_DEF_E2SM_RC_EventTrigger_Format4_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_RC_EventTrigger_Format4_Item_tags_1)
		/sizeof(asn_DEF_E2SM_RC_EventTrigger_Format4_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_RC_EventTrigger_Format4_Item_1,
	4,	/* Elements count */
	&asn_SPC_E2SM_RC_EventTrigger_Format4_Item_specs_1	/* Additional specs */
};

