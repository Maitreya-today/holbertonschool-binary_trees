#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a bi-tree
 * @tree: pointer to root node of tree to measure the height
 * Return: 1, if NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
