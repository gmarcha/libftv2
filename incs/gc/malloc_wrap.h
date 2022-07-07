#pragma once

#include <stdlib.h>

#include "incs/list/list.h"
#include "incs/list/ft_lstnew.h"
#include "incs/list/ft_lstadd_front.h"
#include "incs/gc/gc.h"
#include "incs/gc/free_mem_alloc.h"

void* malloc_wrap(t_list** mem_ref, const char* name, void (*mem_free)(void*), size_t size);
