#ifndef  BOARD_E2000_FIOPAD_COMMON_H
#define  BOARD_E2000_FIOPAD_COMMON_H

#ifdef __cplusplus
extern "C"
{
#endif

/***************************** Include Files *********************************/
#include "ftypes.h"

/**************************** Type Definitions *******************************/

/************************** Constant Definitions *****************************/

/************************** Variable Definitions *****************************/

/***************** Macros (Inline Functions) Definitions *********************/
#define FIOPAD_INDEX(offset) \
    { \
        /* reg_off */   (offset),  \
        /* reg_bit */   (0) \
    }

/*****************************************************************************/
/* register offset of iopad function / pull / driver strength */
#define FIOPAD_0_FUNC_OFFSET     0x0000U
#define FIOPAD_2_FUNC_OFFSET     0x0004U
#define FIOPAD_3_FUNC_OFFSET     0x0008U
#define FIOPAD_4_FUNC_OFFSET     0x000CU
#define FIOPAD_5_FUNC_OFFSET     0x0010U
#define FIOPAD_6_FUNC_OFFSET     0x0014U
#define FIOPAD_7_FUNC_OFFSET     0x0018U
#define FIOPAD_8_FUNC_OFFSET     0x001CU
#define FIOPAD_9_FUNC_OFFSET     0x0020U
#define FIOPAD_10_FUNC_OFFSET    0x0024U
#define FIOPAD_11_FUNC_OFFSET    0x0028U
#define FIOPAD_12_FUNC_OFFSET    0x002CU
#define FIOPAD_13_FUNC_OFFSET    0x0030U
#define FIOPAD_14_FUNC_OFFSET    0x0034U
#define FIOPAD_15_FUNC_OFFSET    0x0038U
#define FIOPAD_16_FUNC_OFFSET    0x003CU
#define FIOPAD_17_FUNC_OFFSET    0x0040U
#define FIOPAD_18_FUNC_OFFSET    0x0044U
#define FIOPAD_19_FUNC_OFFSET    0x0048U
#define FIOPAD_20_FUNC_OFFSET    0x004CU
#define FIOPAD_21_FUNC_OFFSET    0x0050U
#define FIOPAD_22_FUNC_OFFSET    0x0054U
#define FIOPAD_23_FUNC_OFFSET    0x0058U
#define FIOPAD_24_FUNC_OFFSET    0x005CU
#define FIOPAD_25_FUNC_OFFSET    0x0060U
#define FIOPAD_26_FUNC_OFFSET    0x0064U
#define FIOPAD_27_FUNC_OFFSET    0x0068U
#define FIOPAD_28_FUNC_OFFSET    0x006CU
#define FIOPAD_31_FUNC_OFFSET    0x0070U
#define FIOPAD_32_FUNC_OFFSET    0x0074U
#define FIOPAD_33_FUNC_OFFSET    0x0078U
#define FIOPAD_34_FUNC_OFFSET    0x007CU
#define FIOPAD_35_FUNC_OFFSET    0x0080U
#define FIOPAD_36_FUNC_OFFSET    0x0084U
#define FIOPAD_37_FUNC_OFFSET    0x0088U
#define FIOPAD_38_FUNC_OFFSET    0x008CU
#define FIOPAD_39_FUNC_OFFSET    0x0090U
#define FIOPAD_40_FUNC_OFFSET    0x0094U
#define FIOPAD_41_FUNC_OFFSET    0x0098U
#define FIOPAD_42_FUNC_OFFSET    0x009CU
#define FIOPAD_43_FUNC_OFFSET    0x00A0U
#define FIOPAD_44_FUNC_OFFSET    0x00A4U
#define FIOPAD_45_FUNC_OFFSET    0x00A8U
#define FIOPAD_46_FUNC_OFFSET    0x00ACU
#define FIOPAD_47_FUNC_OFFSET    0x00B0U
#define FIOPAD_48_FUNC_OFFSET    0x00B4U
#define FIOPAD_49_FUNC_OFFSET    0x00B8U
#define FIOPAD_50_FUNC_OFFSET    0x00BCU
#define FIOPAD_51_FUNC_OFFSET    0x00C0U
#define FIOPAD_52_FUNC_OFFSET    0x00C4U
#define FIOPAD_53_FUNC_OFFSET    0x00C8U
#define FIOPAD_54_FUNC_OFFSET    0x00CCU
#define FIOPAD_55_FUNC_OFFSET    0x00D0U
#define FIOPAD_56_FUNC_OFFSET    0x00D4U
#define FIOPAD_57_FUNC_OFFSET    0x00D8U
#define FIOPAD_58_FUNC_OFFSET    0x00DCU
#define FIOPAD_59_FUNC_OFFSET    0x00E0U
#define FIOPAD_60_FUNC_OFFSET    0x00E4U
#define FIOPAD_61_FUNC_OFFSET    0x00E8U
#define FIOPAD_62_FUNC_OFFSET    0x00ECU
#define FIOPAD_63_FUNC_OFFSET    0x00F0U
#define FIOPAD_64_FUNC_OFFSET    0x00F4U
#define FIOPAD_65_FUNC_OFFSET    0x00F8U
#define FIOPAD_66_FUNC_OFFSET    0x00FCU
#define FIOPAD_67_FUNC_OFFSET    0x0100U
#define FIOPAD_68_FUNC_OFFSET    0x0104U
#define FIOPAD_148_FUNC_OFFSET   0x0108U
#define FIOPAD_69_FUNC_OFFSET    0x010CU
#define FIOPAD_70_FUNC_OFFSET    0x0110U
#define FIOPAD_71_FUNC_OFFSET    0x0114U
#define FIOPAD_72_FUNC_OFFSET    0x0118U
#define FIOPAD_73_FUNC_OFFSET    0x011CU
#define FIOPAD_74_FUNC_OFFSET    0x0120U
#define FIOPAD_75_FUNC_OFFSET    0x0124U
#define FIOPAD_76_FUNC_OFFSET    0x0128U
#define FIOPAD_77_FUNC_OFFSET    0x012CU
#define FIOPAD_78_FUNC_OFFSET    0x0130U
#define FIOPAD_79_FUNC_OFFSET    0x0134U
#define FIOPAD_80_FUNC_OFFSET    0x0138U
#define FIOPAD_81_FUNC_OFFSET    0x013CU
#define FIOPAD_82_FUNC_OFFSET    0x0140U
#define FIOPAD_83_FUNC_OFFSET    0x0144U
#define FIOPAD_84_FUNC_OFFSET    0x0148U
#define FIOPAD_85_FUNC_OFFSET    0x014CU
#define FIOPAD_86_FUNC_OFFSET    0x0150U
#define FIOPAD_87_FUNC_OFFSET    0x0154U
#define FIOPAD_88_FUNC_OFFSET    0x0158U
#define FIOPAD_89_FUNC_OFFSET    0x015CU
#define FIOPAD_90_FUNC_OFFSET    0x0160U
#define FIOPAD_91_FUNC_OFFSET    0x0164U
#define FIOPAD_92_FUNC_OFFSET    0x0168U
#define FIOPAD_93_FUNC_OFFSET    0x016CU
#define FIOPAD_94_FUNC_OFFSET    0x0170U
#define FIOPAD_95_FUNC_OFFSET    0x0174U
#define FIOPAD_96_FUNC_OFFSET    0x0178U
#define FIOPAD_97_FUNC_OFFSET    0x017CU
#define FIOPAD_98_FUNC_OFFSET    0x0180U
#define FIOPAD_29_FUNC_OFFSET    0x0184U
#define FIOPAD_30_FUNC_OFFSET    0x0188U
#define FIOPAD_99_FUNC_OFFSET      0x018CU
#define FIOPAD_100_FUNC_OFFSET  0x0190U
#define FIOPAD_101_FUNC_OFFSET  0x0194U
#define FIOPAD_102_FUNC_OFFSET  0x0198U
#define FIOPAD_103_FUNC_OFFSET  0x019CU
#define FIOPAD_104_FUNC_OFFSET  0x01A0U
#define FIOPAD_105_FUNC_OFFSET  0x01A4U
#define FIOPAD_106_FUNC_OFFSET  0x01A8U
#define FIOPAD_107_FUNC_OFFSET  0x01ACU
#define FIOPAD_108_FUNC_OFFSET  0x01B0U
#define FIOPAD_109_FUNC_OFFSET  0x01B4U
#define FIOPAD_110_FUNC_OFFSET  0x01B8U
#define FIOPAD_111_FUNC_OFFSET  0x01BCU
#define FIOPAD_112_FUNC_OFFSET  0x01C0U
#define FIOPAD_113_FUNC_OFFSET  0x01C4U
#define FIOPAD_114_FUNC_OFFSET  0x01C8U
#define FIOPAD_115_FUNC_OFFSET  0x01CCU
#define FIOPAD_116_FUNC_OFFSET  0x01D0U
#define FIOPAD_117_FUNC_OFFSET  0x01D4U
#define FIOPAD_118_FUNC_OFFSET  0x01D8U
#define FIOPAD_119_FUNC_OFFSET  0x01DCU
#define FIOPAD_120_FUNC_OFFSET  0x01E0U
#define FIOPAD_121_FUNC_OFFSET  0x01E4U
#define FIOPAD_122_FUNC_OFFSET  0x01E8U
#define FIOPAD_123_FUNC_OFFSET  0x01ECU
#define FIOPAD_124_FUNC_OFFSET  0x01F0U
#define FIOPAD_125_FUNC_OFFSET  0x01F4U
#define FIOPAD_126_FUNC_OFFSET  0x01F8U
#define FIOPAD_127_FUNC_OFFSET  0x01FCU
#define FIOPAD_128_FUNC_OFFSET  0x0200U
#define FIOPAD_129_FUNC_OFFSET  0x0204U
#define FIOPAD_130_FUNC_OFFSET  0x0208U
#define FIOPAD_131_FUNC_OFFSET  0x020CU
#define FIOPAD_132_FUNC_OFFSET  0x0210U
#define FIOPAD_133_FUNC_OFFSET  0x0214U
#define FIOPAD_134_FUNC_OFFSET  0x0218U
#define FIOPAD_135_FUNC_OFFSET  0x021CU
#define FIOPAD_136_FUNC_OFFSET  0x0220U
#define FIOPAD_137_FUNC_OFFSET  0x0224U
#define FIOPAD_138_FUNC_OFFSET  0x0228U
#define FIOPAD_139_FUNC_OFFSET  0x022CU
#define FIOPAD_140_FUNC_OFFSET  0x0230U
#define FIOPAD_141_FUNC_OFFSET  0x0234U
#define FIOPAD_142_FUNC_OFFSET  0x0238U
#define FIOPAD_143_FUNC_OFFSET  0x023CU
#define FIOPAD_144_FUNC_OFFSET  0x0240U
#define FIOPAD_145_FUNC_OFFSET  0x0244U
#define FIOPAD_146_FUNC_OFFSET  0x0248U
#define FIOPAD_147_FUNC_OFFSET  0x024CU

/* register offset of iopad delay */
#define FIOPAD_10_DELAY_OFFSET  0x1024U
#define FIOPAD_11_DELAY_OFFSET  0x1028U
#define FIOPAD_12_DELAY_OFFSET  0x102CU
#define FIOPAD_13_DELAY_OFFSET  0x1030U
#define FIOPAD_14_DELAY_OFFSET  0x1034U
#define FIOPAD_23_DELAY_OFFSET  0x1058U
#define FIOPAD_24_DELAY_OFFSET  0x105CU
#define FIOPAD_25_DELAY_OFFSET  0x1060U
#define FIOPAD_26_DELAY_OFFSET  0x1064U
#define FIOPAD_32_DELAY_OFFSET  0x1074U
#define FIOPAD_33_DELAY_OFFSET  0x1078U
#define FIOPAD_34_DELAY_OFFSET  0x107CU
#define FIOPAD_35_DELAY_OFFSET  0x1080U
#define FIOPAD_55_DELAY_OFFSET  0x10D0U
#define FIOPAD_56_DELAY_OFFSET  0x10D4U
#define FIOPAD_57_DELAY_OFFSET  0x10D8U
#define FIOPAD_58_DELAY_OFFSET  0x10DCU
#define FIOPAD_59_DELAY_OFFSET  0x10E0U
#define FIOPAD_60_DELAY_OFFSET  0x10E4U
#define FIOPAD_61_DELAY_OFFSET  0x10E8U
#define FIOPAD_62_DELAY_OFFSET  0x10ECU
#define FIOPAD_63_DELAY_OFFSET  0x10F0U
#define FIOPAD_64_DELAY_OFFSET  0x10F4U
#define FIOPAD_65_DELAY_OFFSET  0x10F8U
#define FIOPAD_66_DELAY_OFFSET  0x10FCU
#define FIOPAD_67_DELAY_OFFSET  0x1100U
#define FIOPAD_68_DELAY_OFFSET  0x1104U
#define FIOPAD_148_DELAY_OFFSET 0x1108U
#define FIOPAD_69_DELAY_OFFSET  0x110CU
#define FIOPAD_70_DELAY_OFFSET  0x1110U
#define FIOPAD_71_DELAY_OFFSET  0x1114U
#define FIOPAD_72_DELAY_OFFSET  0x1118U
#define FIOPAD_73_DELAY_OFFSET  0x111CU
#define FIOPAD_74_DELAY_OFFSET  0x1120U
#define FIOPAD_75_DELAY_OFFSET  0x1124U
#define FIOPAD_76_DELAY_OFFSET  0x1128U
#define FIOPAD_77_DELAY_OFFSET  0x112CU
#define FIOPAD_78_DELAY_OFFSET  0x1130U
#define FIOPAD_80_DELAY_OFFSET  0x1138U
#define FIOPAD_81_DELAY_OFFSET  0x113CU
#define FIOPAD_82_DELAY_OFFSET  0x1140U
#define FIOPAD_83_DELAY_OFFSET  0x1144U
#define FIOPAD_84_DELAY_OFFSET  0x1148U
#define FIOPAD_85_DELAY_OFFSET  0x114CU
#define FIOPAD_86_DELAY_OFFSET  0x1150U
#define FIOPAD_87_DELAY_OFFSET  0x1154U
#define FIOPAD_88_DELAY_OFFSET  0x1158U
#define FIOPAD_89_DELAY_OFFSET  0x115CU
#define FIOPAD_90_DELAY_OFFSET  0x1160U
#define FIOPAD_92_DELAY_OFFSET  0x1168U
#define FIOPAD_93_DELAY_OFFSET  0x116CU
#define FIOPAD_94_DELAY_OFFSET  0x1170U
#define FIOPAD_95_DELAY_OFFSET  0x1174U
#define FIOPAD_96_DELAY_OFFSET  0x1178U
#define FIOPAD_97_DELAY_OFFSET  0x117CU
#define FIOPAD_98_DELAY_OFFSET  0x1180U
#define FIOPAD_99_DELAY_OFFSET  0x118CU
#define FIOPAD_100_DELAY_OFFSET 0x1190U
#define FIOPAD_101_DELAY_OFFSET 0x1194U
#define FIOPAD_102_DELAY_OFFSET 0x1198U
#define FIOPAD_103_DELAY_OFFSET 0x119CU
#define FIOPAD_104_DELAY_OFFSET 0x11A0U
#define FIOPAD_105_DELAY_OFFSET 0x11A4U
#define FIOPAD_106_DELAY_OFFSET 0x11A8U
#define FIOPAD_107_DELAY_OFFSET 0x11ACU
#define FIOPAD_108_DELAY_OFFSET 0x11B0U
#define FIOPAD_109_DELAY_OFFSET 0x11B4U
#define FIOPAD_110_DELAY_OFFSET 0x11B8U
#define FIOPAD_111_DELAY_OFFSET 0x11BCU
#define FIOPAD_112_DELAY_OFFSET 0x11C0U
#define FIOPAD_115_DELAY_OFFSET 0x11CCU
#define FIOPAD_116_DELAY_OFFSET 0x11D0U
#define FIOPAD_117_DELAY_OFFSET 0x11D4U
#define FIOPAD_118_DELAY_OFFSET 0x11D8U
#define FIOPAD_119_DELAY_OFFSET 0x11DCU
#define FIOPAD_120_DELAY_OFFSET 0x11E0U
#define FIOPAD_121_DELAY_OFFSET 0x11E4U
#define FIOPAD_122_DELAY_OFFSET 0x11E8U
#define FIOPAD_123_DELAY_OFFSET 0x11ECU
#define FIOPAD_124_DELAY_OFFSET 0x11F0U
#define FIOPAD_125_DELAY_OFFSET 0x11F4U
#define FIOPAD_126_DELAY_OFFSET 0x11F8U
#define FIOPAD_127_DELAY_OFFSET 0x11FCU
#define FIOPAD_128_DELAY_OFFSET 0x1200U
#define FIOPAD_136_DELAY_OFFSET 0x1220U
#define FIOPAD_137_DELAY_OFFSET 0x1224U
#define FIOPAD_138_DELAY_OFFSET 0x1228U
#define FIOPAD_139_DELAY_OFFSET 0x122CU
#define FIOPAD_140_DELAY_OFFSET 0x1230U
#define FIOPAD_141_DELAY_OFFSET 0x1234U
#define FIOPAD_142_DELAY_OFFSET 0x1238U
#define FIOPAD_143_DELAY_OFFSET 0x123CU
#define FIOPAD_144_DELAY_OFFSET 0x1240U
#define FIOPAD_145_DELAY_OFFSET 0x1244U
#define FIOPAD_146_DELAY_OFFSET 0x1248U
#define FIOPAD_147_DELAY_OFFSET 0x124CU

/************************** Function Prototypes ******************************/
/* set iopad mux for spim */
void FIOPadSetSpimMux(u32 spim_id);

/* set iopad mux for gpio */
void FIOPadSetGpioMux(u32 gpio_id, u32 pin_id);

/* set iopad mux for mio */
void FIOPadSetMioMux(u32 mio_id);

/* print information of all iopad */
void FIOPadDumpPadFunc(void);

/* set iopad mux for can */
void FIOPadSetCanMux(u32 can_id);

/* set iopad mux for qspi */
void FIOPadSetQspiMux(u32 qspi_id, u32 cs_id);

/* set iopad mux for pwm */
void FIOPadSetPwmMux(u32 pwm_id, u32 pwm_channel);

/* set iopad mux for adc */
void FIOPadSetAdcMux(u32 adc_id, u32 adc_channel);

/* set iopad mux for tacho*/
void FIOPadSetTachoMux(u32 pwm_in_id);

/* set iopad mux for uart*/
void FIOPadSetUartMux(u32 uart_id);

#ifdef __cplusplus
}

#endif

#endif