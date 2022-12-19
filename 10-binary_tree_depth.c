#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a bi-tree
 * @tree: pointer to root node to measure the depth
 * Return: depth, if NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	for (depth = 0; tree->parent != NULL; depth++)
	{
		tree = tree->parent;
	}
	return (depth);
}
