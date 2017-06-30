#include <Node.h>
/*
	Helper function to be used by decrypt() function
*/
char Node::decrypt_helper(ifstream &fp1, ofstream &fp2, char ch)
{
	if(this == NULL)
		return 0;
	else if(this->left_child == NULL || this->right_child == NULL)
	{
		fp2 << this->ch;
		return ch;
	}
	else if(fp1.eof())
		return 0;

	char ch2;
	fp1.get(ch2);
	if(ch == '0')
		return this->left_child->decrypt_helper(fp1, fp2, ch2);
	else if(ch == '1')
		return this->right_child->decrypt_helper(fp1, fp2, ch2);
	else
		return this->decrypt_helper(fp1, fp2, ch2);
}
