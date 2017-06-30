#include <Encrypter.h>
/*
	Finally encrypt the input file to 0's and 1's
*/
void Encrypter::encrypt()
{
	open_input_file_function(input_file_name);
	fp2 << "\n";
	char ch1, ch2;
	fp1.get(ch2);
	while(!fp1.eof())
	{
		ch1 = ch2;
		fp2 << m[ch1];
		fp1.get(ch2);
	}
	fp1.close();
}
