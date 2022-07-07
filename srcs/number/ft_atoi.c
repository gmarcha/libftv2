#include "incs/number/ft_atoi.h"

int ft_atoi(const char* nptr) {
    assert(nptr != NULL);
    
    int result = 0, sign = 1;
    size_t i = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
        sign *= (nptr[i++] & 2) - 1;
    while (nptr[i] >= '0' && nptr[i] <= '9')
        result = result * 10 + nptr[i++] - 48;
    return (result * sign);
}
