#include "incs/list/ft_lstsize.h"

size_t ft_lstsize(t_list* lst) {

    size_t i = 0;
    while (lst != NULL) {
        lst = lst->next;
        i++;
    }
    return i;
}
