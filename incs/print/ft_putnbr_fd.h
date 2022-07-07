#pragma once

#ifdef _WIN32
    #include <io.h>
#else
    #include <unistd.h>
#endif

void ft_putnbr_fd(int fd, int n);
