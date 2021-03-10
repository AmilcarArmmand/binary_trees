#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: HEIGHT of tree, or 0 and if NULL 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	left = 0;
	right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	else
		left = 0;
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	else
		right = 0;

	return (left > right ? left : right);
}
