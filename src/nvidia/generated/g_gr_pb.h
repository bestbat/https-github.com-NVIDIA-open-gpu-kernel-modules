// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef G_GR_PB_H__
#define G_GR_PB_H__

#include "g_regs_pb.h"

extern const PRB_ENUM_DESC prb_enums_gr_gr_err_typ;

// 'GR_ERR_TYP' enumeration values
#define GR_GR_ERR_TYP_UNKNOWN 255

extern const PRB_ENUM_DESC prb_enums_gr_gr_excptn_subtyp;

// 'GR_EXCPTN_SUBTYP' enumeration values
#define GR_GR_EXCPTN_SUBTYP_UNKNOWN 255

extern const PRB_MSG_DESC prb_messages_gr[];

// Message descriptor pointers
#define GR_EXCEPTION (&prb_messages_gr[0])
#define GR_EXCEPTION_EXCEPTIONDATA (&prb_messages_gr[1])

// Message maximum lengths
// Does not include repeated fields, strings and byte arrays.
#define GR_EXCEPTION_LEN 153
#define GR_EXCEPTION_EXCEPTIONDATA_LEN 29

extern const PRB_FIELD_DESC prb_fields_gr_exception[];

// 'Exception' field descriptor pointers
#define GR_EXCEPTION_ED (&prb_fields_gr_exception[0])
#define GR_EXCEPTION_NV50_REGS (&prb_fields_gr_exception[1])
#define GR_EXCEPTION_GT200_REGS (&prb_fields_gr_exception[2])
#define GR_EXCEPTION_GT212_REGS (&prb_fields_gr_exception[3])
#define GR_EXCEPTION_GF100_REGS (&prb_fields_gr_exception[4])

// 'Exception' field lengths
#define GR_EXCEPTION_ED_LEN 32
#define GR_EXCEPTION_NV50_REGS_LEN 29
#define GR_EXCEPTION_GT200_REGS_LEN 29
#define GR_EXCEPTION_GT212_REGS_LEN 29
#define GR_EXCEPTION_GF100_REGS_LEN 29

extern const PRB_FIELD_DESC prb_fields_gr_exception_exceptiondata[];

// 'ExceptionData' field descriptor pointers
#define GR_EXCEPTION_EXCEPTIONDATA_GPU_INSTANCE (&prb_fields_gr_exception_exceptiondata[0])
#define GR_EXCEPTION_EXCEPTIONDATA_CH_ID (&prb_fields_gr_exception_exceptiondata[1])
#define GR_EXCEPTION_EXCEPTIONDATA_ERROR_SEQUENCE_NUMBER (&prb_fields_gr_exception_exceptiondata[2])
#define GR_EXCEPTION_EXCEPTIONDATA_TIME_STAMP (&prb_fields_gr_exception_exceptiondata[3])

// 'ExceptionData' field lengths
#define GR_EXCEPTION_EXCEPTIONDATA_GPU_INSTANCE_LEN 5
#define GR_EXCEPTION_EXCEPTIONDATA_CH_ID_LEN 5
#define GR_EXCEPTION_EXCEPTIONDATA_ERROR_SEQUENCE_NUMBER_LEN 5
#define GR_EXCEPTION_EXCEPTIONDATA_TIME_STAMP_LEN 10

extern const PRB_SERVICE_DESC prb_services_gr[];

// Service descriptor pointers

#endif // G_GR_PB_H__
