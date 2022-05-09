// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef G_REGS_PB_H__
#define G_REGS_PB_H__


extern const PRB_ENUM_DESC prb_enums_regs_regsandmem_memtype;

// 'RegsAndMem.MemType' enumeration values
#define REGS_REGSANDMEM_GPU_REGS 1
#define REGS_REGSANDMEM_SYS_MEM 2
#define REGS_REGSANDMEM_PDE 3
#define REGS_REGSANDMEM_PTE 4
#define REGS_REGSANDMEM_CPU_REGS 5
#define REGS_REGSANDMEM_PCI_CONFIG_REGS 6
#define REGS_REGSANDMEM_PCI_SPACE 7
#define REGS_REGSANDMEM_INSTANCE 8

extern const PRB_MSG_DESC prb_messages_regs[];

// Message descriptor pointers
#define REGS_REGSANDMEM (&prb_messages_regs[0])

// Message maximum lengths
// Does not include repeated fields, strings and byte arrays.
#define REGS_REGSANDMEM_LEN 26

extern const PRB_FIELD_DESC prb_fields_regs_regsandmem[];

// 'RegsAndMem' field descriptor pointers
#define REGS_REGSANDMEM_TYPE (&prb_fields_regs_regsandmem[0])
#define REGS_REGSANDMEM_OFFSET (&prb_fields_regs_regsandmem[1])
#define REGS_REGSANDMEM_STRIDE (&prb_fields_regs_regsandmem[2])
#define REGS_REGSANDMEM_VAL (&prb_fields_regs_regsandmem[3])

// 'RegsAndMem' field lengths
#define REGS_REGSANDMEM_TYPE_LEN 2
#define REGS_REGSANDMEM_OFFSET_LEN 10
#define REGS_REGSANDMEM_STRIDE_LEN 5
#define REGS_REGSANDMEM_VAL_LEN 5

extern const PRB_SERVICE_DESC prb_services_regs[];

// Service descriptor pointers

#endif // G_REGS_PB_H__