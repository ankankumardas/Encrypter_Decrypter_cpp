#ifndef ENCRYPTER_H
#define ENCRYPTER_H

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <vector>
#include <map>

#include <Heap.h>
#include <Header_File_For_Utility_Functions.h>
using namespace std;

class Encrypter
{
	/// Parameters
	string input_file_name, output_file_name, password;
	map<char, string> m; // Mapped Value of each character
	ifstream fp1;
	ofstream fp2;

	/// Member Functions
	void open_input_file_function(string str = "");
	void count_character_occurances_function(vector< pair<char, int> > &);
	void scan_password_function();
	void open_output_file_function();
	void encrypt();
public:
	bool driver_function();
};

#endif // ENCRYPTER_H
