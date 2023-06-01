#include "binary_trees.h"

/**
 * binary_tree_nodes - function to measure leaves
 * @tree: pointer to root node
 * Return: nodes of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
