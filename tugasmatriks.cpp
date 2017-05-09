#include <iostream>
using namespace std;

int main (){
	int A[3][3];
	int B[3][3];
	int C[3][3];
	
	for(int a=0; a < 3; a++){
		for(int b=0; b < 3; b++){
			cout << " Masukkan Matriks B Baris  ke- " << a <<" Kolom ke- " << b << " : ";
			cin >> B[a][b];
		}
	}	
	cout << "=======================================================================" <<endl;
	
	for(int a=0; a < 3; a++){
		for(int b=0; b < 3; b++){
			cout << "Masukkan Matriks C Baris ke- " << a <<" Kolom ke- " << b << " : ";
			cin >> C[a][b];
			A[a][b] = B[a][b] + C[a][b];
		}
	}	
	
	cout << "		B		" << endl;
	cout << "===============" << endl;
	for(int a=0; a < 3; a++){
		for(int b=0; b < 3; b++){
			cout << B[a][b] << " ";
		}
		cout << endl;
	}
	
	cout << endl << endl;
	cout << "		C		" << endl;
	cout << "===============" << endl;
	for(int a=0; a < 3; a++){
		for(int b=0; b < 3; b++){
			cout << C[a][b] << " ";
		}
		cout << endl;
	}
		
	cout << endl << endl;
	cout << "		A		" << endl;
	cout << "===============" << endl;

	for(int a=0; a < 3; a++){
		for(int b=0; b < 3; b++){
			cout << A[a][b] << " ";
		}
		cout << endl;
	}
	return 0;
}

