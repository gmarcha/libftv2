#include "libftv2/incs/gc/get_index.h"

#include <stddef.h>

#include "libftv2/incs/string/ft_strcmp.h"
#include "libftv2/incs/gc/gc.h"

void* get_index(t_list** mem_ref, const char* name) {
    if (name == NULL)
        return NULL;
    t_list* mem_node = *mem_ref;
    while (mem_node != NULL) {
        if (((t_mem_alloc *)mem_node->content)->name != NULL
            && ft_strcmp(((t_mem_alloc *)mem_node->content)->name, name) == 0)
            return ((t_mem_alloc *)mem_node->content)->content;
        mem_node = mem_node->next;
    }
    return NULL;
}
