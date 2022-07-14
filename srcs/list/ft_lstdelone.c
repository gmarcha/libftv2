#include "libftv2/incs/list/ft_lstdelone.h"

void ft_lstdelone(t_list* lst, void (*del)(void*)) {
    if (del != NULL)
        del(lst->content);
    free(lst);
}
