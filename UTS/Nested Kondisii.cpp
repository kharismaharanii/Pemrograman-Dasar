#include <iostream>
using namespace std;

void pilihan (int x){
    if (x==1) {
        cout << "Anda Membeli Baju Denim";
    }
    else {
        cout << "Anda Membeli Baju Polo";
    }
}

int main(){
    int pilih;

    cout << "1. Baju merk Denim" << '\n';
    cout << "2. Baju merk Polo" << '\n';
    cout << "Masukkan Pilihan Anda (1-2): "; cin >> pilih;

    pilihan (pilih);
}
