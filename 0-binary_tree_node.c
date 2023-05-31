#include "binary_trees.h"

/**
 * binary_tree_node - function to create a BT node
 * @parent: pointer to parent node
 * @value: value in the node
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return NULL;

	node->parent = parent;
	node->n = value;
	
	return (node);
}
