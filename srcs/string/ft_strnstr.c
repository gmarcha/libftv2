#include "libftv2/incs/string/ft_strnstr.h"

#include <assert.h>

const char* ft_strnstr(const char* big, const char* little, size_t len) {
    assert(big != NULL);
    assert(little != NULL);

    if (!little[0])
        return (const char*)big;
    size_t i = 0;
    while (i < len && big[i]) {
        size_t j = 0;
        while (big[i + j] == little[j] && i + j < len) {
            if (!little[j + 1])
                return (const char*)big + i;
            j++;
        }
        i++;
    }
    return NULL;
}
