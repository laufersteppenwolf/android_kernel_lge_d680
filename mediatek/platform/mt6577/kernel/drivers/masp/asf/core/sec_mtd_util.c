/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 *
 * MediaTek Inc. (C) 2011. All rights reserved.
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

#include "sec_error.h"
#include "sec_boot.h"
#include "sec_mtd.h"
#include "sec_typedef.h"
#include "sec_osal_light.h"

/**************************************************************************
 *  MODULE NAME
 **************************************************************************/
#define MOD                         "MTD_UTIL"

/**************************************************************************
 *  PART NAME QUERY
 **************************************************************************/
char* mtd2pl (char* part_name)
{
    /* sync mtd partition name with PL's and DA's */
    /* ----------------- */
    /* seccfg            */
    /* ----------------- */    
    if(0 == mcmp(part_name,MTD_SECCFG,strlen(MTD_SECCFG)))
    {   
        return (char*) PL_SECCFG;
    }
    /* ----------------- */
    /* uboot             */
    /* ----------------- */    
    else if(0 == mcmp(part_name,MTD_UBOOT,strlen(MTD_UBOOT)))
    {   
        return (char*) PL_UBOOT;
    }
    /* ----------------- */    
    /* logo              */
    /* ----------------- */    
    else if(0 == mcmp(part_name,MTD_LOGO,strlen(MTD_LOGO)))
    {
        return (char*) PL_LOGO;
    }
    /* ----------------- */
    /* boot image        */
    /* ----------------- */    
    else if(0 == mcmp(part_name,MTD_BOOTIMG,strlen(MTD_BOOTIMG)))
    {
        return (char*) PL_BOOTIMG;
    }
    /* ----------------- */    
    /* user data         */
    /* ----------------- */    
    else if(0 == mcmp(part_name,MTD_USER,strlen(MTD_USER)))
    {
        return (char*) PL_USER;               
    }   
    /* ----------------- */    
    /* system image      */
    /* ----------------- */    
    else if(0 == mcmp(part_name,MTD_ANDSYSIMG,strlen(MTD_ANDSYSIMG)))
    {
        return (char*) PL_ANDSYSIMG;
    }   
    /* ----------------- */    
    /* recovery          */
    /* ----------------- */    
    else if(0 == mcmp(part_name,MTD_RECOVERY,strlen(MTD_RECOVERY)))
    {
        return (char*) PL_RECOVERY;
    }       
    /* ----------------- */    
    /* sec ro            */
    /* ----------------- */    
    else if(0 == mcmp(part_name,MTD_SECRO,strlen(MTD_SECRO)))
    {
        return (char*) PL_SECRO;
    }
    /* ----------------- */    
    /* not found         */
    /* ----------------- */    
    else
    {
        return part_name;
    }    
}

char* pl2mtd (char* part_name)
{
    /* sync mtd partition name with PL's and DA's */
    /* ----------------- */
    /* seccfg            */
    /* ----------------- */    
    if(0 == mcmp(part_name,PL_SECCFG,strlen(PL_SECCFG)))
    {   
        return (char*) MTD_SECCFG;
    }
    /* ----------------- */    
    /* uboot             */
    /* ----------------- */    
    else if(0 == mcmp(part_name,PL_UBOOT,strlen(PL_UBOOT)))
    {   
        return (char*) MTD_UBOOT;
    }
    /* ----------------- */    
    /* logo              */
    /* ----------------- */    
    else if(0 == mcmp(part_name,PL_LOGO,strlen(PL_LOGO)))
    {
        return (char*) MTD_LOGO;
    }
    /* ----------------- */    
    /* boot image        */
    /* ----------------- */    
    else if(0 == mcmp(part_name,PL_BOOTIMG,strlen(PL_BOOTIMG)))
    {
        return (char*) MTD_BOOTIMG;
    }
    /* ----------------- */    
    /* user data         */
    /* ----------------- */    
    else if(0 == mcmp(part_name,PL_USER,strlen(PL_USER)))
    {
        return (char*) MTD_USER;               
    }   
    /* ----------------- */    
    /* system image      */
    /* ----------------- */    
    else if(0 == mcmp(part_name,PL_ANDSYSIMG,strlen(PL_ANDSYSIMG)))
    {
        return (char*) MTD_ANDSYSIMG;
    }   
    /* ----------------- */    
    /* recovery          */
    /* ----------------- */    
    else if(0 == mcmp(part_name,PL_RECOVERY,strlen(PL_RECOVERY)))
    {
        return (char*) MTD_RECOVERY;
    }       
    /* ----------------- */    
    /* sec ro            */
    /* ----------------- */    
    else if(0 == mcmp(part_name,PL_SECRO,strlen(PL_SECRO)))
    {
        return (char*) MTD_SECRO;
    }
    /* ----------------- */    
    /* not found         */
    /* ----------------- */    
    else
    {
        return part_name;
    }    
}


