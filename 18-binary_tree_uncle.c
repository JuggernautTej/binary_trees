#include "binary_trees.h"
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/**
 * *binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: Pointer to uncle or NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: Pointer to sibling or NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left != node)
		return (node->parent->left);
	if (node->parent->right != node)
		return (node->parent->right);
	return (NULL);
}
