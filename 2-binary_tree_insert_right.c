#include "binary_trees.h"

/**
 * binary_tree_insert_right - create node as the right-child
 *                            of a new binary tree.
 * @parent: A pointer to the node to put the right-child in.
 * @value: The files to save in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent has a right-child, the new node
 *              takes its position and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
