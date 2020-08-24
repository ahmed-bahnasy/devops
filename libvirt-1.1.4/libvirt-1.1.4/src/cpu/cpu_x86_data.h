/*
 * cpu_x86_data.h: x86 specific CPU data
 *
 * Copyright (C) 2009-2010 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *      Jiri Denemark <jdenemar@redhat.com>
 */

#ifndef __VIR_CPU_X86_DATA_H__
# define __VIR_CPU_X86_DATA_H__

# include <stdint.h>

typedef struct _virCPUx86CPUID virCPUx86CPUID;
struct _virCPUx86CPUID {
    uint32_t function;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
};

# define CPUX86_BASIC    0x0
# define CPUX86_EXTENDED 0x80000000

typedef struct _virCPUx86Data virCPUx86Data;
struct _virCPUx86Data {
    size_t basic_len;
    virCPUx86CPUID *basic;
    size_t extended_len;
    virCPUx86CPUID *extended;
};

#endif /* __VIR_CPU_X86_DATA_H__ */