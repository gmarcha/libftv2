#pragma once

#include <assert.h>
#include <stddef.h>

#include "incs/btree/btree.h"
#include "incs/btree/btree_create_node.h"

t_btree* btree_insert_data(t_btree** node, void* content, t_cmp cmp);
