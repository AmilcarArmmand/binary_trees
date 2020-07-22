#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: a pointer to the node to check
 *
 * Return: no return data type
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((node == NULL) || ((node->left != NULL) || (node->right != NULL)))
		return (0);

	return (1);
}
