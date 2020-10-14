#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void func_input(string name[5], float product[5][3], float);
void func_output(string name[5], float product[5][3]);

int main() {
	string name[5];
	float product[5][3], rate = 0.07f;

	func_input(name, product, rate);
	func_output(name, product);

	
	return 0;
}

void func_input(string name[5], float product[5][3], float rate) {
	for (int i = 0; i < 5; i++) {
		cout << "Enter Product Name : ";
		cin >> name[i];
		cout << "	price : ";
		cin >> product[i][0];
		product[i][1] = product[i][0] * rate;
		product[i][2] = product[i][0] + product[i][1];
	}
}

void func_output(string name[5], float product[5][3]) {
	cout << left << setw(5) << "No." << setw(15) << "Product" << setw(15) << "price" << setw(15) << "Vat 7%" << "Net" << endl;
	for (int i = 0; i < 5; i++) {
		cout << fixed << setprecision(2) << left << setw(5) << i + 1 << setw(15) << name[i] << setw(15) << product[i][0] << setw(15) << product[i][1] << product[i][2] << endl;
	}
}