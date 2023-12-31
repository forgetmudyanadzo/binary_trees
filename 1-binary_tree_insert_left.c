#include "binary_trees.h"

/**
  * binary_tree_insert_left - inserts node as left child of another node
  * @parent: pointer to parent node
  * @value: input value to node
  * Return: pointer to new node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = NULL;

	if (!parent)
		return (NULL);
	bt = calloc(1, sizeof(binary_tree_t));
	if (!bt)
		return (NULL);
	bt->n = value;
	bt->parent = parent;
	if (parent->left)
	{
		bt->left = parent->left;
		bt->left->parent = bt;
	}
	parent->left = bt;
	return (bt);
}
