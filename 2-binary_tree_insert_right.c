#include "binary_trees.h"
/**
* binary_tree_insert_right - Creates a binary tree node as right-child
* of other node
* @parent: a pointer to parent node to insert the right-child in
* @value: value to put in new node
* Return: pointer to new node, NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rnode;

	if (parent == NULL)
		return (NULL);

	rnode = binary_tree_node(parent, value);
	if (rnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		rnode->right = parent->right;
		parent->right->parent = rnode;
	}
	parent->right = rnode;

	return (rnode);
}
