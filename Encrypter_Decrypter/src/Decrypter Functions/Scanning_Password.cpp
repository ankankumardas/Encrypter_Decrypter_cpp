#include <Decrypter.h>
/*
	Verify the password before decrypting the file.
	NOTE: Even if this function determines that password is correct
		it is not guaranteed that password is actually correct.
		In that case the file will be decrypted incorrectly
*/
void Decrypter::verify_password_function()
{
	 string str;
	 fp1 >> str;
	 int checksum = get_decimal(str), checker = -1;
	 while(checker != 0)
	 {
	 	cout << "\nEnter Password To Decrypt The File: ";
	 	cin >> str;
	 	checker = calculate_checksum(str + (char) checksum);
	 	if(checker != 0)
			cout << "\nIncorrect Password. Please Try Again\n";
	 }
	 password = str;
	 cout << "\n";
}
