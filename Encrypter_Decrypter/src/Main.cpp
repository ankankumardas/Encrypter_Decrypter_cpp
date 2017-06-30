#include <Encrypter.h>
#include <Decrypter.h>
int main()
{
	cout << "1: To Encrypt\n2: To Decrypt\n\nEnter Option: ";
	int choice;
	cin >> choice;
	cout << "\n";
	if(choice == 1)
		Encrypter().driver_function();
	else if(choice == 2)
		Decrypter().driver_function();
	return 0;
}
