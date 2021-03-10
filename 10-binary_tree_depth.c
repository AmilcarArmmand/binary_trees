#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in binary tree
 * @tree: a pointer to the node from which to measure the depth
 *
 * Return: depth of the node, or O if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (depth);

	depth = (1 + binary_tree_depth(tree->parent));

	return (depth);
}
