#pragma once

#include <stdlib.h>

#include "libftv2/incs/btree/btree.h"

void btree_clear(t_btree* node, void (*del)(void*));
