#include "libftv2/incs/print/ft_putstr_fd.h"

#include <assert.h>
#ifdef _WIN32
    #include <io.h>
#else
    #include <unistd.h>
#endif

#include "libftv2/incs/string/ft_strlen.h"

void ft_putstr_fd(int fd, const char* s) {
    assert(s != NULL);
    write(fd, s, ft_strlen(s));
}
