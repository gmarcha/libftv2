#include "libftv2/incs/number/ft_atoi_base.h"

#include <assert.h>

#include "libftv2/incs/char/ft_ischarset.h"

static size_t get_num(int c, const char* base) {
    size_t i = 0;
    while (base[i])
        if (c == base[i++])
            break ;
    return (i - 1);
}

int ft_atoi_base(const char* str, const char* base, size_t len_base) {
    assert(str != NULL);
    assert(base != NULL);

    int result = 0, sign = 1;

    while (*str == 32 || (*str > 8 && *str < 14))
        str++;
    if (*str == 43 || *str == 45)
        sign *= (*str++ & 2) - 1;
    while (*str && ft_ischarset(*str, base))
        result = result * (int)len_base + (int)get_num(*str++, base);
    return (result * sign);
}
