/*I presonally do not like to use the teachers code because I figure I have a better grasp on my own code*/
#pragma once
#ifndef myBinaryTree
#define myBinaryTree

#include <list>
#include <iostream>
#include <fstream>
#include "myNode.h"

using namespace std;

template <typename Item_Type>
class myBinaryTree
{
public:
	void setRoot(myNode<Item_Type>* newRoot);
	<Item_Type>* getRoot();
	Item_Type* getNewNode(string data);
	Item_Type* Insert(Item_Type* rootPtr, string path, string data);
	const Item_Type* find(const Item_Type& target) const;
	const Item_Type* find(myNode<Item_Type>* local_root, const Item_Type& target) const
protected:

	// Protected constructor
	/** Construct a Binary_Tree with a given node as the root */
	myBinaryTree(myNode<Item_Type>* new_root) : root(new_root) {}

	// Data Field
	myNode<Item_Type>* root;

private:
	list<Item_Type> myTree;
};



#endif