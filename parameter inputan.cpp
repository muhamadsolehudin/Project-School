#include <iostream>
using namespace std;

// prototype
int tambahkan(int a, int b);

//program utama
int main() {
	int a, b;
	//inputan
	cout<< "Masukan nilai A : "; cin>>a;
	cout<< "Masukan nilai B : "; cin>>b;
	cout<< "Hasil :"<< tambahkan (a,b)<<endl;
	return 0;
}

int tambahkan(int a, int b){
	return a+b;
}