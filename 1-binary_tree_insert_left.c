#include "binary_trees.h"
/**
  * binary_tree_insert_left - inserts a node as the left chid of another node
  * @parent: pointer to the node to insert the left child in
  * @value: value to store in the new node
  * Return: A pointer to the created node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	parent->left = new_node;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
