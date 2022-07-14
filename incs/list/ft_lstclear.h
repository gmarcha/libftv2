#pragma once

#include <stddef.h>

#include "libftv2/incs/list/list.h"
#include "libftv2/incs/list/ft_lstdelone.h"

void ft_lstclear(t_list** lst, void (*del)(void*));
