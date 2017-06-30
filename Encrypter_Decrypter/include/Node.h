#ifndef NODE_H
#define NODE_H

#include <string>
#include <fstream>
#include <map>

#include <Header_File_For_Utility_Functions.h>
using namespace std;

class Node
{
	int value;
	char ch;
	Node *left_child, *right_child;
public:
	Node();
	Node(char , int);
	Node(int, Node *, Node *);
	void traverse(map<char, string> &, string); // Traverse and find equivalence string of each character
	void traverse(ofstream &, string &, int &); // Traverse and store binary tree in output file
	char decrypt_helper(ifstream &, ofstream &, char ch); // Helper function to be used by decrypt() function
	friend Node *build_tree(ifstream &, string &, int &); // Build the binary tree during Decryption
	inline int get_value()
	{
		return this->value;
	}
};

#endif // NODE_H
