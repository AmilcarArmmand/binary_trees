#include "binary_trees.h"

/**
 * binary_tree_rotate_left - traverse a binary tree using level-order
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Description: If tree or func is Null, do nothing.
 * Return: No data type returned.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *y, *t2;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	y = NULL;
	t2 = NULL;

	y = tree->right;
	t2 = tree->right->left;

	/* rotate left */
	tree->parent = y;
	y->left = tree;
	tree->right = t2;

	return (y);
}
