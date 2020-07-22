#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the right-child
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to put int the new node
 *
 * Return: A pointer to the new node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!(parent))  /* check in parent is NULL  */
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!(new))    /* check if new node fails */
		return (NULL);

/* if parent has a right child, the new node must take its place and */
/* the old right-child  must be set as the rightr-child of the new node */
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
