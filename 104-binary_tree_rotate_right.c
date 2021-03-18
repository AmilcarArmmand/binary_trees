#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 *
 * Description: If tree or func is Null, do nothing.
 * Return: No data type returned.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *x, *t2;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	x = tree->left;
	t2 = tree->left->right;

	/* rotate right */
	if (tree->left->right)
	{
		tree->parent = x;
		tree->left = t2;
		x->parent = NULL;
		x->right = tree;
		t2->parent = tree;
	}
	else
	{
		tree->left = NULL;
		x->parent = NULL;
		x->right = tree;
		tree->parent = x;
	}

	return (x);
}
