#include <Decrypter.h>
/*
	Open the file to be decrypted in read mode
*/
void Decrypter::open_input_file_function()
{
	string input_file_name;
	while(!fp1.is_open())
	{
		cout << "Enter Input File Name: ";
		cin >> input_file_name;
		fp1.open(input_file_name.c_str());
	}
}
