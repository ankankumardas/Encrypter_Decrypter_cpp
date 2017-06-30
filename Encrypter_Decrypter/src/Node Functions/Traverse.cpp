#include <Node.h>
/*
	Traverse all nodes and find string equivalent of each character
*/
void Node::traverse(map<char, string> &m, string str)
{
	if(this == NULL)
		return;
	this->left_child->traverse(m, str + "0");
	this->right_child->traverse(m, str + "1");
	if(this->left_child == NULL)
		m[this->ch] = str;
}
/*
	Traverse all nodes and store them in output file
*/
void Node::traverse(ofstream &fp, string &password, int &i)
{
	if(this == NULL)
	{
		fp << "111111111 ";
		return;
	}
	if(this->left_child == NULL)
	{
		int n = this->ch ^ password[i];
		fp << get_binary(n) << " ";
	}
	else
	{
		int n = (this->value % 256) ^ password[i];
		fp << get_binary(n) << " ";
	}
	i = (i + 1) % password.length();
	this->left_child->traverse(fp, password, i);
	i = (i + 1) % password.length();
	this->right_child->traverse(fp, password, i);
}
