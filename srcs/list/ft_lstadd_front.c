#include "libftv2/incs/list/ft_lstadd_front.h"

void ft_lstadd_front(t_list **alst, t_list *new) {
    t_list* node = *alst;
    *alst = new;
    (*alst)->next = node;
}
