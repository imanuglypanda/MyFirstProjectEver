#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	int salary, sale, commission, percent, total_revenue;
	
	cout << "Enter Name : ";
	getline(cin, name);
	cout << "Enter Salary : ";
	
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission Percent : ";
	cin >> percent;
	
	commission = sale * percent / 100;
	total_revenue = salary + commission;
	
	cout << "Your name = " << name << endl;
	cout << "Total Revenue " << total_revenue << " Bath" << endl;
	return 0;
}