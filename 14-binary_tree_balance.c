#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 *
 * Return: O if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	left = 0;
	right = 0;

	if (tree)
	{
		if (tree->left != NULL)
			left += 1;
		if (tree->right != NULL)
			right += 1;
		left += binary_tree_balance(tree->left);
		right += binary_tree_balance(tree->right);
	}

	return ((int)left - (int)right);
}
