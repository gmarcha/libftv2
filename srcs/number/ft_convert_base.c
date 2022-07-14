#include "libftv2/incs/number/ft_convert_base.h"

#include <assert.h>

#include "libftv2/incs/string/ft_strlen.h"
#include "libftv2/incs/number/ft_atoi_base.h"
#include "libftv2/incs/number/ft_itoa_base.h"

char* ft_convert_base(const char* str, const char* from, const char* to) {
    const int nb = ft_atoi_base(str, from, ft_strlen(from));
    return (ft_itoa_base(nb, to, ft_strlen(to)));
}
