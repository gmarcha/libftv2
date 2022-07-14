#include "libftv2/incs/list/ft_lstdel_back.h"

void ft_lstdel_back(t_list** alst, void (*del)(void*)) {
    if (*alst == NULL)
        return ;
    t_list* node = *alst;
    while (node->next != NULL)
        node = node->next;
    ft_lstdelone(node, del);
    node = NULL;
}
