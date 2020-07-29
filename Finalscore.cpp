#include<iostream>
using namespace std;
int main()
{
	float q1, q2, q3, mid, final, total;
	cout << "==========QUIZZES===========" << endl;
	cout << "Enter First Quizz (10) : ";
	cin >> q1;
	cout << "Enter Second Quizz(10) : ";
	cin >> q2;
	cout << "Enter Third Quizz (10) : ";
	cin >> q3;
	cout << "==========MID-TERM==========" << endl;
	cout << "Enter mid-term (40) : ";
	cin >> mid;
	cout << "===========FINAL============" << endl;
	cout << "Enter Final (50) : ";
	cin >> final;
	total = (q1 + q2 + q3) / 3;
	cout << "Quizz Total : " << total << endl;
	cout << "Mid term : " << mid << endl;
	cout << "Final term : " << final << endl;
	total = total + mid + final;
	cout << "Total : " << total << endl;
	cout << "Your score is " <<((total >= 50) ? "PASS" : "FAILED") << endl;
	return 0;
}