#pragma once

#include <stddef.h>

#include "libftv2/incs/list/list.h"

void* malloc_wrap(t_list** mem_ref, const char* name, void (*mem_free)(void*), size_t size);
