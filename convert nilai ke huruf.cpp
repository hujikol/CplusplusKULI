#include <iostream>
using namespace std;

int main(){
	
	int x;
	
	cout<<"Masukan nilai : ";
	cin>>x;
	cout<<"Nilai anda : ";
	
	if(x>=80 && x<=100) cout<<"A";
	else if(x>=60 && x<80) cout<<"B";
		 else if(x>=40 && x<60) cout<<"C";
		 	  else if(x>=20 && x<40) cout<<"D";
		 	  	   else if(x>=0 && x<20) cout<<"E";
	return 0;
}
