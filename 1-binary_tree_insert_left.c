#include "binary_trees.h"
/**
* binary_tree_insert_left - Creates a binary tree node as left-child
* of other node
* @parent: a pointer to parent node to insert the left-child in
* @value: value to put in new node
* Return: pointer to new node, NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lnode;

	if (parent == NULL)
		return (NULL);

	lnode = binary_tree_node(parent, value);
	if (lnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		lnode->left = parent->left;
		parent->left->parent = lnode;
	}
	parent->left = lnode;

	return (lnode);
}
