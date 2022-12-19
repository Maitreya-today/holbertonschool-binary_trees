#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves of a bi-tree
 * @tree: pointer to root node to count the leaves
 * Return: leaves, if NULL return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaf, r_leaf;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	l_leaf = binary_tree_leaves(tree->left);
	r_leaf = binary_tree_leaves(tree->right);

	return (l_leaf + r_leaf);
}
