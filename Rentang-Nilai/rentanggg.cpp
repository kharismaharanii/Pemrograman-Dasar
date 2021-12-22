#include<iostream>
using namespace std;
main ()
{
double NilaiUjian;
char skor;

cout<<"Kharismaharani (015) MI 2019'A"<<endl;   
cout<<"Masukan Nilai Ujian : ";
cin>>NilaiUjian;

if(NilaiUjian >= 90)
skor= 'A' ;
else

if(NilaiUjian >= 75)
skor= 'B';
else

if(NilaiUjian >= 65)
skor= 'C';
else 

if(NilaiUjian >= 55)
skor= 'D';
else
skor= 'E';
    
cout<<" Skor : "<<skor<<endl;

}
