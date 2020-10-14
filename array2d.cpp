#include<iostream>
#include<vector>

using namespace std;

int main() {
	int num, row, col, max = 0;
	
	cout << "Enter Row : ";
	cin >> row;
	cout << "Enter Column : ";
	cin >> col;

	if (row > col) max = row;
	else if (col > row) max = col;
	else max = row = col;

	cout << "Vector 2D" << endl;

	vector<vector<int> > matric(max , vector<int> (max, 0));

	for (int i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++){ 
			cin >> matric[i][j]; 
        } 
    } 

	cout << endl;

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			cout << matric[j][i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

