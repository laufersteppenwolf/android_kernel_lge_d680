#ifndef _CUST_BAT_H_
#define _CUST_BAT_H_

#include <platform/mt_typedefs.h>

typedef enum
{
    Cust_CC_1600MA = 0x0,
    Cust_CC_1500MA = 0x1,
    Cust_CC_1400MA = 0x2,
    Cust_CC_1300MA = 0x3,
    Cust_CC_1200MA = 0x4,
    Cust_CC_1100MA = 0x5,
    Cust_CC_1000MA = 0x6,
    Cust_CC_900MA  = 0x7,
    Cust_CC_800MA  = 0x8,
    Cust_CC_700MA  = 0x9,
    Cust_CC_650MA  = 0xA,
    Cust_CC_550MA  = 0xB,
    Cust_CC_450MA  = 0xC,
    Cust_CC_400MA  = 0xD,
    Cust_CC_200MA  = 0xE,
    Cust_CC_70MA   = 0xF,
    Cust_CC_0MA       = 0xDD
}cust_charging_current_enum;

typedef struct{
    unsigned int BattVolt;
    unsigned int BattPercent;
}VBAT_TO_PERCENT;

/* Battery Temperature Protection */
#define MAX_CHARGE_TEMPERATURE  50
#define MIN_CHARGE_TEMPERATURE  0
#define ERR_CHARGE_TEMPERATURE  0xFF

/* Recharging Battery Voltage */
//                                                           
#define RECHARGING_VOLTAGE      4265    //4255
//                                                           

/* Charging Current Setting */
#define USB_CHARGER_CURRENT                    Cust_CC_450MA
#define AC_CHARGER_CURRENT                    Cust_CC_700MA

/* Battery Meter Solution */
#define CONFIG_ADC_SOLUTION     1

/* Battery Voltage and Percentage Mapping Table */

// for LGC
VBAT_TO_PERCENT Batt_VoltToPercent_Table[] = {
    /*BattVolt,BattPercent*/
//                                                                            
#if 0  // 3.3V OCV table for LGC1700mAh, not used, use 3.4V Table
    {3323,0},
    {3635,10},
    {3698,20},
    {3771,30},
    {3813,40},
    {3856,50},
    {3925,60},
    {4014,70},
    {4106,80},
    {4214,90},
    {4328,100},
#else  // 3.4V OCV table for LGC1700mAh
    {3396,0},
    {3664,10},
    {3711,20},
    {3776,30},
    {3815,40},
    {3860,50},
    {3936,60},
    {4021,70},
    {4114,80},
    {4213,90},
    {4328,100},
#endif
//                                                                            
};

//                                                                            
// for BYD
VBAT_TO_PERCENT Batt_VoltToPercent_Table_BYD[] = {
    /*BattVolt,BattPercent*/
#if 0  // 3.3V OCV table for BYD 1700mAh, not used, use 3.4V Table
    {3333,0},
    {3691,10},
    {3751,20},
    {3777,30},
    {3802,40},
    {3842,50},
    {3922,60},
    {3998,70},
    {4097,80},
    {4203,90},
    {4326,100},
#else  // 3.4V OCV table for BYD1700mAh
    {3333,0},
    {3691,10},
    {3751,20},
    {3777,30},
    {3805,40},
    {3848,50},
    {3929,60},
    {4005,70},
    {4097,80},
    {4203,90},
    {4326,100},
#endif
};
//                                                                            

/* Precise Tunning */
//#define BATTERY_AVERAGE_SIZE     600
#define BATTERY_AVERAGE_SIZE     60


#define CHARGING_IDLE_MODE     1

#define CHARGING_PICTURE     1

/* Common setting */
#define R_CURRENT_SENSE 2                // 0.2 Ohm
#define R_BAT_SENSE 4                    // times of voltage
#define R_I_SENSE 4                        // times of voltage
#define R_CHARGER_1 330
#define R_CHARGER_2 39
#define R_CHARGER_SENSE ((R_CHARGER_1+R_CHARGER_2)/R_CHARGER_2)    // times of voltage
//#define V_CHARGER_MAX 6000                // 6 V
#define V_CHARGER_MAX 6500                // 6.5 V
#define V_CHARGER_MIN 4400                // 4.4 V
#define V_CHARGER_ENABLE 0                // 1:ON , 0:OFF
#define BACKLIGHT_KEY 10                    // camera key

/* Teperature related setting */
//                                                                                
#define RBAT_PULL_UP_R             100000
#define RBAT_PULL_UP_VOLT          1200
#define TBAT_OVER_CRITICAL_LOW    738998

#define BAT_TEMP_PROTECT_ENABLE    0

#define BAT_NTC_10 0
#define BAT_NTC_47 0
#define BAT_NTC_68 1
//                                                                                

/* The option of new charging animation */
#define ANIMATION_NEW

//                                                                         
#define DISABLE_POST_CHARGE
//                                                                         
#endif /* _CUST_BAT_H_ */
