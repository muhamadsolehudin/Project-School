#include<iostream>
using namespace std;

//prototype
void prosesInput();
int prosesOutput();

//variableglobal
int T;

int main ()
{
	prosesInput();
	prosesOutput();
	return 0;
}


	//masukan
	void prosesInput(){
		cout<<" temperatur (derajat,C):";
		cin>>T;
	}

	
	//keluaran
	int prosesOutput(){
	if(T<0)
	{
		cout<<"Wujud Air = Beku Pada Suhun "<<T<<" Derajat"<<endl;
	}
	else if ((T>=0) && (T<=100))
	{
		cout<<"Wujud Air = Cair Pada Suhu "<<T<<" Derajat"<<endl;
	}
	else /* T>100*/
	{
		cout<<"Wujud Air = Gas/Uap Pada Suhu "<<T<<" Derajat"<<endl;
	}
	system("pause");
	}

