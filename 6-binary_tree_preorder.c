#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that pre-order traverses a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node, value passed as param
 *
 * Return: No data type returned.  If tree or func is NULL do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		/* value in node passed as a parameter to function */
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
