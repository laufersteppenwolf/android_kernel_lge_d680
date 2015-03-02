/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_acf_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Tina Tsai
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 /*                                                                 */
#ifndef AUDIO_ACF_DEFAULT_H
#define AUDIO_ACF_DEFAULT_H
#define BES_LOUDNESS_HSF_COEFF \
0x7C7E9CB, 0xF0702C69, 0x7C7E9CB, 0x7C72C375,     \
0x7C30718, 0xF079F1D0, 0x7C30718, 0x7C21C3C1,     \
0x7AC72B3, 0xF0A71A9A, 0x7AC72B3, 0x7AABC51D,     \
0x7915C50, 0xF0DD4760, 0x7915C50, 0x78E5C6BA,     \
0x787DE35, 0xF0F04396, 0x787DE35, 0x7845C749,     \
0x75C4BA5, 0xF14768B6, 0x75C4BA5, 0x755BC9D2,     \
0x728ABA0, 0xF1AEA8BF, 0x728ABA0, 0x71D5CCBF,     \
0x716BE89, 0xF1D282ED, 0x716BE89, 0x7096CDBE,     \
0x6C58C6D, 0xF274E725, 0x6C58C6D, 0x6AD4D222
#define BES_LOUDNESS_BPF_COEFF \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
    \
 0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
    \
 0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
    \
 0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0,     \
0x0, 0x0, 0x0
#define BES_LOUDNESS_DRC_FORGET_TABLE \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0,     \
0x0, 0x0
#define BES_LOUDNESS_WS_GAIN_MAX  0x0
#define BES_LOUDNESS_WS_GAIN_MIN  0x0
#define BES_LOUDNESS_FILTER_FIRST  0x0
#define BES_LOUDNESS_GAIN_MAP_IN \
0xFFFFFFD3, 0xFFFFFFD8, 0xFFFFFFED, 0xFFFFFFEE, 0x0
#define BES_LOUDNESS_GAIN_MAP_OUT \
0x0, 0xC, 0xC, 0xC, 0x0
#endif
/*                                                                 */
