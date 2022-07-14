#pragma once

#include <stddef.h>

#include "libftv2/incs/string/ft_strcmp.h"
#include "libftv2/incs/list/list.h"
#include "libftv2/incs/list/ft_lstdel_front.h"
#include "libftv2/incs/gc/gc.h"
#include "libftv2/incs/gc/free_mem_alloc.h"

void free_index(t_list** mem_ref, const char* name);
