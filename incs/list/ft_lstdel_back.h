#pragma once

#include "libftv2/incs/list/list.h"

void ft_lstdel_back(t_list** alst, void (*del)(void*));
