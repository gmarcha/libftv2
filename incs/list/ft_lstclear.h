#pragma once

#include "libftv2/incs/list/list.h"

void ft_lstclear(t_list** lst, void (*del)(void*));
