#include <Node.h>
/*
	This is friend function. Whenever use it you should declare the prototype there
	Build tree during Decryption
*/
Node *build_tree(ifstream &fp, string &password, int &i)
{
	string str;
	fp >> str;
	int n = get_decimal(str);
	if(n == 511)
	{
		i = (i + 1) % password.length();
		return NULL;
	}
	Node *no = new Node();
	no->ch = n ^ password[i];
	i = (i + 1) % password.length();
	no->left_child = build_tree(fp, password, i);
	no->right_child = build_tree(fp, password, i);
	return no;
}
