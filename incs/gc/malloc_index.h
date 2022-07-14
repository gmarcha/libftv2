#pragma once

#include "libftv2/incs/list/list.h"

void* malloc_index(t_list** mem_ref, const char* name, void (*mem_free)(void*), void* content);
