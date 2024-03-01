#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the node
 *
 * Return: a pointer to uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 ** binary_tree_sibling - a function that finds the sibling of a node
 ** @node: a pointer to the node
 **
 ** Return: a pointer to the sibling
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		if (!node->parent->right)
			return (NULL);
		else
			return (node->parent->right);
	else
		if (!node->parent->left)
			return (NULL);
		else
			return (node->parent->left);
}
