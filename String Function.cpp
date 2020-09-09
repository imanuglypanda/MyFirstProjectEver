#include<iostream>
using namespace std;
int main()
{
	char Str[20];
	cout << "Input String : ";
	cin >> Str;
	cout << "Reverse String : ";
	for (int i = strlen(Str); i >= 0; i--) {
		cout << char(toupper(Str[i]));
	}
	return 0;
}