#include<iostream>
#include<time.h>
using namespace std;

int Guess(int&);

int main()
{
	srand(time(NULL));
	int Round, num = rand() % 10 + 1;

	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;
	Round = Guess(num);

	cout << "Congratulations!" << endl;
	cout << "The secret number is " << Round << endl;
	cout << "You made " << num << " guesses" << endl;
	return 0;
}

int Guess(int &num) {
	int round = num, count = 1;

	do {
		cout << "Guess the number (1 to 10) : ";
		cin >> num;
		if (num > round) {
			cout << "The secret number is lower" << endl;
			count++;
		}
		else if (num < round) {
			cout << "The secret number is higher" << endl;
			count++;
		}
	} while (num != round);
	num = count;
	return round;
}