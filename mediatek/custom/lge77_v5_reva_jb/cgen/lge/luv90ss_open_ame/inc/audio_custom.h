/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
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
 * aud_custom_exp.h
 *
 * Project:
 * --------
 *   DUMA
 *
 * Description:
 * ------------
 * This file is the header of audio customization related function or definition.
 *
 * Author:
 * -------
 * JY Huang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 05 26 2010 chipeng.chang
 * [ALPS00002287][Need Patch] [Volunteer Patch] ALPS.10X.W10.11 Volunteer patch for audio paramter
 * modify audio parameter.
 *
 * 05 26 2010 chipeng.chang
 * [ALPS00002287][Need Patch] [Volunteer Patch] ALPS.10X.W10.11 Volunteer patch for audio paramter
 * modify for Audio parameter
 *
 *    mtk80306
 * [DUMA00132370] waveform driver file re-structure.
 * waveform driver file re-structure.
 *
 * Jul 28 2009 mtk01352
 * [DUMA00009909] Check in TWO_IN_ONE_SPEAKER and rearrange
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
  /*                                                                 */
#ifndef AUDIO_CUSTOM_H
#define AUDIO_CUSTOM_H
 
/* define Gain For Normal */ 
/* Normal volume: TON, SPK, MIC, FMR, SPH, SID, MED */ 
/* 
#define GAIN_NOR_TON_VOL      8     // reserved 
#define GAIN_NOR_KEY_VOL      43    // TTY_CTM_Mic 
#define GAIN_NOR_MIC_VOL      26    // IN_CALL BuiltIn Mic gain 
// GAIN_NOR_FMR_VOL is used as idle mode record volume 
#define GAIN_NOR_FMR_VOL      0     // Normal BuiltIn Mic gain 
#define GAIN_NOR_SPH_VOL      20     // IN_CALL EARPIECE Volume 
#define GAIN_NOR_SID_VOL      100  // IN_CALL EARPICE sidetone 
#define GAIN_NOR_MED_VOL      25   // reserved 
*/ 
 
#define GAIN_NOR_TON_VOL    8    // reserved 
#define GAIN_NOR_KEY_VOL    43    // TTY_CTM_Mic 
#define GAIN_NOR_MIC_VOL    26    // IN_CALL BuiltIn Mic gain 
// GAIN_NOR_FMR_VOL is used as idle mode record volume 
#define GAIN_NOR_FMR_VOL    0    // Normal BuiltIn Mic gain 
#define GAIN_NOR_SPH_VOL    20    // IN_CALL EARPIECE Volume 
#define GAIN_NOR_SID_VOL    100    // IN_CALL EARPICE sidetone 
#define GAIN_NOR_MED_VOL    25    // reserved 
 
/* define Gain For Headset */ 
/* Headset volume: TON, SPK, MIC, FMR, SPH, SID, MED */ 
/* 
#define GAIN_HED_TON_VOL      8   // reserved 
#define GAIN_HED_KEY_VOL      24  // reserved 
#define GAIN_HED_MIC_VOL      20   // IN_CALL BuiltIn headset gain 
#define GAIN_HED_FMR_VOL      24  // reserved 
#define GAIN_HED_SPH_VOL      12  // IN_CALL Headset volume 
#define GAIN_HED_SID_VOL      100 // IN_CALL Headset sidetone 
#define GAIN_HED_MED_VOL      12   // Idle, headset Audio Buf Gain setting 
*/ 
 
#define GAIN_HED_TON_VOL    8    // reserved 
#define GAIN_HED_KEY_VOL    24    // reserved 
#define GAIN_HED_MIC_VOL    20    // IN_CALL BuiltIn headset gain 
#define GAIN_HED_FMR_VOL    24    // reserved 
#define GAIN_HED_SPH_VOL    12    // IN_CALL Headset volume 
#define GAIN_HED_SID_VOL    100    // IN_CALL Headset sidetone 
#define GAIN_HED_MED_VOL    12    // Idle, headset Audio Buf Gain setting 
 
/* define Gain For Handfree */ 
/* Handfree volume: TON, SPK, MIC, FMR, SPH, SID, MED */ 
/* GAIN_HND_TON_VOL is used as class-D Amp gain*/ 
/* 
#define GAIN_HND_TON_VOL      15  // 
#define GAIN_HND_KEY_VOL      24  // reserved 
#define GAIN_HND_MIC_VOL      20  // IN_CALL LoudSpeak Mic Gain = BuiltIn Gain 
#define GAIN_HND_FMR_VOL      24 // reserved 
#define GAIN_HND_SPH_VOL      6 // IN_CALL LoudSpeak 
#define GAIN_HND_SID_VOL      100// IN_CALL LoudSpeak sidetone 
#define GAIN_HND_MED_VOL      12 // Idle, loudSPK Audio Buf Gain setting 
*/ 
 
