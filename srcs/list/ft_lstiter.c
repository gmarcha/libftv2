#include "libftv2/incs/list/ft_lstiter.h"

#include <assert.h>
#include <stddef.h>

void ft_lstiter(t_list* lst, void (*f)(void*)) {
    assert(f != NULL);

    while (lst != NULL) {
        f(lst->content);
        lst = lst->next;
    }
}
