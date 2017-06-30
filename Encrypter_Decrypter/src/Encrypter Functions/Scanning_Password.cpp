#include <Encrypter.h>
/*
	Password To Encrypt File
*/
void Encrypter::scan_password_function()
{
	string pass1, pass2;
	while(true)
	{
		char ch;
		pass1 = pass2 = "";
		cout << "\nEnter Password(8-20 characters): ";
		while((ch = getch()) != 13)
			pass1 += ch, printf("*");
		if(pass1.length() < 8 || pass1.length() > 20)
		{
			cout << "\nIncorrect Length. Please Try Again\n";
			continue;
		}
		cout << "\nConfirm Password: ";
		while((ch = getch()) != 13)
			pass2 += ch, printf("*");
		if(pass1 == pass2)
		{
			password = pass1;
			cout << "\n";
			break;
		}
		else
			cout << "\nPassword Mismatch. Please Try Again\n";
	}
	cout << "\n";
}
