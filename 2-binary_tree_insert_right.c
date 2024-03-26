#include "binary_trees.h"
/**
 * binary_tree_insert_right - a function that inserts a node as
 * the right-child of another node
 * @parent: the pointer to the parent node.
 * @value: the data stored by node
 * Return: the address of the inserted node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;

if (parent == NULL)
return (NULL);
newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
if (newnode == NULL)
return (NULL);
newnode->n = value;
newnode->parent = parent;
newnode->left = NULL;
newnode->right = NULL;
if (parent->right != NULL)
{
newnode->right = parent->right;
parent->right->parent = newnode;
}
parent->right = newnode;
return (newnode);
}
