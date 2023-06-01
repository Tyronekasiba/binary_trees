#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_t - Entry point
 *
 * @parent: pointer to new-node
 * @value: new_node value
 * Return: new_node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (new_node !=  NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	new_node->right = parent;

	return (new_node);
}
