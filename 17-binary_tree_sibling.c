#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the root node of the tree to check
 *
 * Return: pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return ((node->parent->left == node) ? node->parent->right :
		node->parent->left);
}
