#pragma once

#include <assert.h>
#include <stdlib.h>

#include "libftv2/incs/char/ft_ischarset.h"
#include "libftv2/incs/string/ft_strclen.h"
#include "libftv2/incs/string/ft_strlcpy.h"

char** ft_splitset(const char* s, const char* set);
