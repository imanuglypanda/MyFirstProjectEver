#include<iostream>
using namespace std;

int main()
{
	int menu, num_stu;
	int *quiz = NULL, *mid = NULL, *fin = NULL;
	do{
		cout << "==================================" << endl;
		cout << "\t\tMENU" << endl;
		cout << "==================================" << endl;
		cout << "\t1. input Student records" << " " << endl;
		cout << "\t2. View all student records" << " " << endl;
		cout << "\t3. Exit" << endl;

		cout << "Select menu : ";
		cin >> menu;

		if (menu == 1){
			cout << "Input Number of Student : ";
			cin >> num_stu;
			quiz = new int[num_stu];
			mid = new int[num_stu];
			fin = new int[num_stu];

			for (int i = 0; i < num_stu; i++){
				cout <<" Number " << i + 1 << endl;
					cout << "Input Quiz : ";
					cin >> quiz[i];
					cout << "input Midterm : ";
					cin >> mid[i];
					cout << "input Final : ";
					cin >> fin[i];
					cout << endl;
			}
		}


		else if (menu == 2){
			cout << "---------------------------------" << endl;
			cout << "StdID" << "\tQuiz" << "\tMidterm" << "\tFinal" << endl;
			cout << "---------------------------------" << endl;
			for (int i = 0; i < num_stu; i++){
				cout << i + 1 << "\t" << quiz[i] << "\t" << mid[i] << "\t" << fin[i] << endl;
			}
			cout << "---------------------------------" << endl;
		}

		else if (menu == 3) cout << "Exit program." << endl;

	}while(menu != 3);

	delete[] quiz, mid, fin;

	return 0;
}