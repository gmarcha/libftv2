#pragma once

#include <assert.h>
#include <stddef.h>

#include "incs/btree/btree.h"

void* btree_search_data(t_btree* node, void* data_ref, t_cmp cmp);