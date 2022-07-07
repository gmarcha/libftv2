#include "incs/list/ft_lstiter.h"

void ft_lstiter(t_list* lst, void (*f)(void*)) {
    assert(f != NULL);

    while (lst != NULL) {
        f(lst->content);
        lst = lst->next;
    }
}
