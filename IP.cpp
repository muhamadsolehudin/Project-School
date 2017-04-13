#include <iostream>
using namespace std;

bool iswithinrange (float ip, int max, int min);
void print ();

float ip, RataIp;
int jml, lulus, TdkLulus;
bool valid;

int main() {
	
		cout <<"			***				"<<endl;
		cout <<"Nama		: Muhamad Solehudin "<<endl;
		cout <<"NIM		: 16111219 "<<endl;
		cout <<"Kelas		: TIF 16A RM "<<endl;
		cout << "================================================"<<endl;
		cout << "           >> Program IP Mahasiswa <<           "<<endl;  
		cout << "================================================"<<endl;
		
	do {
		cout <<"Masukan Nilai : " ;
		cin >> ip ;
		valid = iswithinrange(ip,4,0);
	if (valid) {
		if (ip >=2.75) {
		lulus++;
	}else{
		TdkLulus++;
	}
	RataIp = RataIp + ip;
	jml++;
	}else{
		cout << "Nilai yang anda masukan salah" << endl;
	}
	}
	while (ip != -999);
	print();
	}
	bool iswithinrange (float ip, int max,int min) {
	if (ip > max || ip <= 0) {
		return false;
	}
	return true;
	}
	void print () {
	cout << "==============================================" <<endl;
	cout <<"banyaknya mahasiswa : " << jml << endl;
	cout <<"banyaknya jumlah lulus : " << lulus << endl;
	cout <<"banyaknya yang tidak lulus : " << TdkLulus << endl;
	cout <<"rata-rata nilai IP : " << (RataIp/jml) << endl;
}
