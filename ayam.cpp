#include <iostream>
using namespace std;

int main (){
	int n;
	cout<<"Masukkan jumlah ayam = ";cin>>n;
	struct{
		int nama[100000],jmlh_telur[100000],warna[100000][1000]; 
	}ayam;
	
	for(int i=0;i<n;i++){
		cout<<"Masukkan nama ayam = ";cin>>ayam.nama[i];
		cout<<"Masukkan jumlah telur "<<ayam.nama[i]<<" = ";cin>>ayam.jmlh_telur[i];
		int temp=ayam.jmlh_telur[i];
		if(temp<=0)cout<<"Ayam tidak bertelur, a siyap!";
		else if(temp>0){
			for(int j=0;j<temp;j++){
				if(j==0){cout<<"Apa warna telur yang pertama? = ";cin>>ayam.warna[i][j];}
					else{cout<<"Apa warna telur yang ke - "<<j+1<<"? = ";cin>>ayam.warna[i][j];}
			}
		}
	}
	for(int i=0;i<n;i++){
		
	}
}
