/*Jose Manuel Silve- Rodrgiguez, INSERT NAME, INSERT NAME
CS Project 3 303*/
#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <sstream>
#include <map>
#include <ostream>
#include <iterator>
#include "myBinaryTree.h"


using namespace std;


int main()
{
	ifstream fin;
	ifstream mapin;

	fin.open("morse.txt");
	mapin.open("treeDiagram.txt");
	char theLetter;
	string route;
	


	while (mapin >> theLetter >> route)
	{

	}

	char letter;
	string morse;

	string encode = "ac";
	istringstream is(encode);
	char en;


	map<char, string> morseCode;

	while (fin >> letter >> morse)
	{
		morseCode[letter] = morse;
	}

	while (is >> en)
	{
		for (map<char, string>::iterator iter = morseCode.begin(); iter != morseCode.end(); iter++)
		{

			if (en == iter->first)
			{
				cout << iter->second << " ";
			}
		}
	}

	fin.close();
	mapin.close();

	system("PAUSE");

	return 0;
}