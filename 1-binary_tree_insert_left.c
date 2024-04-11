#include "binary_tree.h"
/**
 * binary_tree_insert_left -inserts a node as a left-child of 
 *                    another ina binary tree
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: if parent is NULL or an error occurs - NULL
 *        otherwise - a pointer to the new node
 *
 * Description: if parent already has a left-child, the new node
 *            takes its place and the old lef-child is set as
 *            the left-cild of the new node.
 */
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}

