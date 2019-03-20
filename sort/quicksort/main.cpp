#include "project_sort.h"

void sort( int DataSimpan[], int Kiri, int Kanan)
{
    int A=Kiri, B=Kanan;
    int Temp;
    int Bagi=DataSimpan[(Kiri+Kanan)/2];

    while(A<=B)
    {
        while(DataSimpan[A]<Bagi)
        A++;
        while(DataSimpan[B]>Bagi)
        B--;
        if(A<=B)
        {
            Temp=DataSimpan[A];
            DataSimpan[A]=DataSimpan[B];
            DataSimpan[B]=Temp;
            A++;
            B--;
        }
    }

    if(Kiri<B)
    {
        sort(DataSimpan,Kiri,B);
    }
    if(A<Kanan)
    {
        sort(DataSimpan,A,Kanan);
    }
}