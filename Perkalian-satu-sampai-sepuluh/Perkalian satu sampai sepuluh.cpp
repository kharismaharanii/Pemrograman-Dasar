#include <iostream>
using namespace std;
int main(){

    int i,n,batas=10,jumlah;

    cout<<"PROGRAM BILANGAN PERKALIAN"<<endl;
    cout<<"Kharismaharani A. P. MI 2019'A (015)"<<endl;
    cout<<"======================================"<<endl;
    cout<<"Bilangan yang akan dikalikan : ";
    cin>>n;
    cout<<"======================================"<<endl;
    cout<<"Menampilkan Hasil Perkalian :"<<endl;

    for(i=0;i<=batas;i++)
    {jumlah=i*n;
    cout<<i<<"*"<<n<<"="<<jumlah<<endl;
    }
    return 0;
}
