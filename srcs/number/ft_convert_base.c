#include "incs/number/ft_convert_base.h"

char* ft_convert_base(const char* str, const char* from, const char* to) {
    const int nb = ft_atoi_base(str, from, ft_strlen(from));
    return (ft_itoa_base(nb, to, ft_strlen(to)));
}
