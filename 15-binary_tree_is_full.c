#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree if full
 * @tree: pointer to root node of tree to check
 * Return: 1, if NULL return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lchild, rchild;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL && tree->left == NULL)
		return (0);
	if (tree->right == NULL && tree->left != NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	lchild = binary_tree_is_full(tree->left);
	rchild = binary_tree_is_full(tree->right);
	if (lchild == 0 || rchild == 0)
		return (0);
	else
		return (1);
}
