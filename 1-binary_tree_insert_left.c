#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts node as left-child
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put int the new node
 *
 * Return: A pointer to the new node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!(parent))  /* check in parent is NULL  */
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!(new))    /* check if new node fails */
		return (NULL);

/* if parent has a left child, the new node must take its place and */
/* the old left-child  must be set as the left-child of the new node */
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
