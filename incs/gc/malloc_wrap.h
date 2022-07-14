#pragma once

#include <stdlib.h>

#include "libftv2/incs/list/list.h"
#include "libftv2/incs/list/ft_lstnew.h"
#include "libftv2/incs/list/ft_lstadd_front.h"
#include "libftv2/incs/gc/gc.h"
#include "libftv2/incs/gc/free_mem_alloc.h"

void* malloc_wrap(t_list** mem_ref, const char* name, void (*mem_free)(void*), size_t size);
