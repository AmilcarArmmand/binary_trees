#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance of tree, or O if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		printf("%d  %d", (int)binary_tree_height(tree->left),
		       (int)binary_tree_height(tree->right));
		return ((int)binary_tree_height(tree->left) -
			(int)binary_tree_height(tree->right));
	}

	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 * Return: height of binary tree, or 0 and if NULL 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	left = 0;
	right = 0;

	if (tree == NULL)
		return (0);

	left = ((tree->left) ? 1 + binary_tree_height(tree->left) : 1);

	right = ((tree->right) ? 1 + binary_tree_height(tree->right) : 1);

	return (left > right ? left : right);
}
