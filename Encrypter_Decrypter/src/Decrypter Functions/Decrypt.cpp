#include <Decrypter.h>
/*
	Function to finally decrypt the 0's and 1's.
	Note: If password is incorrect then this function
		will not inform about that. But it will not
		decrypt message properly
*/
void Decrypter::decrypt(Node *root)
{
	char ch = 10; // Any number which is not 0 or '0' or '1' will work
	while(ch != 0)
		ch = root->decrypt_helper(fp1, fp2, ch);
	fp1.close();
	fp2.close();
}
