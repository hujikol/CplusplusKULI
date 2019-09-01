#include <iostream>
using namespace std;

int main(){

	int n, i, j;
	
	cout<<"Masukkan jumlah baris : ";
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	for(i=0; i<=n; i++)
	{
		cout<<"* ";
	}
	cout<<endl;
	
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}

}
