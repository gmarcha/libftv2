#pragma once

#include <stddef.h>

#include "incs/string/ft_strcmp.h"
#include "incs/list/list.h"
#include "incs/gc/gc.h"

void* get_index(t_list** mem_ref, const char* name);
