#include "libftv2/incs/string/ft_strclen.h"

#include <assert.h>

#include "libftv2/incs/char/ft_ischarset.h"

size_t ft_strclen(const char* s, const char* charset) {
    assert(s != NULL);
    assert(charset != NULL);

    size_t i = 0;
    while (s[i]) {
        if (ft_ischarset(s[i], charset))
            break;
        i++;
    }
    return i;
}
