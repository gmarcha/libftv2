#include "incs/number/ft_nbrlen.h"

size_t ft_nbrlen(int n) {
    size_t len = 0;
    if (n <= 0)
        len++;
    while (n) {
        n /= 10;
        len++;
    }
    return (len);
}
