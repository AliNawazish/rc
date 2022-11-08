/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-nov2021.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_E2SM_RC_IndicationMessage_Format4_H_
#define	_E2SM_RC_IndicationMessage_Format4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2SM_RC_IndicationMessage_Format4_ItemUE;
struct E2SM_RC_IndicationMessage_Format4_ItemCell;

/* E2SM-RC-IndicationMessage-Format4 */
typedef struct E2SM_RC_IndicationMessage_Format4 {
	struct E2SM_RC_IndicationMessage_Format4__ueInfo_List {
		A_SEQUENCE_OF(struct E2SM_RC_IndicationMessage_Format4_ItemUE) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ueInfo_List;
	struct E2SM_RC_IndicationMessage_Format4__cellInfo_List {
		A_SEQUENCE_OF(struct E2SM_RC_IndicationMessage_Format4_ItemCell) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellInfo_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_IndicationMessage_Format4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_IndicationMessage_Format4;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_IndicationMessage_Format4_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_RC_IndicationMessage_Format4_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_IndicationMessage_Format4_H_ */
#include <asn_internal.h>
