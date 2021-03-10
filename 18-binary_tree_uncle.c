#include "binary_trees.h"

/**
 * binary_tree_uncle -  a function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: pointer to parent's sibling node, or NULL if node has parent sibling
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!(node) || !(node->parent) || !(node->parent->parent))
		return (NULL);

	return ((node->parent->parent->left == node->parent ?
		 node->parent->parent->right : node->parent->parent->left));
}
