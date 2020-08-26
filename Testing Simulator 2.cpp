#include<iostream>
using namespace std;

void input(int&, float&, float&, float&, float&, float, float, float);
void check_menu(int, float, float, float, float, float, float, float);
float cal_square(float&, float , float );
float cal_triangle(float&, float , float );
float cal_circle(float&, float );

int main()
{
	int menu;
	float weight, height, base, radius, square, tri, cir;
	cout << "1. Calculate Area of Square ----float square(w,h)" << endl;
	cout << "2. Calculate Area of Triangle ----float triangle(w,h)" << endl;
	cout << "3. Calculate Area of Circle ----float circle(r)" << endl;
	cout << "4. Exit the Program." << endl;

	input(menu, weight, height, base, radius, square, tri, cir);

	cout << "Good Bye." << endl;
	return 0;
}

void input(int &menu, float &weight, float &height, float &base, float &radius, float square, float tri, float cir){
	do{
		cout << "----------" << endl;
		cout << "Please Enter Menu : ";
		cin >> menu;
		check_menu(menu, weight, height, base, radius, square, tri, cir);

	}while(menu != 4);
}

void check_menu(int menu, float weight, float height, float base, float radius, float square, float tri, float cir){
	if(menu == 1){
			square = cal_square(square, weight, height);
			cout << "Square = " << square << endl;
		}
		else if(menu == 2){
			tri = cal_triangle(tri, height, base);
			cout << "Triangle = " << tri << endl;
		}
		else if(menu == 3){
			cir = cal_circle(cir, radius);
			cout << "Circle = " << cir << endl;
		}
		else cout << "Error, Try again." << endl;
}

float cal_square(float &square, float weight, float height){
	cout << "Enter Weight : ";
	cin >> weight;
	cout << "Enter Height : ";
	cin >> height;
	square = weight * height;
	return square;
}

float cal_triangle(float &tri, float height, float base){
	cout << "Enter Base : ";
	cin >> base;
	cout << "Enter Height : ";
	cin >> height;
	tri = 0.5 * base * height;
	return tri;
}

float cal_circle(float &cir, float radius){
	cout << "Enter Radius : ";
	cin >> radius;
	cir = 3.14 * radius * radius;
	return cir;
}