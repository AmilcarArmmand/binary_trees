#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that traverses a binary tree in-order
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: No data type returned.  If tree or func is NULL do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		/* value in node passed as a parameter to function */
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
