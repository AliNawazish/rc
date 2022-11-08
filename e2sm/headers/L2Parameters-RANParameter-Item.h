/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-nov2021.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_L2Parameters_RANParameter_Item_H_
#define	_L2Parameters_RANParameter_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANParameter-ID.h"
#include "RANParameter-Name.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANParameter_Definition;

/* L2Parameters-RANParameter-Item */
typedef struct L2Parameters_RANParameter_Item {
	RANParameter_ID_t	 ranParameter_ID;
	RANParameter_Name_t	 ranParameter_Name;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RANParameter_Definition	*ranParameter_Definition;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} L2Parameters_RANParameter_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_L2Parameters_RANParameter_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_L2Parameters_RANParameter_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_L2Parameters_RANParameter_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _L2Parameters_RANParameter_Item_H_ */
#include <asn_internal.h>
