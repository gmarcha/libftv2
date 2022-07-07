#pragma once

#include <assert.h>
#include <stddef.h>

#include "incs/list/list.h"
#include "incs/list/ft_lstnew.h"
#include "incs/list/ft_lstclear.h"
#include "incs/list/ft_lstadd_back.h"

t_list* ft_lstmap(t_list* lst, void* (*f)(void*), void (*del)(void*));
