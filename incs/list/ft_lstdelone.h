#pragma once

#include <stdlib.h>

#include "incs/list/list.h"

void ft_lstdelone(t_list* lst, void (*del)(void*));
