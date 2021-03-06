/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2021 NVIDIA CORPORATION & AFFILIATES
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __gp100_dev_ram_h__
#define __gp100_dev_ram_h__
/* This file is autogenerated.  Do not edit */
#define NV_RAMIN                                                    /* ----G */
#define NV_RAMIN_BASE_SHIFT                                      12 /*       */
#define NV_RAMIN_ALLOC_SIZE                                    4096 /*       */
#define NV_RAMIN_PAGE_DIR_BASE_TARGET               (128*32+1):(128*32+0) /* RWXUF */
#define NV_RAMIN_PAGE_DIR_BASE_TARGET_VID_MEM                  0x00000000 /* RW--V */
#define NV_RAMIN_PAGE_DIR_BASE_TARGET_SYS_MEM_COHERENT         0x00000002 /* RW--V */
#define NV_RAMIN_PAGE_DIR_BASE_TARGET_SYS_MEM_NONCOHERENT      0x00000003 /* RW--V */
#define NV_RAMIN_PAGE_DIR_BASE_VOL                  (128*32+2):(128*32+2) /* RWXUF */
#define NV_RAMIN_PAGE_DIR_BASE_VOL_TRUE                        0x00000001 /* RW--V */
#define NV_RAMIN_PAGE_DIR_BASE_VOL_FALSE                       0x00000000 /* RW--V */
#define NV_RAMIN_PAGE_DIR_BASE_FAULT_REPLAY_TEX     (128*32+4):(128*32+4) /* RWXUF */
#define NV_RAMIN_PAGE_DIR_BASE_FAULT_REPLAY_TEX_DISABLED       0x00000000 /* RW--V */
#define NV_RAMIN_PAGE_DIR_BASE_FAULT_REPLAY_TEX_ENABLED        0x00000001 /* RW--V */
#define NV_RAMIN_PAGE_DIR_BASE_FAULT_REPLAY_GCC     (128*32+5):(128*32+5) /* RWXUF */
#define NV_RAMIN_PAGE_DIR_BASE_FAULT_REPLAY_GCC_DISABLED       0x00000000 /* RW--V */
#define NV_RAMIN_PAGE_DIR_BASE_FAULT_REPLAY_GCC_ENABLED        0x00000001 /* RW--V */
#define NV_RAMIN_USE_NEW_PT_FORMAT                (128*32+10):(128*32+10) /* RWXUF */
#define NV_RAMIN_USE_NEW_PT_FORMAT_FALSE                       0x00000000 /* RW--V */
#define NV_RAMIN_USE_NEW_PT_FORMAT_TRUE                        0x00000001 /* RW--V */
#define NV_RAMIN_BIG_PAGE_SIZE                    (128*32+11):(128*32+11) /* RWXUF */
#define NV_RAMIN_BIG_PAGE_SIZE_128KB                           0x00000000 /* RW--V */
#define NV_RAMIN_BIG_PAGE_SIZE_64KB                            0x00000001 /* RW--V */
#define NV_RAMIN_PAGE_DIR_BASE_LO                 (128*32+31):(128*32+12) /* RWXUF */
#define NV_RAMIN_PAGE_DIR_BASE_HI                  (129*32+31):(129*32+0) /* RWXUF */
#define NV_RAMIN_ADR_LIMIT_LO                     (130*32+31):(130*32+12) /* RWXUF */
#define NV_RAMIN_ADR_LIMIT_HI                      (131*32+31):(131*32+0) /* RWXUF */
#endif // __gp100_dev_ram_h__
