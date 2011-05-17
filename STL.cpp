#include "STL.h"


int main(int argc, char* argv[])
{
	map<string, string> PhoneBook;
	int i = 0, n = 0;
	string name, number;
	cout << "\n\nNumber of contacts:"; cin>>n;
	cin.ignore();
	for(i = 0; i < n; i++)
	{
		cout << "\nPerson " << i + 1 << " name:"; getline(cin, name);
		cout << "\nPerson " << i + 1 << " phone number:"; getline(cin, number);
		PhoneBook[name] = number;
	}
	map<string, string>::iterator it = PhoneBook.begin();
	for(it = PhoneBook.begin(), i = 0; it != PhoneBook.end(); it++, i++)
	{
		cout << "\nPerson " << i + 1 <<
			" name: " << it->first;
		cout << "\nPerson " << i + 1 << " phone number: " << it->second<<endl;
	}

	return 0;
}