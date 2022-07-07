#include "incs/btree/btree_create_node.h"

t_btree* btree_create_node(void *content) {

    t_btree* node = malloc(sizeof(t_btree));
    if (node == NULL)
        return NULL;
    node->content = content;
    node->left = NULL;
    node->right = NULL;
    return node;
}
