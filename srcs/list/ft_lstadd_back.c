#include "libftv2/incs/list/ft_lstadd_back.h"

#include <stddef.h>

void ft_lstadd_back(t_list** alst, t_list* new) {
    if (*alst == NULL) {
        *alst = new;
        return;
    }
    t_list* node = *alst;
    while (node->next != NULL)
        node = node->next;
    node->next = new;
}
