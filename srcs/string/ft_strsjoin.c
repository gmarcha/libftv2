#include "libftv2/incs/string/ft_strsjoin.h"

#include <assert.h>
#include <stdlib.h>

#include "libftv2/incs/string/ft_strlen.h"
#include "libftv2/incs/string/ft_strcpy2.h"

static size_t count_str(const char** strs, const char* sep) {
    size_t i = 0, count = 0;
    while (strs[i])
        count += ft_strlen(strs[i++]);
    if (!i)
        return (count);
    return (count + ft_strlen(sep) * (i - 1));
}

char* ft_strsjoin(const char** strs, const char* sep) {
    assert(strs != NULL);

    char* str = malloc(sizeof(char) * (count_str(strs, sep) + 1));
    if (str == NULL)
        return NULL;
    *str = '\0';
    size_t i = 0, count = 0;
    while (strs[i]) {
        if (i)
            count += ft_strcpy2(str + count, sep);
        count += ft_strcpy2(str + count, strs[i++]);
    }
    return (str);
}
