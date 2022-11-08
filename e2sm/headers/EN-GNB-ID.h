/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-nov2021.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_EN_GNB_ID_H_
#define	_EN_GNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EN_GNB_ID_PR {
	EN_GNB_ID_PR_NOTHING,	/* No components present */
	EN_GNB_ID_PR_en_gNB_ID
	/* Extensions may appear below */
	
} EN_GNB_ID_PR;

/* EN-GNB-ID */
typedef struct EN_GNB_ID {
	EN_GNB_ID_PR present;
	union EN_GNB_ID_u {
		BIT_STRING_t	 en_gNB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EN_GNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EN_GNB_ID;
extern asn_CHOICE_specifics_t asn_SPC_EN_GNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_EN_GNB_ID_1[1];
extern asn_per_constraints_t asn_PER_type_EN_GNB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EN_GNB_ID_H_ */
#include <asn_internal.h>
