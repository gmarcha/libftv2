#pragma once

#include <stddef.h>

#include "libftv2/incs/list/list.h"
#include "libftv2/incs/gc/gc.h"
#include "libftv2/incs/gc/malloc_clear.h"

void malloc_destroy(t_list** global_ref, t_list** local_ref);
