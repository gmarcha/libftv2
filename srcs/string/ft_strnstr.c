#include "libftv2/incs/string/ft_strnstr.h"

char* ft_strnstr(const char* big, const char* little, size_t len) {
    assert(big != NULL);
    assert(little != NULL);

    size_t i, j;

    if (!little[0])
        return (char *)big;
    i = 0;
    while (big[i] && i < len) {
        j = 0;
        while (big[i + j] == little[j] && i + j < len) {
            if (!little[j + 1])
                return (char *)big + i;
            j++;
        }
        i++;
    }
    return NULL;
}
