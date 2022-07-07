#pragma once

#include <stddef.h>

#include "incs/list/list.h"
#include "incs/list/ft_lstdelone.h"

void ft_lstclear(t_list** lst, void (*del)(void*));
