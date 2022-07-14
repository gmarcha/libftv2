#include "libftv2/incs/list/ft_lstdel_front.h"

void ft_lstdel_front(t_list** alst, void (*del)(void*)) {
    if (*alst == NULL)
        return ;
    t_list* tmp = *alst;
    *alst = (*alst)->next;
    ft_lstdelone(tmp, del);
}
