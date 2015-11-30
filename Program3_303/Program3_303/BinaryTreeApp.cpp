
#include "Binary_Search_Tree.h"
using namespace std;



int main() {
	vector<std::string> BinarySearchData{ " ", "e", "i", "s", "h", "NULL", "NULL", "v", "NULL", "NULL", "u", "f", "NULL", "NULL", "Null", "a","r","l","NULL","NULL","NULL","w","p","NULL","NULL","j","NULL","NULL","t","n","d","b","NULL","NULL","x","NULL","NULL","k", "c", "NULL","NULL","y","NULL","NULL","m","g","z","NULL","NULL","q","NULL","NULL","o","NULL","NULL" };
	

	Binary_Search_Tree<std::string> binary_tree;
	binary_tree.read_tree(BinarySearchData);
	std::string target = "kept";
	//std::string tobedeleted = "house";
	binary_tree.find(target);
	//binary_tree.erase(tobedeleted);
	const std::string* maxNode = binary_tree.max();
	const std::string* minNode = binary_tree.min();
	

/*
I think the tree should be created now. I used Lecture 11 slide 8 as a reference. I don't think tobedeleted or erase is needed. 
The find function is going to be edited so that it takes in a code like "1000" and decodes it.
Parses through the string using stringstream. Then traverses the tree by the code.
So right for a 1 and left for a 0. Until it finds the letter which is b in this example.

For encoding I think a map will be a lot easier because the letter can be the key and the code, the data.
*/
   

	
	

}
