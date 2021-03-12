#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_levelorder - traverse a binary tree using level-order
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Description: If tree or func is Null, do nothing.
 * Return: No data type returned.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level;
	int height;

	if (tree && func)
	{
		height = binary_tree_height(tree);
		func(tree->n);
		for (level = height - 1; level > 0; level--)
		{
			/* func(tree->left->n); */
			/* func(tree->right->n); */
			binary_tree_levelorder(tree->left, func);
		}
	}
}

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
