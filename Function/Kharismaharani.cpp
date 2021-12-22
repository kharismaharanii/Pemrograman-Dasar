#include <iostream>
using namespace std;

int kali (int x, int y){
    return x*y;
}

int main(){
    int a=5, b=6, c=8, d=11;
    cout<<"a * b = "<<kali(a,b)<<endl;
    cout<<"c * d = "<<kali(c,d)<<endl;
    cout<<"a * c = "<<kali(a,c)<<endl;
    cout<<"b * d = "<<kali(b,d)<<endl;
    cout<<"a * d = "<<kali(a,d)<<endl;
    cout<<"b * c = "<<kali(b,c)<<endl;
}
