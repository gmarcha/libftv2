#include "incs/gc/free_wrap.h"

void free_wrap(t_list** mem_ref, void* content) {

    if (*mem_ref == NULL)
        return ;
    if (((t_mem_alloc *)(*mem_ref)->content)->content == content) {
        ft_lstdel_front(mem_ref, free_mem_alloc);
        return ;
    }
    t_list* mem_node = *mem_ref;
    while (mem_node != NULL && mem_node->next != NULL) {
        if (((t_mem_alloc *)mem_node->next->content)->content == content) {
            ft_lstdel_front(&mem_node->next, free_mem_alloc);
            return ;
        }
        mem_node = mem_node->next;
    }
}
