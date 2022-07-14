#pragma once

#include <assert.h>
#include <stddef.h>

#include "libftv2/incs/list/list.h"

void ft_lstiter(t_list* lst, void (*f)(void*));
