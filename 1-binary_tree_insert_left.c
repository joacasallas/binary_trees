#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newleft_node = binary_tree_node(parent, value);

	if (parent == NULL || newleft_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		parent->left->left = parent->left;
	}
	parent->left = newleft_node;
	newleft_node->n = value;
	return (parent->left);
}
