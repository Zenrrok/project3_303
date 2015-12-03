#pragma once
#include "Binary_Search_Tree.h"
#include <string>
#include <vector>
using namespace std;



int main() {
	vector<string> BinarySearchData
	{ " ", "e", "i", "s", "h", "NULL", "NULL", "v", "NULL", "NULL", "u", "f", "NULL", "NULL", "Null",
	"a", "r", "l", "NULL", "NULL", "NULL", "w", "p", "NULL", "NULL", "j", "NULL", "NULL", "t", "n", "d",
	"b", "NULL", "NULL", "x", "NULL", "NULL", "k", "c", "NULL", "NULL", "y", "NULL", "NULL", "m", "g", "z",
	"NULL", "NULL", "q", "NULL", "NULL", "o", "NULL", "NULL" };


	Binary_Search_Tree<string> binary_tree;
	binary_tree.read_tree(BinarySearchData);
	string target = "01 11";

	// "a" should be the output
	binary_tree.find(target);

	system("PAUSE");

	return 0;
}
