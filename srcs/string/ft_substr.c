#include "libftv2/incs/string/ft_substr.h"

#include <assert.h>

#include "libftv2/incs/string/ft_strndup.h"

char* ft_substr(char const* s, unsigned int start, size_t len) {
    assert(s != NULL);
    return ft_strndup(s + start, len);
}
