// SPDX-License-Identifier: BSD-2-Clause
/* Copyright (C) 2021 Intel Corporation. */

#pragma once
#ifdef __cplusplus
extern "C" {
#endif

#include <memkind.h>

extern struct memkind_ops MEMKIND_HIGHEST_CAPACITY_LOCAL_OPS;
extern struct memkind_ops MEMKIND_HIGHEST_CAPACITY_LOCAL_PREFERRED_OPS;
extern struct memkind_ops MEMKIND_LOWEST_LATENCY_LOCAL_OPS;
extern struct memkind_ops MEMKIND_LOWEST_LATENCY_LOCAL_PREFERRED_OPS;
extern struct memkind_ops MEMKIND_HIGHEST_BANDWIDTH_LOCAL_OPS;
extern struct memkind_ops MEMKIND_HIGHEST_BANDWIDTH_LOCAL_PREFERRED_OPS;

#ifdef __cplusplus
}
#endif
