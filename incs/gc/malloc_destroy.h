#pragma once

#include <stddef.h>

#include "incs/list/list.h"
#include "incs/gc/gc.h"
#include "incs/gc/malloc_clear.h"

void malloc_destroy(t_list** global_ref, t_list** local_ref);
