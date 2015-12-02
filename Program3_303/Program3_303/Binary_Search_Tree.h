#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include "Binary_Tree.h"
#include <sstream>
#include <istream>
#include <string>
#include <iostream>
#include <iterator>

using namespace std;


std::string AddSpaceToString(std::string input)
{
	const int arrLength = 2;
	unsigned int lastFind = 0;
	std::string output;
	std::string dictionary[arrLength] = { "0", "1" };

	for (int j = 0; lastFind < input.size() && j < arrLength; ++j)
	{

		if (dictionary[j] == input.substr(lastFind, dictionary[j].size()))
		{
			lastFind += dictionary[j].size();
			output += dictionary[j] + " ";
			j = -1;
		}
	}

	return output;
}








template<typename Item_Type>
class Binary_Search_Tree : public Binary_Tree<Item_Type>
{
public:
	// Constructor
	Binary_Search_Tree() : Binary_Tree<Item_Type>() {}

	// Public Member Functions
	virtual bool insert(const Item_Type& item);

	virtual bool erase(const Item_Type& item);


	Item_Type find(Item_Type& target);
private:

	// Private Member Functions
	virtual bool insert(BTNode<Item_Type>*& local_root,
		const Item_Type& item);

	virtual bool erase(BTNode<Item_Type>*& local_root,
		const Item_Type& item);

	Item_Type find(BTNode<Item_Type>* local_root, Item_Type& target);

	virtual void replace_parent(
		BTNode<Item_Type>*& old_root,
		BTNode<Item_Type>*& local_root);

}; // End binary search tree




template<typename Item_Type>
Item_Type Binary_Search_Tree<Item_Type>::find(Item_Type& item)
{
	istringstream iss(item);
	string word;
	string letter = "cat";
	while (iss >> word)
	{
		string space = AddSpaceToString(word);
		
		istringstream ss(space);

		
		letter = find(this->root, ss);

		cout << letter;
	}

	return letter;
}

template<typename Item_Type>
Item_Type Binary_Search_Tree<Item_Type>::find(BTNode<Item_Type>* local_root, Item_Type& target)
{
	if (local_root == NULL)
	{
		return NULL;
	}

	string num;

	if (target >> num)
	{
		if (num == "0")
		{
			return find(local_root->left, target);
		}

		else if (num == "1")
		{
			return find(local_root->right, target);
		}
	}
}

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::insert(const Item_Type& item) {
		return insert(this->root, item);
}

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::insert(BTNode<Item_Type>*& local_root,const Item_Type& item) {
		if (local_root == NULL) {
			local_root = new BTNode<Item_Type>(item);
			return true;
		}
		else {
			if (item < local_root->data)
				return insert(local_root->left, item);
			else if (local_root->data < item)
				return insert(local_root->right, item);
			else
				return false;
		}
}


template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::erase(const Item_Type& item) {
		return erase(this->root, item);
}

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::erase(BTNode<Item_Type>*& local_root, const Item_Type& item) {
	if (local_root == NULL) {
		return false;
	}
	else {
		if (item < local_root->data)
			return erase(local_root->left, item);
		else if (local_root->data < item)
			return erase(local_root->right, item);
		else {
			BTNode<Item_Type>* old_root = local_root;
			if (local_root->left == NULL) {
				local_root = local_root->right;
			}
			else if (local_root->right == NULL) {
				local_root = local_root->left;
			}
			else {
				replace_parent(old_root, old_root->left);
			}
			delete old_root;
			return true;
		}
	}
}

template<typename Item_Type>
void Binary_Search_Tree<Item_Type>::replace_parent(BTNode<Item_Type>*& old_root, BTNode<Item_Type>*& local_root) {
		if (local_root->right != NULL) {
			replace_parent(old_root, local_root->right);
		}
		else {
			old_root->data = local_root->data;
			old_root = local_root;
			local_root = local_root->left;
		}
}



#endif
