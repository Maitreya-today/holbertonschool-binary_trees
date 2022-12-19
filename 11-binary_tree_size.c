#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a bi-tree
 * @tree: pointer to root node to measure the size
 * Return: size, if NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
