#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newleft_node = NULL;

	if (!parent)
		return (NULL);

	newleft_node = binary_tree_node(parent, value);
	if (!newleft_node)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = newleft_node;
		newleft_node->left = parent->left;
	}
	parent->left = newleft_node;

	return (newleft_node);
}
