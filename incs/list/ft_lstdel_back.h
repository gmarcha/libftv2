#pragma once

#include <stddef.h>

#include "libftv2/incs/list/list.h"
#include "libftv2/incs/list/ft_lstdelone.h"

void ft_lstdel_back(t_list** alst, void (*del)(void*));
