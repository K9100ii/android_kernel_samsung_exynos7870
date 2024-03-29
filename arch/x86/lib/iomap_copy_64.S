/*
 * Copyright 2006 PathScale, Inc.  All Rights Reserved.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <linux/linkage.h>
#include <asm/dwarf2.h>

/*
 * override generic version in lib/iomap_copy.c
 */
ENTRY(__iowrite32_copy)
	CFI_STARTPROC
	movl %edx,%ecx
	rep movsl
	ret
	CFI_ENDPROC
ENDPROC(__iowrite32_copy)
