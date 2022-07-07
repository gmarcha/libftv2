#include "incs/gc/malloc_destroy.h"

void malloc_destroy(t_list** global_ref, t_list** local_ref) {
    if (local_ref != NULL)
        malloc_clear(local_ref);
    malloc_clear(global_ref);
}
