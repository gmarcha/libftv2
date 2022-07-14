#include "libftv2/incs/list/ft_lstclear.h"

#include <stddef.h>

#include "libftv2/incs/list/ft_lstdelone.h"

void ft_lstclear(t_list** lst, void (*del)(void*)) {
    t_list* node = *lst;
    while (node != NULL) {
        t_list* tmp = node;
        node = node->next;
        ft_lstdelone(tmp, del);
    }
    *lst = NULL;
}
