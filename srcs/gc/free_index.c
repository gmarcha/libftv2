#include "libftv2/incs/gc/free_index.h"

#include <stddef.h>

#include "libftv2/incs/string/ft_strcmp.h"
#include "libftv2/incs/list/ft_lstdel_front.h"
#include "libftv2/incs/gc/gc.h"
#include "libftv2/incs/gc/free_mem_alloc.h"

void free_index(t_list** mem_ref, const char* name) {
    if (*mem_ref == NULL || name == NULL)
        return;
    if (((t_mem_alloc *)(*mem_ref)->content)->name != NULL
        && ft_strcmp(((t_mem_alloc *)(*mem_ref)->content)->name, name) == 0) {
        ft_lstdel_front(mem_ref, free_mem_alloc);
        return;
    }
    t_list* mem_node = *mem_ref;
    while (mem_node != NULL && mem_node->next != NULL) {
        if (((t_mem_alloc *)mem_node->next->content)->name != NULL
            && ft_strcmp(
                ((t_mem_alloc *)mem_node->next->content)->name, name) == 0) {
            ft_lstdel_front(&mem_node->next, free_mem_alloc);
            return;
        }
        mem_node = mem_node->next;
    }
}
