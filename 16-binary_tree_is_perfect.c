#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that
 * checks if a binary tree is perfect
 * @tree: a pointer to the root
 *
 * Return: 1 if perfect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) &&
			binary_tree_height(tree->left) ==
			binary_tree_height(tree->right))
		return (1);
	else
		return (0);
}

/**
 ** binary_tree_is_full - a function that
 ** checks if a binary tree is full
 ** @tree: a pointer to the root
 **
 ** Return: 1 if full 0 otherwise
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if ((!tree->left && tree->right) ||
			(tree->left && !tree->right))
		return (0);
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}

/**
 ** binary_tree_balance - a function that measures
 ** the balance factor of a binary tree
 ** @tree: a pointer to the root
 **
 ** Return: the balance Factor
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));
	return (0);
}

/**
 *** binary_tree_height - a function that
 *** measures the height of a binary tree
 *** @tree: the root node
 ***
 *** Return: the height
 ***/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	l = 0;
	r = 0;
	if (tree)
	{
		l =  binary_tree_height(tree->left);
		r =  binary_tree_height(tree->right);
		if (l > r)
			return (l + 1);
		else
			return (r + 1);
	}
	return (0);
}
