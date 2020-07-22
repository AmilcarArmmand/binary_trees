#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 *
 * Return: O if tree is NULL or the height of the tree
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
