#include "binary_trees.h"

/**
 ** binary_tree_insert_left - a function that inserts a node as the left-child
 ** @parent: the parent node
 ** @value: the value of the new node
 **
 ** Return: a pointer to the new node or NULL on faillure
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child, *previous = NULL; 

	child = malloc(sizeof(binary_tree_t));
	if (child == NULL || parent == NULL)
		return (NULL);
	child->n = value;
	child->parent = parent;
	child->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = child;
		child->left = NULL;
		free(previous);
	}
	else
	{
		previous = parent->left;
		parent->left = child;
		child->left = previous;
		previous->parent = child;
	}
	return (child);
}

