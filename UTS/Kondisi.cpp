#include <iostream>
using namespace std;

int main(){

    string password;

    cout << "========= Login =========" << endl;
    cout << "Masukan password: ";
    cin >> password;


    if (password == "Kharismaharani"){
        cout << "Semangat pagi kawan!" << endl;
    } else {
        cout << "Password salah, coba lagi!"  << endl;
    }

    cout << "I HOPE YOU ALWAYS HEALTHY:)" << endl;

    return 0;
}

