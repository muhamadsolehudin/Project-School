#include <iostream>
using namespace std;

//prototype
void prosesBaca();
int prosesTambah();
int prosesKurang();
void prosesTampil();

// variable global
	int a, b;

//program utama
int main() {
	prosesBaca();
	prosesTampil();
	return 0;
}

// proses baca
void prosesBaca() {
	cout<< "Masukan nilai A : "; cin>>a;
	cout<< "Masukan nilai B : "; cin>>b;

}

// proses Tambah
int prosesTambah() {
	return a+b;
}

// proses kurang
int prosesKurang() {
	int hasil;
	hasil= a-b;

	return hasil;
}

// proses tampil
void prosesTampil() {
	cout<< " Hasil Tambah : "<<prosesTambah()<<endl;
	cout<< " Hasil Kurang : "<<prosesKurang();
}