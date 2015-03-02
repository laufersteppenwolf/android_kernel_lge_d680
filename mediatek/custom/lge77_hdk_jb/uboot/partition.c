/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2012. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */
#include <common.h>
#include "mt65xx_partition.h"

part_t partition_layout[] = {
	{PART_PRELOADER, PART_BLKS_PRELOADER, PART_FLAG_NONE,0},
	{PART_DSP_DL, PART_BLKS_DSP_DL, 0, PART_FLAG_NONE},
	{PART_MBR, PART_BLKS_MBR, PART_FLAG_NONE,0},
	{PART_EBR1, PART_BLKS_EBR1, PART_FLAG_NONE,0},
	{PART_MISC2, PART_BLKS_MISC2, PART_FLAG_NONE,0},
	{PART_PMT, PART_BLKS_PMT, PART_FLAG_NONE,0},
	{PART_NVRAM, PART_BLKS_NVRAM, PART_FLAG_NONE,0},
	{PART_SECURE, PART_BLKS_SECURE, 0, PART_FLAG_NONE},
	{PART_UBOOT, PART_BLKS_UBOOT, PART_FLAG_NONE,0},
	{PART_BOOTIMG, PART_BLKS_BOOTIMG, PART_FLAG_NONE,0},
	{PART_RECOVERY, PART_BLKS_RECOVERY, PART_FLAG_NONE,0},
	{PART_SECSTATIC, PART_BLKS_SECSTATIC, 0, PART_FLAG_NONE},
	{PART_MISC, PART_BLKS_MISC, PART_FLAG_NONE,0},
	{PART_LOGO, PART_BLKS_LOGO, PART_FLAG_NONE,0},
	{PART_APANIC, PART_BLKS_APANIC, 0, PART_FLAG_NONE},
	{PART_ANDSYSIMG, PART_BLKS_ANDSYSIMG, 0, PART_FLAG_NONE},
	{PART_CACHE, PART_BLKS_CACHE, PART_FLAG_NONE,0},
	{PART_USER, PART_BLKS_USER, 0, PART_FLAG_NONE},
	{PART_FAT, PART_BLKS_FAT, PART_FLAG_NONE,0},
	{NULL, 0, PART_FLAG_END, 0},
};