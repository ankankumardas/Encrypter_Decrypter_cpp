#include <Node.h>
/*
	Node class constructors
*/
Node::Node()
{
	value = ch = 0;
	left_child = right_child = NULL;
}
Node::Node(char ch, int value)
{
	this->ch = ch, this->value = value;
	left_child = right_child = NULL;
}
Node::Node(int value, Node *left, Node *right)
{
	this->value = value;
	left_child = left, right_child = right;
}
