#include "libftv2/incs/alloc/ft_calloc.h"

#include <stdlib.h>

#include "libftv2/incs/string/ft_memset.h"

void* ft_calloc(size_t nmemb, size_t size) {
    size_t n = nmemb * size;
    void* s = malloc(n);
    if (s == NULL)
        return NULL;
    return ft_memset(s, 0, n);
}
