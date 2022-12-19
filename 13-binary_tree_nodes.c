#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes of a bi-tree
 * @tree: pointer to root node to count the nodes
 * Return: nodes, if NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_leaf, r_leaf;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l_leaf = binary_tree_nodes(tree->left);
	r_leaf = binary_tree_nodes(tree->right);

	return (l_leaf + r_leaf + 1);
}
