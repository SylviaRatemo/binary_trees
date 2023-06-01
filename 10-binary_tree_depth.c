#include "binary_trees.h"

/**
 * binary_tree_depth - function to measure BT depth
 * @tree: pointer to root node
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}

	return (count);
}
