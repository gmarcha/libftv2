#pragma once

#include "libftv2/incs/list/list.h"

t_list* ft_lstmap(t_list* lst, void* (*f)(void*), void (*del)(void*));
