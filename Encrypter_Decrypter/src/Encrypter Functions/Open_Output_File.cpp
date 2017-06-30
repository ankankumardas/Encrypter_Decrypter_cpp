#include <Encrypter.h>
/*
	Function to open file in write mode
	This file will be result of encryption
*/
void Encrypter::open_output_file_function()
{
	while(!fp2.is_open())
	{
		cout << "Enter Output File Name: ";
		cin >> output_file_name;
		fp2.open(output_file_name.c_str());
	}
}
