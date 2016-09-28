#ifndef __ASM_ARCH_REGS_MMC_H
#define __ASM_ARCH_REGS_MMC_H

#define SDMMC_CTRL						(0x0)
#define SDMMC_CLKDIV						(0x8)
#define SDMMC_CLKENA						(0x10)
#define SDMMC_TMOUT 						(0x14)
#define SDMMC_CTYPE 						(0x18)
#define SDMMC_BLKSIZ						(0x1c)
#define SDMMC_BYTCNT						(0x20)
#define SDMMC_INTEN 						(0x24)
#define SDMMC_CMDARG						(0x28)
#define SDMMC_CMD						(0x2c)
#define SDMMC_RESP0 						(0x30)
#define SDMMC_RESP1 						(0x34)
#define SDMMC_RESP2 						(0x38)
#define SDMMC_RESP3 						(0x3c)
#define SDMMC_MINTSTS						(0x40)
#define SDMMC_RINTSTS						(0x44)
#define SDMMC_STATUS						(0x48)
#define SDMMC_FIFOTH						(0x4c)
#define SDMMC_CDETECT						(0x50)
#define SDMMC_WRTPRT						(0x54)
#define SDMMC_TCBCNT						(0x5c)
#define SDMMC_TBBCNT						(0x60)
#define SDMMC_DEBNCE						(0x64)
#define SDMMC_UHSREG						(0x74)
#define SDMMC_BMOD						(0x80)
#define SDMMC_PLDMND						(0x84)
#define SDMMC_DBADDR						(0x88)
#define SDMMC_IDSTS						(0x8C)
#define SDMMC_IDINTEN						(0x90)
#define SDMMC_DSCADDR						(0x94)
#define SDMMC_BUFADDR						(0x98)
#define SDMMC_CARDTHRCTL					(0x100)					(0x100)
#if defined(CONFIG_CPU_LC1810)
#define SDMMC_FIFO						(0x200)
#elif defined(CONFIG_CPU_LC1813)
#define SDMMC_FIFO						(0x200)
#endif

#define SDMMC_BMOD_PBL_POS					(8)	// bit 8:10 burst length
#define SDMMC_BMOD_DE						(7)	// 0:disable	1:enable
#define SDMMC_BMOD_DSL_POS					(2)	// bit 2:6
#define SDMMC_BMOD_FB						(1)	// APB mode
#define SDMMC_BMOD_SWR						(0)	// 0:not_reset	1:reset


/* define controller bit for SDMMC_CTRL */
#define SDMMC_CTRL_USE_INTERNAL_DMAC				25
#define SDMMC_CTRL_ENABLE_OD_PULLUP				24
#define SDMMC_CTRL_ABORT_READ_DATA				8
#define SDMMC_CTRL_SEND_IRQ_RESPONSE				7
#define SDMMC_CTRL_READ_WAIT					6
#define SDMMC_CTRL_DMA_ENABLE					5
#define SDMMC_CTRL_INT_ENABLE					4
#define SDMMC_CTRL_DMA_RESET					2
#define SDMMC_CTRL_FIFO_RESET					1
#define SDMMC_CTRL_CONTROLLER_RESET				0

/* define controller bit for SDMMC_STATUS */
#define SDMMC_STATUS_FIFO_RX_WATERMARK				0
#define SDMMC_STATUS_FIFO_TX_WATERMARK				1
#define SDMMC_STATUS_FIFO_EMPTY					2
#define SDMMC_STATUS_FIFO_FULL					3
#define SDMMC_STATUS_DATA_3_STATUS				8
#define SDMMC_STATUS_DATA_BUSY					9
#define SDMMC_STATUS_DATA_STATE_MC_BUSY				10
#define SDMMC_STATUS_DMA_ACK					30
#define SDMMC_STATUS_DMA_REQ					31

/* define controller bit for SDMMC_CLKENA */
#define SDMMC_CLKENA_CCLK_LOW_POWER				16
#define SDMMC_CLKENA_CCLK_EN					0

