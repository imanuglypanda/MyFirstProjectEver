#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long base2, base8;
	int num, total;
	string sbase2, sbase8;

	cout << "num : ";
	cin >> num;
	total = num;

	while(num > 0){
		base2 = num % 2;
		num = num / 2;

		sbase2 = to_string(base2) + sbase2; // to_string(long long(Variable)) OR to_string(static_cast<long long>(Variable)
	}
	while(total > 0){
		base8 = total % 8;
		total = total / 8;

		sbase8 = to_string(base8) + sbase8; 
	}
	cout << "Binary : " << sbase2 << endl;
	cout << "Octal : " << sbase8 << endl;
	return 0;
}