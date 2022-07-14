#include "libftv2/incs/alloc/ft_free_strs.h"

#include <assert.h>
#include <stdlib.h>

void ft_free_strs(void* strs) {
    assert(strs != NULL);

    size_t i = 0;
    while (((char**)strs)[i])
        free(((char**)strs)[i++]);
    free(strs);
}
