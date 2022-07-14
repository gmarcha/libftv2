#pragma once

#include "libftv2/incs/btree/btree.h"

t_btree* btree_insert_data(t_btree** node, void* content, t_cmp cmp);
