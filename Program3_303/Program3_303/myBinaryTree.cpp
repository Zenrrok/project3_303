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

template<typename Item_Type>
const Item_Type* myBinaryTree<Item_Type>::find(const Item_Type& item) const 
{
	return find(this->root, item);
}

template<typename Item_Type>
const Item_Type* myBinaryTree<Item_Type>::find(myNode<Item_Type>* local_root, const Item_Type& target) const 
{
	if (local_root == NULL)
		return NULL;
	if (target < local_root->data)
		return find(local_root->left, target);
	else if (local_root->data < target)
		return find(local_root->right, target);
	else
		return &(local_root->data);
}
