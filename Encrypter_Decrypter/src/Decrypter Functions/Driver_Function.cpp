#include <Decrypter.h>
/*
	Driver function to call other necessary functions
*/
bool Decrypter::driver_function()
{
	open_input_file_function(); // Open Input File
	verify_password_function(); // Verify Password
	open_output_file_function(); // Open Output File
	int i = 0;
	Node *no = build_tree(fp1, password, i); // Build the binary tree of characters
	decrypt(no); // Finally decrypt file
	cout << "\nSuccessfully Decrypted\n"; // If password is incorrect or file is damaged then will not decrypt proper message
	return true;
}
