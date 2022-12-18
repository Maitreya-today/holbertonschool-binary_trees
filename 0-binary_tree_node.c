#include "binary_trees.h"
/**
* binary_tree_node - Creates a binary tree node
* @parent: a pointer to parent node of node to create
* @value: value to put in new node
* Return: pointer to new node, NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
