/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm-rc-nov2021.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_GroupID_H_
#define	_GroupID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FiveQI.h"
#include "QCI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GroupID_PR {
	GroupID_PR_NOTHING,	/* No components present */
	GroupID_PR_fiveGC,
	GroupID_PR_ePC
	/* Extensions may appear below */
	
} GroupID_PR;

/* GroupID */
typedef struct GroupID {
	GroupID_PR present;
	union GroupID_u {
		FiveQI_t	 fiveGC;
		QCI_t	 ePC;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GroupID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GroupID;

#ifdef __cplusplus
}
#endif

#endif	/* _GroupID_H_ */
#include <asn_internal.h>