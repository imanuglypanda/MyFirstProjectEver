#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void DisplayMenu();
float Area(float Radius);
float Area(float width, float height);
float Area(double base, double height);

int main()
{
	char Choice;
	bool Flag = true;
	do{
		DisplayMenu();
		cin >> Choice;
		if(Choice == '1'){
			float Radius;
			cout << "\nEnter radius : ";
			cin >> Radius;
			cout << "Area of Circle = " << fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		}
		else if (Choice == '2'){
			float width, height;
			cout << "Enter Width and Height : ";
			cin >> width >> height;
			cout << "Area of Rectancle = " << fixed;
			cout << setprecision(2) << Area(width, height);
		}
		else if (Choice == '3'){
			double base, height;
			cout << "Enter Base and Height : ";
			cin >> base >> height;
			cout << "Area of Triangle = " << fixed;
			cout << setprecision(2) << Area(base, height);
		}
		else if (Choice == '4') Flag = false;
		else{
			cout << "\nYou choose out of range is ";
			cout << "not process." << endl;
		}
	}while(Flag);

	cout << "\n. . . Exit Program . . .\n";
	return 0;
}

void DisplayMenu(){
	cout << "\nProgram Calculate Area" << endl;
	cout << "1. Circle" << endl;
	cout << "2. Rectancle" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Exit" << endl;
	cout << "Enter Your choose number : ";
}

float Area(float Radius){
	return (3.14159F * Radius * Radius);
}

float Area(float width, float height){
	return width * height;
}

float Area(double base, double height){
	return 0.5 * base * height;
}