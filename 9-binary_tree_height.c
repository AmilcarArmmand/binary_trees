#include "binary_trees.h"

/**
 * binary_tree_height - a function deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: no return data type
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	left = 0;
	right = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);
		left = 1 + binary_tree_height(tree->left);
		right = 1 + binary_tree_height(tree->right);
		return (left < right ? left : right);
	}
	return (0);
}
