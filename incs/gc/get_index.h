#pragma once

#include <stddef.h>

#include "libftv2/incs/string/ft_strcmp.h"
#include "libftv2/incs/list/list.h"
#include "libftv2/incs/gc/gc.h"

void* get_index(t_list** mem_ref, const char* name);
