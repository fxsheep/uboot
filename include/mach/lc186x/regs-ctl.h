#ifndef __ASM_ARCH_REGS_CTL_H
#define __ASM_ARCH_REGS_CTL_H

#define CTL_AP_HA7_CORE0_WBOOT_ADDR		(CTL_BASE + 0x00)
#define CTL_AP_HA7_CORE1_CBOOT_ADDR		(CTL_BASE + 0x04)
#define CTL_AP_HA7_CORE1_WBOOT_ADDR		(CTL_BASE + 0x08)
#define CTL_AP_HA7_CORE2_CBOOT_ADDR		(CTL_BASE + 0x0c)
#define CTL_AP_HA7_CORE2_WBOOT_ADDR		(CTL_BASE + 0x10)
#define CTL_AP_HA7_CORE3_CBOOT_ADDR		(CTL_BASE + 0x14)
#define CTL_AP_HA7_CORE3_WBOOT_ADDR		(CTL_BASE + 0x18)
#define CTL_AP_SA7_CORE0_WBOOT_ADDR		(CTL_BASE + 0x1c)
#define CTL_AP1CORE_CTRL			(CTL_BASE + 0xe4)
#define CTL_AP4CORE_CTRL			(CTL_BASE + 0xe8)
#define CTL_POR_OTGPHY_CTRL				(USB_CTL_BASE + 0x20)
#define CTL_PORTRESET_OTGPHY_CTRL		(USB_CTL_BASE + 0x24)
#define CTL_OTGPHY_SUSPENDM_CTRL		(USB_CTL_BASE + 0x28)
#define CTL_OTGPHY_CTRL					(USB_CTL_BASE + 0x2c)
#define CTL_OTGPHY_TEST_CTRL0			(USB_CTL_BASE + 0x30)
#define CTL_OTGPHY_TEST_CTRL1			(USB_CTL_BASE + 0x34)
#define CTL_OTGPHY_TEST_CTRL2			(USB_CTL_BASE + 0x38)
#define CTL_OTGPHY_CHARGE_CTRL			(USB_CTL_BASE + 0x3c)
#define CTL_OTGPHY_PARAM_OVERRIDE		(USB_CTL_BASE + 0x40)
#define CTL_OTG_CORE_CTRL				(USB_CTL_BASE + 0x44)
#define CTL_OTG_PHY_STATUS				(USB_CTL_BASE + 0x48)
#define CTL_OTGPHY_INTR_RAW				(USB_CTL_BASE + 0x4c)
#define CTL_OTGPHY_INTR_STA				(USB_CTL_BASE + 0x50)
#define CTL_OTGPHY_INTR_EN				(USB_CTL_BASE + 0x54)
#define CTL_HSIC_PHY_POR_CTRL			(USB_CTL_BASE + 0x60)
#define CTL_HSIC_PHY_PORTRESET_CTRL		(USB_CTL_BASE + 0x64)
#define CTL_HSIC_PHY_SUSPEND_CTRL		(USB_CTL_BASE + 0x68)
#define CTL_HSIC_SCALEDOWN_MODE_CTRL	(USB_CTL_BASE + 0x6c)
#define CTL_HSIC_PHY_STATUS				(USB_CTL_BASE + 0x70)
#define	CTL_HSICPHY_CTRL				(USB_CTL_BASE + 0x74)
#define CTL_HSICPHY_TEST_CTRL0			(USB_CTL_BASE + 0x78)
#define CTL_HSICPHY_TEST_CTRL1			(USB_CTL_BASE + 0x7c)
#define CTL_HSICPHY_TEST_CTRL2			(USB_CTL_BASE + 0x80)
#define CTL_HSICPHY_PARAM_OVERRIDE		(USB_CTL_BASE + 0x84)
#define CTL_HSICPHY_INTR_RAW			(USB_CTL_BASE + 0x88)
#define CTL_HSICPHY_INTR_STA			(USB_CTL_BASE + 0x8c)
#define CTL_HSICPHY_INTR_EN				(USB_CTL_BASE + 0x90)
#define CTL_OTG_CORE_RST_CTRL			(USB_CTL_BASE + 0x94)
#define CTL_HSIC_CORE_RST_CTRL			(USB_CTL_BASE + 0x98)
#define CTL_OTGPHY_SUSPEND_STATUS		(USB_CTL_BASE + 0xdc)
#define CTL_HSICPHY_SUSPEND_STATUS		(USB_CTL_BASE + 0xe0)
#define CTL_LP_MODE_CTRL				(USB_CTL_BASE + 0xa0)

#define CTL_SSI0_PROTOCOL_CTRL			(CTL_BASE + 0xb0)
#define CTL_SSI1_PROTOCOL_CTRL			(CTL_BASE + 0xb4)
#define CTL_SSI2_PROTOCOL_CTRL			(CTL_BASE + 0xb8)
#define CTL_TIMER1_PAUSE_CTRL			(CTL_BASE + 0xbc)
#define CTL_TIMER2_PAUSE_CTRL			(CTL_BASE + 0xc0)
#define CTL_TIMER3_PAUSE_CTRL			(CTL_BASE + 0xc4)
#define CTL_TIMER4_PAUSE_CTRL			(CTL_BASE + 0xc8)
#define CTL_TIMER5_PAUSE_CTRL			(CTL_BASE + 0xcc)
#define CTL_TIMER6_PAUSE_CTRL			(CTL_BASE + 0xd0)
#define CTL_TIMER7_PAUSE_CTRL			(CTL_BASE + 0xd4)
#define CTL_TIMER8_PAUSE_CTRL			(CTL_BASE + 0xd8)
#define CTL_GPU_CTRL				(CTL_BASE + 0xec)
#define CTL_CPHY0_MODE_CTRL			(CTL_BASE + 0xf0)
#define CTL_CPHY0_RSTZ_CTRL			(CTL_BASE + 0xf4)
#define CTL_CPHY0_CTRL0				(CTL_BASE + 0xf8)
#define CTL_CPHY0_CTRL1				(CTL_BASE + 0xfc)
#define CTL_CPHY0_ERROR_STAT			(CTL_BASE + 0x100)
#define CTL_CPHY0_STAT				(CTL_BASE + 0x104)
#define CTL_CPHY1_MODE_CTRL			(CTL_BASE + 0x108)
#define CTL_CPHY1_RSTZ_CTRL			(CTL_BASE + 0x10c)
#define CTL_CPHY1_CTRL0				(CTL_BASE + 0x110)
#define CTL_CPHY1_CTRL1				(CTL_BASE + 0x114)
#define CTL_CPHY1_ERROR_STAT			(CTL_BASE + 0x118)
#define CTL_CPHY1_STAT				(CTL_BASE + 0x11c)
#define CTL_ON2_RAM_CLKGATE_CTRL		(CTL_BASE + 0x120)
#define CTL_BUS_CFG				(CTL_BASE + 0x124)

#endif /* __ASM_ARCH_REGS_CTL_H */
