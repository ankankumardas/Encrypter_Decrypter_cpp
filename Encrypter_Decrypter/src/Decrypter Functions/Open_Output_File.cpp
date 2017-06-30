#include <Decrypter.h>
/*
	Function to open file in write mode
	This file will be result of decryption
*/
void Decrypter::open_output_file_function()
{
	string output_file_name;
	while(!fp2.is_open())
	{
		cout << "Enter Output File Name: ";
		cin >> output_file_name;
		fp2.open(output_file_name.c_str());
	}
}
