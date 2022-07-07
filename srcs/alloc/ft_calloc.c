#include "incs/alloc/ft_calloc.h"

void* ft_calloc(size_t nmemb, size_t size) {
    size_t n = nmemb * size;
    void* s = malloc(n);
    if (s == NULL)
        return NULL;
    return ft_memset(s, 0, n);
}
