#include "libftv2/incs/gc/free_mem_alloc.h"

void free_mem_alloc(void* mem_alloc) {
    if (((t_mem_alloc *)mem_alloc)->content_free == ft_lstclear)
        ((t_mem_alloc *)mem_alloc)->content_free(
            ((t_mem_alloc *)mem_alloc)->content, free);
    else
        ((t_mem_alloc *)mem_alloc)->content_free(
            ((t_mem_alloc *)mem_alloc)->content);
    free(mem_alloc);
}
