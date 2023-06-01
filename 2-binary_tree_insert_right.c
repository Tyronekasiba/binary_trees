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

	binary_tree_t *node;


	if (parent != NULL)
	{

		node = malloc(sizeof(binary_tree_t));

		if (node == NULL)
		{
			return (NULL);
		}

		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;

		if (parent->right != NULL)
		{

		parent->right->parent = node;
		node->right = parent->right;
		}
		parent->right = node;
		return (node);
	}
	return (0);
}