/* define controller bit for SDMMC_TMOUT */
#define SDMMC_TMOUT_DATA_TIMEOUT				8
#define SDMMC_TMOUT_RESP_TIMEOUT				0

/* define controller bit for SDMMC_CTYPE */
#define SDMMC_CTYPE_CARD_WIDTH					0
#define SDMMC_CTYPE_CARD_WIDTH_1BIT				0
#define SDMMC_CTYPE_CARD_WIDTH_4BIT				1

/* define all interrupt types for SDMMC module */
#define SDMMC_SDIO_INTR						16
#define SDMMC_CRCERR_INTR					15
#define SDMMC_ACD_INTR						14
#define SDMMC_SBE_INTR						13
#define SDMMC_HLE_INTR						12
#define SDMMC_FRUN_INTR						11
#define SDMMC_HTO_INTR						10
#define SDMMC_DRTO_INTR						9
#define SDMMC_RTO_INTR						8
#define SDMMC_DCRC_INTR						7
#define SDMMC_RCRC_INTR						6
#define SDMMC_RXDR_INTR						5
#define SDMMC_TXDR_INTR						4
#define SDMMC_DTO_INTR						3
#define SDMMC_CD_INTR						2
#define SDMMC_RE_INTR						1
#define SDMMC_CDT_INTR						0

/* define controller bit for SDMMC_CMD */
#define SDMMC_CMD_START_CMD					31
#define SDMMC_CMD_USE_HOLD_REG					29
#define SDMMC_CMD_UPDATE_CLOCK_REGISTERS_ONLY			21
#define SDMMC_CMD_SEND_INITIALIZATION				15
#define SDMMC_CMD_STOP_ABORT_CMD				14
#define SDMMC_CMD_WAIT_PRVDATA_COMPLETE				13
#define SDMMC_CMD_SEND_AUTO_STOP				12
#define SDMMC_CMD_TRANSFER_MODE					11
#define SDMMC_CMD_READ_WRITE					10
#define SDMMC_CMD_DATA_TRANSFER_EXPECTED			9
#define SDMMC_CMD_CHECK_RESPONSE_CRC				8
#define SDMMC_CMD_RESPONSE_LENGTH				7
#define SDMMC_CMD_RESPONSE_EXPECT				6
#define SDMMC_CMD_CMD_INDEX					0

/* define controller bit for MMC_FIFOTH */
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE		28
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_1		0
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_4		1
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_8		2
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_16		3
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_32		4
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_64		5
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_128		6
#define SDMMC_FIFOTH_DMA_MUTIPLE_TRANSACTION_SIZE_256		7

#define SDMMC_FIFOTH_RX_WMARK					16
#define SDMMC_FIFOTH_TX_WMARK					0

#define MMC_TRANSFER_MASK		((1<<SDMMC_DRTO_INTR)  | \
                                                         (1<<SDMMC_FRUN_INTR)   | \
                                                         (1<<SDMMC_SBE_INTR) | \
                                                         (1<<SDMMC_DTO_INTR))

#define MMC_TRANSFER_ERROR_MASK		((1<<SDMMC_DRTO_INTR)  | \
                                                                (1<<SDMMC_FRUN_INTR)   | \
                                                                (1<<SDMMC_SBE_INTR) )

/* define controller bit for CPR_SDMMCCLKCTL register */
#define CPR_SDMMCCLKCTL_SDMMC_CLK_EN				9
#define CPR_SDMMCCLKCTL_SDMMC_CLK_DIV				6
#define CPR_SDMMCCLKCTL_SDMMC_CLK1_DELAY			3
#define CPR_SDMMCCLKCTL_SDMMC_CLK2_DELAY			0

/* define controller bit for SDMMC_CMD */
#define SDMMC_CDETECT_CDT					0

#endif /* __ASM_ARCH_REGS_MMC_H */
