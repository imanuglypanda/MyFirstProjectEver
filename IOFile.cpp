#include<iostream>
#include<fstream>
#include<string>
#include<time.h>

using namespace std;
int main() {
	srand(time(NULL));

	int value;

	string Filename = "sec_b.txt";
	string name;
	int score;

	ifstream InFile;
	ofstream OutFile;
	
	OutFile.open(Filename.c_str(), ios_base::out | ios_base::app);
	if (OutFile.is_open()) {
		cout << "File Opened." << endl;
		for (int i = 0; i < 2; i++) {
			cout << "Enter Name : ";
			cin >> name;
			cout << "ENter Score : ";
			cin >> score;
			OutFile << name << " " << score << endl;
		}
		OutFile.close();
	}
	else cout << "File could not open." << endl;

	InFile.open(Filename);

	if (InFile.is_open()) {
		cout << "Now File is Open." << endl;
		while (InFile >> name >> score) {
			cout << name << "\t" << score << endl;
		}
	}
	else cout << "Too bad, Can't Open File." << endl;

	InFile.close();

	return 0;
}