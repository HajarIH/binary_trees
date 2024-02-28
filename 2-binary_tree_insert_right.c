#include "binary_trees.h"

/**
 *** binary_tree_insert_left- a function that inserts a node as the right-child
 *** @parent: the parent node
 *** @value: the value of the new node
 ***
 *** Return: a pointer to the new node or NULL on faillure
 ***/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child, *previous;
	
	child = malloc(sizeof(binary_tree_t));
	if (child == NULL || parent == NULL)
		return (NULL);
	child->n = value;
	child->parent = parent;
	child->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = child;
		child->right = NULL;
	}
	else
	{
		previous = parent->right;
		parent->right = child;
		child->right = previous;
		previous->parent = child;
	}
	return (child);
}
