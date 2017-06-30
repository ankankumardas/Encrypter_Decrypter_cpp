#include <Encrypter.h>
/*
	Driver function to invoke necessary functions
*/
bool Encrypter::driver_function()
{
	open_input_file_function(); // Open Input File
	vector< pair<char, int> > v;
	count_character_occurances_function(v); // Count character counts for each character
	fp1.close();
	scan_password_function(); // Input Password
	open_output_file_function(); // Open output file
	int checksum = calculate_checksum(password); // Calculate checksum of password
	fp2 << get_binary(checksum) << "\n"; // Store checksum in output file
	Heap h;
	// Insert all distinct characters and their counts into Min Heap
	for(unsigned int i = 0; i < v.size(); i++)
		h.insert_to_heap(v[i].first, v[i].second);
	v.clear();
	// Use Huffman coding technique to build binary tree
	while(h.get_size() > 1)
	{
		Node *left = h.delete_from_heap(), *right = h.delete_from_heap();
		int value = left->get_value() + right->get_value();
		h.insert_to_heap(value, left, right);
	}
	Node *n = h.get_front();
	n->traverse(m, ""); // Traverse nodes to get string equivalent of each distinct character
	int i = 0;
	n->traverse(fp2, password, i); // Traverse nodes and store it in output file to build the tree during decryption
	encrypt(); // Now Encrypt the file to 0's and 1's
	fp2.close();
	cout << "\nSuccessfully Encrypted\n";
	return true;
}
