/*
 * Ralink MT7620 specific CPU feature overrides
 *
 * Copyright (C) 2008-2009 Gabor Juhos <juhosg@openwrt.org>
 * Copyright (C) 2008 Imre Kaloz <kaloz@openwrt.org>
 *
 * This file was derived from: include/asm-mips/cpu-features.h
 *	Copyright (C) 2003, 2004 Ralf Baechle
 *	Copyright (C) 2004 Maciej W. Rozycki
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 *
 */
#ifndef _RTL8196E_CPU_FEATURE_OVERRIDES_H
#define _RTL8196E_CPU_FEATURE_OVERRIDES_H

#define cpu_has_tlb			1
#define cpu_has_3kex		1
#define cpu_has_4kex		0
#define cpu_has_3k_cache	0
#define cpu_has_4k_cache	0
#define cpu_has_lexra_cache	1
#define cpu_has_tx39_cache	0
#define cpu_has_sb1_cache	0
#define cpu_has_fpu			0
#define cpu_has_32fpr		0
#define cpu_has_counter		0
#define cpu_has_watch		0
#define cpu_has_divec		0

#define cpu_has_prefetch	0
#define cpu_has_ejtag		0
#define cpu_has_llsc		0

#define cpu_has_mips16		1
#define cpu_has_mdmx		0
#define cpu_has_mips3d		0
#define cpu_has_smartmips	0

#define cpu_has_mips32r1	0
#define cpu_has_mips32r2	0
#define cpu_has_mips64r1	0
#define cpu_has_mips64r2	0

#define cpu_has_dsp			0
#define cpu_has_dsp2		0
#define cpu_has_mipsmt		0

#define cpu_has_64bits		0
#define cpu_has_64bit_zero_reg	0
#define cpu_has_64bit_gp_regs	0
#define cpu_has_64bit_addresses	0

#define cpu_has_userlocal		0

#define cpu_dcache_line_size()	16
#define cpu_icache_line_size()	16

#endif /* _RTL8196E_CPU_FEATURE_OVERRIDES_H */
