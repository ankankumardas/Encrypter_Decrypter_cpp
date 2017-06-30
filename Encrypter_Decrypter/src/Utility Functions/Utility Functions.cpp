#include <Header_File_For_Utility_Functions.h>
/*
	Calculate checksum of 'str'
*/
int calculate_checksum(string str)
{
	int checksum = 0;
	for(unsigned i = 0; i < str.length(); i++)
	{
		checksum += str[i];
		if(str[i] < 0)
			checksum += 256;
	}
	while(checksum >= 256)
	{
		int quotient  = checksum / 256;
		checksum %= 256;
		checksum += quotient;
	}
	return ((1 << 8) - 1 - checksum);
}
/*
	Get Binary equivalent string of integer
*/
string get_binary(int n)
{
	return bitset<9>(n).to_string();
}
/*
	Get Decimal equivalent of Binary string
*/
int get_decimal(string str)
{
	bitset<9> binary;
	for(unsigned i = 0; i < 9; i++)
		binary[8 - i] = str[i] - '0';
	return binary.to_ulong();
}
