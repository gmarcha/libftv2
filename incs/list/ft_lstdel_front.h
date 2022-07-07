#pragma once

#include <stddef.h>

#include "incs/list/list.h"
#include "incs/list/ft_lstdelone.h"

void ft_lstdel_front(t_list** alst, void (*del)(void*));
