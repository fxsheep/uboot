#ifndef __ASM_ARCH_REGS_MAILBOX_H
#define	__ASM_ARCH_REGS_MAILBOX_H

#define	TOP_MAIL_CPA7_DSP_INTR_SET		(TOP_MAILBOX_BASE + 0x00)
#define	TOP_MAIL_CPA7_INTR_EN			(TOP_MAILBOX_BASE + 0x04)
#define	TOP_MAIL_CPA7_INTR_SRC_EN0		(TOP_MAILBOX_BASE + 0x08)
#define	TOP_MAIL_CPA7_INTR_SRC_EN1		(TOP_MAILBOX_BASE + 0x0c)
#define	TOP_MAIL_CPA7_INTR_STA0			(TOP_MAILBOX_BASE + 0x10)
#define	TOP_MAIL_CPA7_INTR_STA1			(TOP_MAILBOX_BASE + 0x14)
#define	TOP_MAIL_X1643_INTR_EN			(TOP_MAILBOX_BASE + 0x18)
#define	TOP_MAIL_X1643_INTR_SRC_EN0		(TOP_MAILBOX_BASE + 0x1c)
#define	TOP_MAIL_X1643_INTR_SRC_EN1		(TOP_MAILBOX_BASE + 0x20)
#define	TOP_MAIL_X1643_INTR_STA0		(TOP_MAILBOX_BASE + 0x24)
#define	TOP_MAIL_X1643_INTR_STA1		(TOP_MAILBOX_BASE + 0x28)
#define	TOP_MAIL_CPA7_DSP_INTR_STA_RAW0		(TOP_MAILBOX_BASE + 0x2c)
#define	TOP_MAIL_CPA7_DSP_INTR_STA_RAW1		(TOP_MAILBOX_BASE + 0x30)
#define	TOP_MAIL_CPA7_DSP_INTR_STA_RAW2		(TOP_MAILBOX_BASE + 0x34)
#define	TOP_MAIL_CPA7_DSP_INTR_STA_RAW3		(TOP_MAILBOX_BASE + 0x38)
#define	TOP_MAIL_APA7_INTR_SET			(TOP_MAILBOX_BASE + 0x40)
#define	TOP_MAIL_APA7_INTR_EN			(TOP_MAILBOX_BASE + 0x44)
#define	TOP_MAIL_APA7_INTR_SRC_EN0		(TOP_MAILBOX_BASE + 0x48)
#define	TOP_MAIL_APA7_INTR_SRC_EN1		(TOP_MAILBOX_BASE + 0x4c)
#define	TOP_MAIL_APA7_INTR_STA0			(TOP_MAILBOX_BASE + 0x50)
#define	TOP_MAIL_APA7_INTR_STA1			(TOP_MAILBOX_BASE + 0x54)
#define	TOP_MAIL_APA7_INTR_STA_RAW0		(TOP_MAILBOX_BASE + 0x58)
#define	TOP_MAIL_APA7_INTR_STA_RAW1		(TOP_MAILBOX_BASE + 0x5c)
#define	TOP_MAIL_APA7_INTR_STA_RAW2		(TOP_MAILBOX_BASE + 0x60)
#define	TOP_MAIL_APA7_INTR_STA_RAW3		(TOP_MAILBOX_BASE + 0x64)
#define	TOP_MAIL_TL420_INTR_SET			(TOP_MAILBOX_BASE + 0x70)
#define	TOP_MAIL_TL420_INTR_EN			(TOP_MAILBOX_BASE + 0x74)
#define	TOP_MAIL_TL420_INTR_STA			(TOP_MAILBOX_BASE + 0x78)
#define	TOP_MAIL_TL420_INTR_STA_RAW		(TOP_MAILBOX_BASE + 0x7c)
#define	TOP_MAIL_MASTER_PRIOR12			(TOP_MAILBOX_BASE + 0x80)
#define	TOP_MAIL_MASTER_PRIOR13			(TOP_MAILBOX_BASE + 0x84)
#define	TOP_MAIL_MASTER_PRIOR14			(TOP_MAILBOX_BASE + 0x88)
#define	TOP_MAIL_MASTER_PRIOR15			(TOP_MAILBOX_BASE + 0x8c)
#define	TOP_MAIL_MASTER_PRIOR0			(TOP_MAILBOX_BASE + 0x90)
#define	TOP_MAIL_MASTER_PRIOR1			(TOP_MAILBOX_BASE + 0x94)
#define	TOP_MAIL_MASTER_PRIOR2			(TOP_MAILBOX_BASE + 0x98)
#define	TOP_MAIL_MASTER_PRIOR3			(TOP_MAILBOX_BASE + 0x9c)
#define	TOP_MAIL_MASTER_PRIOR4			(TOP_MAILBOX_BASE + 0xa0)
#define	TOP_MAIL_MASTER_PRIOR5			(TOP_MAILBOX_BASE + 0xa4)
#define	TOP_MAIL_MASTER_PRIOR6			(TOP_MAILBOX_BASE + 0xa8)
#define	TOP_MAIL_MASTER_PRIOR7			(TOP_MAILBOX_BASE + 0xac)
#define	TOP_MAIL_MASTER_PRIOR8			(TOP_MAILBOX_BASE + 0xb0)
#define	TOP_MAIL_MASTER_PRIOR9			(TOP_MAILBOX_BASE + 0xb4)
#define	TOP_MAIL_MASTER_PRIOR10			(TOP_MAILBOX_BASE + 0xb8)
#define	TOP_MAIL_MASTER_PRIOR11			(TOP_MAILBOX_BASE + 0xbc)
#define	TOP_MAIL_MASTER_PRIOR16			(TOP_MAILBOX_BASE + 0xc0)
#define	TOP_MAIL_MASTER_PRIOR17			(TOP_MAILBOX_BASE + 0xc4)
#define	TOP_MAIL_MASTER_GRP_DEF0		(TOP_MAILBOX_BASE + 0xd0)
#define	TOP_MAIL_MASTER_GRP_DEF1		(TOP_MAILBOX_BASE + 0xd4)
#define	TOP_MAIL_MASTER_GRP_DEF2		(TOP_MAILBOX_BASE + 0xd8)
#define	TOP_MAIL_MASTER_GRP_DEF3		(TOP_MAILBOX_BASE + 0xdc)
#define	TOP_MAIL_MASTER_GRP_DEF4		(TOP_MAILBOX_BASE + 0xe0)
#define	TOP_MAIL_MASTER_GRP_DEF5		(TOP_MAILBOX_BASE + 0xe4)
#define	TOP_MAIL_MASTER_GRP_DEF6		(TOP_MAILBOX_BASE + 0xe8)
#define	TOP_MAIL_MASTER_GRP_DEF7		(TOP_MAILBOX_BASE + 0xec)
#define	TOP_MAIL_MASTER_GRP_DEF8		(TOP_MAILBOX_BASE + 0xf0)
#define	TOP_MAIL_MASTER_GRP_DEF9		(TOP_MAILBOX_BASE + 0xf4)
#define	TOP_MAIL_MASTER_GRP_DEF10		(TOP_MAILBOX_BASE + 0xf8)
#define	TOP_MAIL_MASTER_GRP_DEF11		(TOP_MAILBOX_BASE + 0xfc)
#define	TOP_MAIL_MASTER_GRP_DEF12		(TOP_MAILBOX_BASE + 0x100)
#define	TOP_MAIL_MASTER_GRP_DEF13		(TOP_MAILBOX_BASE + 0x104)
#define	TOP_MAIL_MASTER_GRP_DEF14		(TOP_MAILBOX_BASE + 0x108)
#define	TOP_MAIL_MASTER_GRP_DEF15		(TOP_MAILBOX_BASE + 0x10c)
#define	TOP_MAIL_MASTER_GRP_DEF16		(TOP_MAILBOX_BASE + 0x110)
#define	TOP_MAIL_MASTER_GRP_DEF17		(TOP_MAILBOX_BASE + 0x114)
#define	TOP_MAIL_CPA7_TRIG			(TOP_MAILBOX_BASE + 0x120)
#define	TOP_MAIL_APA7_TRIG			(TOP_MAILBOX_BASE + 0x124)
#define	TOP_MAIL_LP_MODE_CTRL			(TOP_MAILBOX_BASE + 0x12c)
#define	TOP_MAIL_ARBITER_EN			(TOP_MAILBOX_BASE + 0x130)
#define	TOP_MAIL_CPU0_ARBITER_REQ0		(TOP_MAILBOX_BASE + 0x140)
#define	TOP_MAIL_CPU1_ARBITER_REQ0		(TOP_MAILBOX_BASE + 0x150)
#define	TOP_MAIL_CPU2_ARBITER_REQ0		(TOP_MAILBOX_BASE + 0x160)
#define	TOP_MAIL_CPU3_ARBITER_REQ0		(TOP_MAILBOX_BASE + 0x170)
#define	TOP_MAIL_CPU4_ARBITER_REQ0		(TOP_MAILBOX_BASE + 0x180)
#define	TOP_MAIL_CPU5_ARBITER_REQ0		(TOP_MAILBOX_BASE + 0x190)
#define	TOP_MAIL_CPU6_ARBITER_REQ0		(TOP_MAILBOX_BASE + 0x1a0)
#define	TOP_MAIL_CPU7_ARBITER_REQ0		(TOP_MAILBOX_BASE + 0x1b0)
#define	TOP_MAIL_CPU0_ARBITER_REQ1		(TOP_MAILBOX_BASE + 0x144)
#define	TOP_MAIL_CPU1_ARBITER_REQ1		(TOP_MAILBOX_BASE + 0x154)
#define	TOP_MAIL_CPU2_ARBITER_REQ1		(TOP_MAILBOX_BASE + 0x164)
#define	TOP_MAIL_CPU3_ARBITER_REQ1		(TOP_MAILBOX_BASE + 0x174)
#define	TOP_MAIL_CPU4_ARBITER_REQ1		(TOP_MAILBOX_BASE + 0x184)
#define	TOP_MAIL_CPU5_ARBITER_REQ1		(TOP_MAILBOX_BASE + 0x194)
#define	TOP_MAIL_CPU6_ARBITER_REQ1		(TOP_MAILBOX_BASE + 0x1a4)
#define	TOP_MAIL_CPU7_ARBITER_REQ1		(TOP_MAILBOX_BASE + 0x1b4)
#define	TOP_MAIL_CPU0_ARBITER_REQ2		(TOP_MAILBOX_BASE + 0x148)
#define	TOP_MAIL_CPU1_ARBITER_REQ2		(TOP_MAILBOX_BASE + 0x158)
#define	TOP_MAIL_CPU2_ARBITER_REQ2		(TOP_MAILBOX_BASE + 0x168)
#define	TOP_MAIL_CPU3_ARBITER_REQ2		(TOP_MAILBOX_BASE + 0x178)
#define	TOP_MAIL_CPU4_ARBITER_REQ2		(TOP_MAILBOX_BASE + 0x188)
#define	TOP_MAIL_CPU5_ARBITER_REQ2		(TOP_MAILBOX_BASE + 0x198)
#define	TOP_MAIL_CPU6_ARBITER_REQ2		(TOP_MAILBOX_BASE + 0x1a8)
#define	TOP_MAIL_CPU7_ARBITER_REQ2		(TOP_MAILBOX_BASE + 0x1b8)
#define	TOP_MAIL_CPU0_ARBITER_REQ3		(TOP_MAILBOX_BASE + 0x14c)
#define	TOP_MAIL_CPU1_ARBITER_REQ3		(TOP_MAILBOX_BASE + 0x15c)
#define	TOP_MAIL_CPU2_ARBITER_REQ3		(TOP_MAILBOX_BASE + 0x16c)
#define	TOP_MAIL_CPU3_ARBITER_REQ3		(TOP_MAILBOX_BASE + 0x17c)
#define	TOP_MAIL_CPU4_ARBITER_REQ3		(TOP_MAILBOX_BASE + 0x18c)
#define	TOP_MAIL_CPU5_ARBITER_REQ3		(TOP_MAILBOX_BASE + 0x19c)
#define	TOP_MAIL_CPU6_ARBITER_REQ3		(TOP_MAILBOX_BASE + 0x1ac)
#define	TOP_MAIL_CPU7_ARBITER_REQ3		(TOP_MAILBOX_BASE + 0x1bc)
#define	TOP_MAIL_CPU0_ARBITER_ACK		(TOP_MAILBOX_BASE + 0x1c0)
#define	TOP_MAIL_CPU1_ARBITER_ACK		(TOP_MAILBOX_BASE + 0x1c4)
#define	TOP_MAIL_CPU2_ARBITER_ACK		(TOP_MAILBOX_BASE + 0x1c8)
#define	TOP_MAIL_CPU3_ARBITER_ACK		(TOP_MAILBOX_BASE + 0x1cc)
#define	TOP_MAIL_CPU4_ARBITER_ACK		(TOP_MAILBOX_BASE + 0x1d0)
#define	TOP_MAIL_CPU5_ARBITER_ACK		(TOP_MAILBOX_BASE + 0x1d4)
#define	TOP_MAIL_CPU6_ARBITER_ACK		(TOP_MAILBOX_BASE + 0x1d8)
#define	TOP_MAIL_CPU7_ARBITER_ACK		(TOP_MAILBOX_BASE + 0x1dc)
#define	TOP_MAIL_TL420_STA			(TOP_MAILBOX_BASE + 0x1e0)
#define	TOP_MAIL_TL420_EXCEPT_INTR_EN		(TOP_MAILBOX_BASE + 0x1e4)
#define	TOP_MAIL_TL420_EXCEPT_INTR_STA		(TOP_MAILBOX_BASE + 0x1e8)
#define	TOP_MAIL_TL420_EXCEPT_INTR_RAW		(TOP_MAILBOX_BASE + 0x1ec)
#define	TOP_MAIL_TL420_EXT_BP			(TOP_MAILBOX_BASE + 0x1f0)
#define	TOP_MAIL_TL420_CTRL			(TOP_MAILBOX_BASE + 0x1f4)
#define	TOP_MAIL_HSL_FIFO_DATA			(TOP_MAILBOX_BASE + 0x1f8)
#define	TOP_MAIL_HSL_FIFO_STA			(TOP_MAILBOX_BASE + 0x1fc)
#define	TOP_MAIL_XC4210_INTR_EN			(TOP_MAILBOX_BASE + 0x200)
#define	TOP_MAIL_XC4210_INTR_SRC_EN0		(TOP_MAILBOX_BASE + 0x204)
#define	TOP_MAIL_XC4210_INTR_SRC_EN1		(TOP_MAILBOX_BASE + 0x208)
#define	TOP_MAIL_XC4210_INTR_STA0		(TOP_MAILBOX_BASE + 0x20c)
#define	TOP_MAIL_XC4210_INTR_STA1		(TOP_MAILBOX_BASE + 0x210)
#define	TOP_MAIL_GEN_REG0			(TOP_MAILBOX_BASE + 0x220)
#define	TOP_MAIL_GEN_REG1			(TOP_MAILBOX_BASE + 0x224)
#define	TOP_MAIL_GEN_REG2			(TOP_MAILBOX_BASE + 0x228)
#define	TOP_MAIL_GEN_REG3			(TOP_MAILBOX_BASE + 0x22c)
#define	TOP_MAIL_GEN_REG4			(TOP_MAILBOX_BASE + 0x230)
#define	TOP_MAIL_GEN_REG5			(TOP_MAILBOX_BASE + 0x234)
#define	TOP_MAIL_GEN_REG6			(TOP_MAILBOX_BASE + 0x238)
#define	TOP_MAIL_GEN_REG7			(TOP_MAILBOX_BASE + 0x23c)
#define	TOP_MAIL_RAM_EMA_CTRL0			(TOP_MAILBOX_BASE + 0x240)
#define	TOP_MAIL_RAM_EMA_CTRL1			(TOP_MAILBOX_BASE + 0x244)
#define	TOP_MAIL_BUS_CACHE_CTRL			(TOP_MAILBOX_BASE + 0x248)
#define	TOP_MAIL_METS_CTRL			(TOP_MAILBOX_BASE + 0x250)
#define	TOP_MAIL_TEMP_THRES_CFG			(TOP_MAILBOX_BASE + 0x254)
#define	TOP_MAIL_TEMP_MON_EN			(TOP_MAILBOX_BASE + 0x258)
#define	TOP_MAIL_TEMP_MON_INTR_EN		(TOP_MAILBOX_BASE + 0x25c)
#define	TOP_MAIL_TEMP_MON_INTR			(TOP_MAILBOX_BASE + 0x260)
#define	TOP_MAIL_TEMP_MON_INTR_RAW		(TOP_MAILBOX_BASE + 0x264)
#define	TOP_MAIL_TEMP_VALUE			(TOP_MAILBOX_BASE + 0x268)
#define	TOP_MAIL_DDR2CPA7_INTR_EN		(TOP_MAILBOX_BASE + 0x270)
#define	TOP_MAIL_DDR2CPA7_INTR			(TOP_MAILBOX_BASE + 0x274)
#define	TOP_MAIL_DDR_INTR_RAW			(TOP_MAILBOX_BASE + 0x278)
#define	TOP_MAIL_DDR2X1643_INTR_EN		(TOP_MAILBOX_BASE + 0x280)
#define	TOP_MAIL_DDR2X1643_INTR			(TOP_MAILBOX_BASE + 0x284)
#define	TOP_MAIL_DDR2XC4210_INTR_EN		(TOP_MAILBOX_BASE + 0x288)
#define	TOP_MAIL_DDR2XC4210_INTR		(TOP_MAILBOX_BASE + 0x28c)
#define	TOP_MAIL_TOP2CPA7_INTR_EN		(TOP_MAILBOX_BASE + 0x290)
#define	TOP_MAIL_TOP2CPA7_INTR			(TOP_MAILBOX_BASE + 0x294)
#define	TOP_MAIL_COM_UART2X1643_EN		(TOP_MAILBOX_BASE + 0x298)
#define	TOP_MAIL_COM_UART2X1643_INTR		(TOP_MAILBOX_BASE + 0x29c)
#define	TOP_MAIL_COM_UART2XC4210_INTR_EN	(TOP_MAILBOX_BASE + 0x2a0)
#define	TOP_MAIL_COM_UART2XC4210_INTR		(TOP_MAILBOX_BASE + 0x2a4)

#endif
