#include "myBinaryTree.h"

template <typename Item_Type>
Item_Type* myBinaryTree::getNewNode(string data)
{
	Item_Type newNode = new Item_Type();
	(*newNode).data = data;
	(*newNode).left = left;
	(*newNode).right = right;
}
template <typename Item_Type>
Item_Type* myBinaryTree::Insert(Item_Type* rootPtr, string path, char data)
{
	ifstream turn;
	turn >> path;
	if (rootPtr == NULL)
	{
		rootPtr = getNewNode(data);
	}
	else if (turn == '.')
	{
		rootPtr->left = Insert(root->left, path, data);
	}
	else if (turn == '-')
	{
		rootPtr->right = Insert(root->right, path, data);
	}
	else
		cout << "Path is Empty" << endl;

	return rootPtr;
}