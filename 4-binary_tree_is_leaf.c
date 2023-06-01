#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if a node is a leaf
 * @node: pointer to node to check
 * Return: 0 if !node, 1 if node is leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (!node->right && !node->left);
}
