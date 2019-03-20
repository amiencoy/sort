#include <iostream>
#include "project_sort.h"
#include "main.cpp"

int main()
{
    int DataSimpan[100];
    int A,BanyakData,AwalBatas,AkhirBatas;
    AwalBatas=0;
    cout<<"masukkan jumlah data : "<<endl; 
	cin>>BanyakData;

    AkhirBatas=BanyakData;
    cout<<"masukkan data : "<<endl;
    for(A=0; A<=BanyakData; A++)
    {
        cout<<"Masukan data ke- "<<A<<" : ";
		cin>>DataSimpan[A];
    }

    sort(DataSimpan,AwalBatas,AkhirBatas);
    cout<<"\nHasil pengurutan data: ";
    for(A=1; A<=BanyakData; A++)
        cout<<" "<<DataSimpan[A];
}