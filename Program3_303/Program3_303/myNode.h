#ifndef myNode
#define myNode
#include <sstream>

using namespace std;

/*Node for a binary tree*/
template <typename Item_Type>
struct myNode
{
	Item_Type data;
	Item_Type path;
	myNode<Item_Type>* left;
	myNode<Item_Type>* right;

	myNode(const Item_Type& theData, myNode<Item_Type>* leftVal = NULL,
		myNode<Item_Type>* rightVal = NULL: data(theData), left(leftVal), right(rightVal){}

	virtual ~myNode(){}

	virtual string to_string() const
	{
		ostringstream output;
		output << data;
		return output.str();
	}
};

template <typename Item_Type>
ostream& operator<<(ostream& out, const myNode<Item_Type>& node)
{
	return out << node.to_string();
}

#endif