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
	Item_Type* getNewNode(string data);
	Item_Type* Insert(Item_Type* rootPtr, string path, string data);

private:
	list<Item_Type> myTree;
};



#endif