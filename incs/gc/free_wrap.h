#pragma once

#include <stddef.h>

#include "incs/list/list.h"
#include "incs/list/ft_lstdel_front.h"
#include "incs/gc/gc.h"
#include "incs/gc/free_mem_alloc.h"

void free_wrap(t_list** mem_ref, void* content);
