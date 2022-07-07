#pragma once

#include <assert.h>
#ifdef _WIN32
    #include <io.h>
#else
    #include <unistd.h>
#endif

#include "incs/string/ft_strlen.h"

void ft_putstr_fd(int fd, const char* s);
