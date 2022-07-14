#pragma once

#include "libftv2/incs/list/list.h"

void ft_lstdelone(t_list* lst, void (*del)(void*));
