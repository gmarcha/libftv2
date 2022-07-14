#include "libftv2/incs/gc/malloc_clear.h"

void malloc_clear(t_list** mem_ref) {
    ft_lstclear(mem_ref, free_mem_alloc);
}
