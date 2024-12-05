#include "binary_trees.h"
/**
  * binary_tree_insert_right - insert node as the right child of another node
  * @parent: pointer to the node to insert the right child
  * @value: value to insert in the new node
  * Return: pointer to the created node
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->parent = parent;

	new_node->right = parent->right;
	if (parent->right)
		parent->right->parent = new_node;
	parent->right = new_node;
	return (new_node);
}
