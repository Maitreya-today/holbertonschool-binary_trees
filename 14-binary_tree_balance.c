#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to root node to measure balance factor
 * Return: balance factor, if NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		l = 0;
	else
		l = 1 + (int) binary_tree_height(tree->left);

	if (tree->right == NULL)
		r = 0;
	else
		r = 1 + (int) binary_tree_height(tree->right);

	return (l - r);
}
