#ifndef DECRYPTER_H
#define DECRYPTER_H

#include <iostream>
#include <fstream>
#include <string>

#include <Node.h>
#include <Header_File_For_Utility_Functions.h>
using namespace std;

Node *build_tree(ifstream &, string &, int &);

class Decrypter
{
	/// Parameters
	string password;
	ifstream fp1;
	ofstream fp2;

	/// Member Functions
	void open_input_file_function();
	void verify_password_function();
	void open_output_file_function();
	void decrypt(Node *);
public:
	bool driver_function();
};

#endif // DECRYPTER_H
