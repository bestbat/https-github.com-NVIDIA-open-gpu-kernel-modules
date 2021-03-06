/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the Software),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __lr10_dev_nvs_top_h__
#define __lr10_dev_nvs_top_h__
/* This file is autogenerated.  Do not edit */
#define NV_SWPTOP                     /* R--4P */
#define NV_SWPTOP_TABLE_BASE_ADDRESS_OFFSET           0x0002c000        /*       */
#define NV_SWPTOP_ENTRY                 1:0         /* R-EVF */
#define NV_SWPTOP_ENTRY_INVALID         0x00000000   /* R-E-V */
#define NV_SWPTOP_ENTRY_ENUM            0x00000001   /* R---V */
#define NV_SWPTOP_ENTRY_DATA1           0x00000002   /* R---V */
#define NV_SWPTOP_ENTRY_DATA2           0x00000003   /* R---V */
#define NV_SWPTOP_CONTENTS              30:2         /* R-EVF */
#define NV_SWPTOP_CONTENTS_INIT         0x00000000   /* R-E-V */
#define NV_SWPTOP_CHAIN                 31:31        /* R-EVF */
#define NV_SWPTOP_CHAIN_DISABLE         0x00000000   /* R-E-V */
#define NV_SWPTOP_CHAIN_ENABLE          0x00000001   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE                   9:2   /* R--UF */
#define NV_SWPTOP_ENUM_DEVICE_INVALID               0x0   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_PTOP                0x1   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_SIOCTRL                0x2   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_SIOCTRL_BCAST        0x3   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_NPG              0x4   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_NPG_BCAST              0x5   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_SWX                0x6   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_SWX_BCAST        0x7   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_CLKS              0x8   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_FUSE             0x9   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_JTAG              0xa   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_PMGR              0xb   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_SAW             0xc   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_XP3G             0xd   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_XVE             0xe   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_ROM             0xf   /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_EXTDEV             0x10  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_PRIVMAIN        0x11  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_PRIVLOC                0x12  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_NVLW                0x13  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_NVLW_BCAST          0x14  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_NXBAR               0x15  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_NXBAR_BCAST         0x16  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_PXBAR               0x17  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_PXBAR_BCAST         0x18  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_PCIE                0x19  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_PCIE_BCAST          0x1a  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_PTIMER              0x1b  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_TSENSE              0x1c  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_SOE                 0x1d  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_SMR                0x1e  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_I2C                0x1f  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_SMBPBI                0x20  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_SE                0x21  /* R---V */
#define NV_SWPTOP_ENUM_DEVICE_THERM                0x22  /* R---V */
#define NV_SWPTOP_ENUM_ID              17:10  /* R--UF */
#define NV_SWPTOP_ENUM_RESERVED                  19:18 /* R--UF */
#define NV_SWPTOP_ENUM_VERSION                  30:20 /* R--UF */
#define NV_SWPTOP_DATA1_RESET                    6:2  /* R--UF */
#define NV_SWPTOP_DATA1_INTR                 11:7  /* R--UF */
#define NV_SWPTOP_DATA1_RESERVED2         11:2  /* R--UF */
#define NV_SWPTOP_DATA1_CLUSTER_TYPE                 16:12 /* R--UF */
#define NV_SWPTOP_DATA1_CLUSTER_TYPE_INVALID               0x0  /* R---V */
#define NV_SWPTOP_DATA1_CLUSTER_TYPE_SYS          0x1  /* R---V */
#define NV_SWPTOP_DATA1_CLUSTER_TYPE_PRT          0x2  /* R---V */
#define NV_SWPTOP_DATA1_CLUSTER_NUMBER                 21:17 /* R--UF */
#define NV_SWPTOP_DATA1_RESERVED                 30:22 /* R--UF */
 #define NV_SWPTOP_DATA1_PTOP_LENGTH                 30:2 /* R--UF */
#define NV_SWPTOP_DATA2_TYPE                  30:26  /* R--UF */
#define NV_SWPTOP_DATA2_TYPE_INVALID          0x0    /* R---V */
#define NV_SWPTOP_DATA2_TYPE_RESERVED          0x1    /* R---V */
#define NV_SWPTOP_DATA2_TYPE_RESETREG          0x2    /* R---V */
#define NV_SWPTOP_DATA2_TYPE_INTRREG          0x3    /* R---V */
#define NV_SWPTOP_DATA2_TYPE_DISCOVERY          0x4    /* R---V */
#define NV_SWPTOP_DATA2_TYPE_UNICAST          0x5    /* R---V */
#define NV_SWPTOP_DATA2_TYPE_BROADCAST          0x6    /* R---V */
#define NV_SWPTOP_DATA2_TYPE_MULTICAST0          0x7    /* R---V */
#define NV_SWPTOP_DATA2_TYPE_MULTICAST1          0x8    /* R---V */
#define NV_SWPTOP_DATA2_TYPE_MULTICAST2          0x9    /* R---V */
#define NV_SWPTOP_DATA2_ADDR                  25:2   /* R--UF */
#endif // __lr10_dev_nvs_top_h__
