//code for week2
#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*
	cout << "\"I will get \\\'A\'\\ in\"" << endl;
	cout << "\t\"\'Computer Programming\'\"" << endl;
	cout << "\t\tAre you Sure?" << endl;
	*/
	
	/*
	cout << "\101 \x41" << endl;
	cout << "Name : \x54\x61\x6e\x61\x70\x61\x74 \x20\x4a\x65\x65\x6e\x73\x61\x6d\x72\x61\x6e" << endl;
	cout << "Nickname : \x47\x61\x6f" << endl;
	*/

	/*
	string	firstname = "Tanapat", 
			lastname = "Jeensamran", 
			sex = "male";
	
	unsigned short age = 19;
	
	float	weight = 68, 
			height = 167,
			BMI;

	cout << "Enter Firstname : ";
	cin >> firstname;
	cout << "Enter Lastname : ";
	cin >> lastname;
	cout << "Enter Age : ";
	cin >> age;
	cout << "Enter Sex : ";
	cin >> sex;
	cout << "Enter Weight : ";
	cin >> weight;
	cout << "Enter Hight : ";
	cin >> height;

	BMI = weight/((height/100)*(height/100));

	cout << endl;

	cout << "Firstname	: " << firstname << endl;
	cout << "Lastname	: " << lastname << endl;
	cout << "Age		: " << age << endl;
	cout << "Weight		: " << weight << endl;
	cout << "Hight		: " << height << endl;
	cout << "BMI		: " << BMI << endl;
	cout << endl;
	*/

	string name;
	short year_of_birth, age;

	cout << "Enter name : ";
	getline(cin, name);
	cout << "Enter Your Year of Birth(buddhist year) : ";
	cin >> year_of_birth;
	
	age = 2563 - year_of_birth;
	
	cout << name << " is " << age << " years old" << endl;

	system("pause");
	return 0;


}