#define GAIN_HND_TON_VOL    8    // use for ringtone volume 
#define GAIN_HND_KEY_VOL    24    // reserved 
#define GAIN_HND_MIC_VOL    20    // IN_CALL LoudSpeak Mic Gain = BuiltIn Gain 
#define GAIN_HND_FMR_VOL    24    // reserved 
#define GAIN_HND_SPH_VOL    12    // IN_CALL LoudSpeak 
#define GAIN_HND_SID_VOL    100    // IN_CALL LoudSpeak sidetone 
#define GAIN_HND_MED_VOL    12    // Idle, loudSPK Audio Buf Gain setting 
 
    /* 0: Input FIR coefficients for 2G/3G Normal mode */
    /* 1: Input FIR coefficients for 2G/3G/VoIP Headset mode */
    /* 2: Input FIR coefficients for 2G/3G Handfree mode */
    /* 3: Input FIR coefficients for 2G/3G/VoIP BT mode */
    /* 4: Input FIR coefficients for VoIP Normal mode */
    /* 5: Input FIR coefficients for VoIP Handfree mode */
#define SPEECH_INPUT_FIR_COEFF \
      442,  -694,  1322, -1772,  2199,\
    -3184,  3449, -4421,  4723, -5026,\
     4952, -5330,  4059, -6546, 10362,\
    10362, -6546,  4059, -5330,  4952,\
    -5026,  4723, -4421,  3449, -3184,\
     2199, -1772,  1322,  -694,   442,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
      970, -1728,   524,  -103,  -771,\
    -1629,  3407, -7300,  4562,  1950,\
   -10484,  5566, 12795,-32767, 28085,\
    28085,-32767, 12795,  5566,-10484,\
     1950,  4562, -7300,  3407, -1629,\
     -771,  -103,   524, -1728,   970,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
      241,    34,  -279,    69,  -261,\
      -88,  1864,   724, -1764, -1150,\
    -3122,  -886,  4593,-22194, 32767,\
    32767,-22194,  4593,  -886, -3122,\
    -1150, -1764,   724,  1864,   -88,\
     -261,    69,  -279,    34,   241,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0   
    /* 0: Output FIR coefficients for 2G/3G Normal mode */
    /* 1: Output FIR coefficients for 2G/3G/VoIP Headset mode */
    /* 2: Output FIR coefficients for 2G/3G Handfree mode */
    /* 3: Output FIR coefficients for 2G/3G/VoIP BT mode */
    /* 4: Output FIR coefficients for VoIP Normal mode */
    /* 5: Output FIR coefficients for VoIP Handfree mode */
#define SPEECH_OUTPUT_FIR_COEFF \
     1069, -1534,  1454, -1048,   955,\
    -2164,  2206, -2855,  2446, -2684,\
     4248, -6546,  7379, -8852, 32767,\
    32767, -8852,  7379, -6546,  4248,\
    -2684,  2446, -2855,  2206, -2164,\
      955, -1048,  1454, -1534,  1069,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
     2202,  -363,  2257,  -738,  1715,\
    -1857,  1693, -3674,  1624, -5457,\
     1813, -7916,  4225,-15190, 32767,\
    32767,-15190,  4225, -7916,  1813,\
    -5457,  1624, -3674,  1693, -1857,\
     1715,  -738,  2257,  -363,  2202,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0   
#define   DG_DL_Speech    0xE3D
#define   DG_Microphone    0x1400
#define   FM_Record_Vol    6     /* 0 is smallest. each step increase 1dB.
                            Be careful of distortion when increase too much. 
                            Generally, it's not suggested to tune this parameter */ 
/* 
* The Bluetooth DAI Hardware COnfiguration Parameter 
*/ 
#define   DEFAULT_BLUETOOTH_SYNC_TYPE    0
#define   DEFAULT_BLUETOOTH_SYNC_LENGTH    1
    /* 0: Input FIR coefficients for 2G/3G Normal mode */
    /* 1: Input FIR coefficients for 2G/3G/VoIP Headset mode */
    /* 2: Input FIR coefficients for 2G/3G Handfree mode */
    /* 3: Input FIR coefficients for 2G/3G/VoIP BT mode */
    /* 4: Input FIR coefficients for VoIP Normal mode */
    /* 5: Input FIR coefficients for VoIP Handfree mode */
