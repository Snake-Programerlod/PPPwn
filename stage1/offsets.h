/*
 * Copyright (C) 2024 Andy Nguyen
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef __OFFSETS_H__
#define __OFFSETS_H__

#if FIRMWARE == 900 // FW 9.00

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_pppoe_softc_list 0xffffffff843ed9f8

#define kdlsym_addr_cc_cpu 0xffffffff843ad360
#define kdlsym_addr_callwheelsize 0xffffffff843af360

#define kdlsym_addr_nd6_llinfo_timer 0xffffffff822ad070

#define kdlsym_addr_Xill 0xffffffff8237d500
#define kdlsym_addr_setidt 0xffffffff82512c40

#define kdlsym_addr_kernel_map 0xffffffff84468d48
#define kdlsym_addr_kmem_alloc 0xffffffff8257be70

#define kdlsym_addr_kproc_create 0xffffffff822969e0
#define kdlsym_addr_kproc_exit 0xffffffff82296c50

#define kdlsym_addr_ksock_create 0xffffffff8261bd20
#define kdlsym_addr_ksock_close 0xffffffff8261bd90
#define kdlsym_addr_ksock_bind 0xffffffff8261bda0
#define kdlsym_addr_ksock_recv 0xffffffff8261c100

#define kdlsym_addr_uart_patch 0xffffffff8372bf60
#define kdlsym_addr_veri_patch 0xffffffff82826874

#elif FIRMWARE == 1100 // FW 11.00

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_pppoe_softc_list 0xffffffff844e2578

#define kdlsym_addr_cc_cpu 0xffffffff844dde80
#define kdlsym_addr_callwheelsize 0xffffffff844dfe80

#define kdlsym_addr_nd6_llinfo_timer 0xffffffff82404e00

#define kdlsym_addr_Xill 0xffffffff824d2370
#define kdlsym_addr_setidt 0xffffffff8245bdb0

#define kdlsym_addr_kernel_map 0xffffffff843ff130
#define kdlsym_addr_kmem_alloc 0xffffffff82445e10

#define kdlsym_addr_kproc_create 0xffffffff822c3140
#define kdlsym_addr_kproc_exit 0xffffffff822C33b0

#define kdlsym_addr_ksock_create 0xffffffff824a9cc0
#define kdlsym_addr_ksock_close 0xffffffff824a9d30
#define kdlsym_addr_ksock_bind 0xffffffff824a9d40
#define kdlsym_addr_ksock_recv 0xffffffff824aa0a0

#define kdlsym_addr_uart_patch 0xffffffff8372cff8
#define kdlsym_addr_veri_patch 0xffffffff82823f64

#elif (FIRMWARE == 1050 || FIRMWARE == 1070 || FIRMWARE == 1071) // FW 10.50 / 10.70 / 10.71

#define kdlsym_addr_Xfast_syscall 0xffffffff822001c0

#define kdlsym_addr_pppoe_softc_list 0xffffffff844514b8

#define kdlsym_addr_cc_cpu 0xffffffff8444e340
#define kdlsym_addr_callwheelsize 0xffffffff84450340

#define kdlsym_addr_nd6_llinfo_timer 0xffffffff8262dbf0

#define kdlsym_addr_Xill 0xffffffff823b5810
#define kdlsym_addr_setidt 0xffffffff82341470

#define kdlsym_addr_kernel_map 0xffffffff844a9250
#define kdlsym_addr_kmem_alloc 0xffffffff82628960

#define kdlsym_addr_kproc_create 0xffffffff825ab490
#define kdlsym_addr_kproc_exit 0xffffffff825ab700

#define kdlsym_addr_ksock_create 0xffffffff824160e0
#define kdlsym_addr_ksock_close 0xffffffff82416150
#define kdlsym_addr_ksock_bind 0xffffffff82416160
#define kdlsym_addr_ksock_recv 0xffffffff824164c0

#define kdlsym_addr_uart_patch 0xffffffff83c3bca0
#define kdlsym_addr_veri_patch 0xffffffff82827db4

#else

#error "Invalid firmware"

#endif

#define kdlsym(sym) (kaslr_offset + kdlsym_addr_##sym)

#endif
