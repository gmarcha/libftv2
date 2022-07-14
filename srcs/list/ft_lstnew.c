#include "libftv2/incs/list/ft_lstnew.h"

t_list* ft_lstnew(void* content) {
    t_list* node = malloc(sizeof(t_list));
    if (node == NULL)
        return NULL;
    node->content = content;
    node->next = NULL;
    return node;
}
