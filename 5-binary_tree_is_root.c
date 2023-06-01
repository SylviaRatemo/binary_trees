#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a node is a root
 * @node: pointer to node to check
 * Return: 0 if !node, 1 if node is root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (!node->parent);
}
