#include <Encrypter.h>
/*
	Function to open file in read mode
	This file will be encrypted
*/
void Encrypter::open_input_file_function(string str)
{
	fp1.open(str.c_str());
	while(!fp1.is_open())
	{
		cout << "Enter Input File Name: ";
		cin >> input_file_name;
		fp1.open(input_file_name.c_str());
	}
}
