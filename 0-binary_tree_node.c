#include "binary_trees.h"

/**
* binary_tree_node - a function that creates a binary tree
* node.
* @parent: a pointer to the root node
* @value: the data to be stored in the node
* Return: Null or the address to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = value;
newnode->parent = parent;
newnode->left = NULL;
newnode->right = NULL;
return (newnode);
}
