#include <Encrypter.h>
/*
	Computes all characters and their counts in the file 'fp1'
	Store the result in the map reference 'char_count'
	Finally Store the result in a vector
*/
void Encrypter::count_character_occurances_function(vector< pair<char, int> > &v)
{
	map<char, int> char_count;
	char ch;
	while(!fp1.eof())
	{
		fp1.get(ch);
		if(char_count.find(ch) == char_count.end())
			char_count[ch] = 1;
		else
			char_count[ch]++;
	}
	char_count[ch]--; // This character has been counted extra
	for(map<char, int>::iterator it = char_count.begin(); it != char_count.end(); it++)
		if(it->second > 0)
			v.push_back(make_pair(it->first, it->second));
	char_count.clear();
}
