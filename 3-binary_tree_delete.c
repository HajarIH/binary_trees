#include "binary_trees.h"

/**
 *** binary_tree_delete - a function that deletes an entire binary tree
 *** @tree: the root node
 ***
 *** Return: void
 ***/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
