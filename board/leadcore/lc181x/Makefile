#
# (C) Copyright 2000-2006
# Wolfgang Denk, DENX Software Engineering, wd@denx.de.
#
# See file CREDITS for list of people who contributed to this
# project.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License as
# published by the Free Software Foundation; either version 2 of
# the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston,
# MA 02111-1307 USA
#

include $(TOPDIR)/config.mk

LIB	= $(obj)lib$(BOARD).o

SOBJS	:= lowlevel_init.o

ifdef CONFIG_CPU_LC1810
COBJS	:= lc1810.o
COBJS	+= mfp_lc1810.o
COBJS	+= comip_memctl_lc1810.o
else
COBJS	:= lc1813.o
ifndef CONFIG_COMIP_TARGETLOADER
COBJS	+= mfp_lc1813.o
endif
COBJS	+= comip_memctl_lc1813.o
endif

ifndef CONFIG_COMIP_TARGETLOADER
COBJS	+= comip_lp.o
ifdef CONFIG_ARMCORTEXM0
COBJS	+= comip_m0.o
endif
ifdef CONFIG_DDR_MEMTEST
COBJS	+= comip_memorytest.o
endif
endif

SRCS	:= $(SOBJS:.o=.S) $(COBJS:.o=.c)
OBJS	:= $(addprefix $(obj),$(COBJS))
SOBJS	:= $(addprefix $(obj),$(SOBJS))

$(LIB):	$(obj).depend $(OBJS) $(SOBJS)
	$(call cmd_link_o_target, $(OBJS) $(SOBJS))

clean:
	rm -f $(SOBJS) $(OBJS)

distclean:	clean
	rm -f $(LIB) core *.bak $(obj).depend

#########################################################################

# defines $(obj).depend target
include $(SRCTREE)/rules.mk

sinclude $(obj).depend

#########################################################################
