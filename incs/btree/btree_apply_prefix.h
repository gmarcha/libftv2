#pragma once

#include <assert.h>
#include <stddef.h>

#include "incs/btree/btree.h"

void btree_apply_prefix(t_btree* node, void (*f)(void*));
