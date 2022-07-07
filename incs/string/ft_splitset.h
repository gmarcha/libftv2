#pragma once

#include <assert.h>
#include <stdlib.h>

#include "incs/char/ft_ischarset.h"
#include "incs/string/ft_strclen.h"
#include "incs/string/ft_strlcpy.h"

char** ft_splitset(const char* s, const char* set);
