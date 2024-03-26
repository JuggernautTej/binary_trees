#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node as
 * the left-child of another node
 * @parent: the pointer to the parent node.
 * @value: the data stored by node
 * Return: the address of the inserted node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
if (parent->left != NULL)
{
newnode->left = parent->left;
parent->left->parent = newnode;
}
parent->left = newnode;
return (newnode);
}
