#include <iostream>
using namespace std;


int main(){
	int i, k, temp, x []={23, 24, 24, 32, 43, 56, 12, 78, 86, 22, 
		23, 24, 24, 32, 43, 56, 12, 78, 86, 22, 
		23, 24, 24, 32, 43, 56, 12, 78, 86, 22,
		23, 24, 24, 32, 43, 56, 12, 78, 86, 22, 
		23, 24, 24, 32, 43, 56, 12, 78, 86, 22, 
		23, 24, 24, 32, 43, 56, 12, 78, 86, 22, 
		23, 24, 24, 32, 43, 56, 12, 78, 86, 22, 
		23, 24, 24, 32, 43, 56, 12, 78, 86, 22, 
		23, 24, 24, 32, 43, 56, 12, 78, 86, 22, 
		23, 24, 24, 32, 43, 56, 12, 78, 86, 22};

	for (i = -1; i<97; ++i){
		for (k=99; k> i+1 ; --k){
			if (x [k] <x [k-1]){
				temp=x[k];
				x[k]=x[k-1];
				x[k-1]=temp;

			}
		}
	}

	for (i = 0; i<100; ++i){
		cout << x[i]<<endl;
	}

	return 0;
}	