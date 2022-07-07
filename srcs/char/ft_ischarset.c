#include "incs/char/ft_ischarset.h"

int ft_ischarset(int c, const char* charset) {
    assert(charset != NULL);

    while (*charset)
        if (c == *charset++)
            return 1;
    return 0;
}
