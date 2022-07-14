#include "libftv2/incs/list/ft_lstmap.h"

#include <assert.h>
#include <stddef.h>

#include "libftv2/incs/list/ft_lstnew.h"
#include "libftv2/incs/list/ft_lstclear.h"
#include "libftv2/incs/list/ft_lstadd_back.h"

t_list* ft_lstmap(t_list* lst, void* (*f)(void*), void (*del)(void*)) {
    assert(f != NULL);

    t_list* newLst = NULL;
    while (lst) {
        t_list* node = ft_lstnew(f(lst->content));
        if (node == NULL) {
            ft_lstclear(&newLst, del);
            return NULL;
        }
        ft_lstadd_back(&newLst, node);
        lst = lst->next;
    }
    return (newLst);
}
