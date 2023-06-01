#include "binary_trees.h"

/**
 * binary_tree_balance - function to measure balance factor
 * @tree: pointer to root node
 * Return: balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree)
	{
		return (height(tree->left) - height(tree->right));
	}

	return (0);
}

/**
 * height - calculate height of BT
 * @tree: pointer to root node
 * return: 0 if NULL, height
 */

int height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;
		left = tree->left ? 1 + height(tree->left) : 1;
                right = tree->right ? 1 + height(tree->right) : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}
