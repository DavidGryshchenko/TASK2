#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};
int height_of_binary_tree(struct node* node)
{
	if (node == NULL)
		return 0;
	else
	{
		int left_side;
		int right_side;
		left_side = height_of_binary_tree(node->left);
		right_side = height_of_binary_tree(node->right);
		if (left_side > right_side)
		{
			return left_side + 1;

		}
		else
			return right_side + 1;
	}
}
