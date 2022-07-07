#include "incs/gc/malloc_index.h"

void* malloc_index(t_list** mem_ref, const char* name, void (*mem_free)(void*), void* content) {

    if (content == NULL)
        return NULL;
    t_mem_alloc* mem_alloc = malloc(sizeof(*mem_alloc));
    if (mem_alloc == NULL) {
        mem_free(content);
        return NULL;
    }
    mem_alloc->content = content;
    mem_alloc->content_free = mem_free;
    mem_alloc->name = name;
    t_list* mem_node = ft_lstnew(mem_alloc);
    if (mem_node == NULL) {
        free_mem_alloc(mem_alloc);
        return NULL;
    }
    ft_lstadd_front(mem_ref, mem_node);
    return mem_alloc->content;
}
