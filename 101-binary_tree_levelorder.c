#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
void level_print(const binary_tree_t *tree, void (*func)(int), size_t level);
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
	size_t level;
	size_t height;

	if (tree && func)
	{
		height = binary_tree_height(tree);
		for (level = 1; level <= height; level++)
		{
			/* iterate the recursive printing of each level */
			level_print(tree, func, level);
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

/**
 * level_print - prints the value at each level of tree
 * @tree: pointer the the binary tree
 * @func: pointer to function
 * @level: level of binary tree
 *
 * Return: No value type returned.
 */
void level_print(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL || func == NULL)
		return;

	if (level == 1)
		func(tree->n);

	else if (level > 1)
	{
		level_print(tree->left, func, level - 1);
		level_print(tree->right, func, level - 1);
	}
}
