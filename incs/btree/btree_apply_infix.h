#pragma once

#include "libftv2/incs/btree/btree.h"

void btree_apply_infix(t_btree* node, void (*f)(void*));
