/*
nama	: Muhammad Amien
Prodi	: D3 Manajemen Informatika
NIM		: 18050623017
*/

#include<iostream>
 
using namespace std;
 
int main()
{
	int a[50],n,i,j,temp;
	cout<<"masukkan jumlah angka : ";
	cin>>n;
	cout<<"masukkan nilai : "; 
	
	for(i=0;i<n;++i)
		cin>>a[i];
		
	for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	
	cout<<"urutan :";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];
		
}