#define WB_Speech_Input_FIR_Coeff \
      291,    65,   264,    52,   192,   152,    13,   108,   130,    45,\
       -4,   216,  -158,   254,  -115,   118,  -218,   331,  -427,   341,\
     -330,   240,  -250,    31,    21,  -424,   469,  -675,   427,  -500,\
      485, -1138,  1452, -1987,  1684, -1596,  1496, -2542,  3460, -4542,\
     4533, -4773,  5443, -9888, 32767, 32767, -9888,  5443, -4773,  4533,\
    -4542,  3460, -2542,  1496, -1596,  1684, -1987,  1452, -1138,   485,\
     -500,   427,  -675,   469,  -424,    21,    31,  -250,   240,  -330,\
      341,  -427,   331,  -218,   118,  -115,   254,  -158,   216,    -4,\
       45,   130,   108,    13,   152,   192,    52,   264,    65,   291,\
                                      \
        5,    23,   112,   -30,   -69,  -157,    -4,   167,   158,    94,\
     -263,  -140,  -175,   298,    74,   220,  -274,     2,  -170,   245,\
      -44,    64,  -309,  -141,   135,   385,   863,  -389,  -517, -2013,\
      328,   663,  3574,    94,  -605, -5370,  -727,   -34,  7239,  1157,\
     1781, -9726,   592, -8606, 32767, 32767, -8606,   592, -9726,  1781,\
     1157,  7239,   -34,  -727, -5370,  -605,    94,  3574,   663,   328,\
    -2013,  -517,  -389,   863,   385,   135,  -141,  -309,    64,   -44,\
      245,  -170,     2,  -274,   220,    74,   298,  -175,  -140,  -263,\
       94,   158,   167,    -4,  -157,   -69,   -30,   112,    23,     5,\
                                      \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0   
    /* 0: Output FIR coefficients for 2G/3G Normal mode */
    /* 1: Output FIR coefficients for 2G/3G/VoIP Headset mode */
    /* 2: Output FIR coefficients for 2G/3G Handfree mode */
    /* 3: Output FIR coefficients for 2G/3G/VoIP BT mode */
    /* 4: Output FIR coefficients for VoIP Normal mode */
    /* 5: Output FIR coefficients for VoIP Handfree mode */
#define WB_Speech_Output_FIR_Coeff \
     -129,  -137,  -208,  -373,  -207,  -276,  -341,  -414,  -506,  -332,\
     -496,  -447,  -762,  -249,  -620,  -288,  -698,  -323,  -393,  -125,\
     -495,  -221,   -88,   331,   -41,  -158,   747,   250,  1286,  -570,\
     1728,   661,  2467, -1201,  3274,   499,  3542,  -879,  3359,     5,\
     8574, -7942,  8975, -2755, 32767, 32767, -2755,  8975, -7942,  8574,\
        5,  3359,  -879,  3542,   499,  3274, -1201,  2467,   661,  1728,\
     -570,  1286,   250,   747,  -158,   -41,   331,   -88,  -221,  -495,\
     -125,  -393,  -323,  -698,  -288,  -620,  -249,  -762,  -447,  -496,\
     -332,  -506,  -414,  -341,  -276,  -207,  -373,  -208,  -137,  -129,\
                                      \
       21,   -57,    50,    28,   196,   193,   215,   164,   139,   325,\
      269,   475,   165,   405,   188,   710,   481,   829,   252,   344,\
     -195,   216,   384,  1114,  1333,   566,  -181, -1840,  -676,  -354,\
     2830,  1275,  1659, -3302, -1879, -3874,  2405,   480,  4899, -3014,\
      587, -8570,  3537,-10035, 32767, 32767,-10035,  3537, -8570,   587,\
    -3014,  4899,   480,  2405, -3874, -1879, -3302,  1659,  1275,  2830,\
     -354,  -676, -1840,  -181,   566,  1333,  1114,   384,   216,  -195,\
      344,   252,   829,   481,   710,   188,   405,   165,   475,   269,\
      325,   139,   164,   215,   193,   196,    28,    50,   -57,    21,\
                                      \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                      \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0   
#endif 
 /*                                                                 */
