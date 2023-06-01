#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if a node is a leaf
 * @node: pointer to node to check
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right || node->left || node == NULL)
		return (0);
	return (1);
}
