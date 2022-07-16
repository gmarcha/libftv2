#pragma once

#include <stddef.h>

#include "libftv2/incs/list/list.h"
#include "libftv2/incs/gc/gc.h"

void* malloc_wrap(
    t_list** mem_ref, const char* name, t_free mem_free, size_t size);
