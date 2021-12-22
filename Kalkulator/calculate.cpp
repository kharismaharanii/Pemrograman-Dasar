#include <iostream>

using namespace std;

float perkalian (float angka1, float angka2){
   return(angka1*angka2);
}

float pembagian (float angka1, float angka2){
   return(angka1/angka2);    
}

float penjumlahan (float angka1, float angka2){
   return(angka1+angka2);
}

float pengurangan (float angka1, float angka2){
   return(angka1-angka2);
}

void inputAngka(float& angka1,float& angka2){
   cout<<"Masukan angka 1 : ";cin>>angka1;    
   cout<<"Masukan angka 2 : ";cin>>angka2;    
}

void menu (int pilihan){
   int pilih;
   float angka1,angka2;
   do{
      system("CLS");
      cout<<"=====Kalkulator Sederhana====="<<endl;
      cout<<"1. Penjumlahan"<<endl;
      cout<<"2. Pengurangan"<<endl;
      cout<<"3. Perkalian"<<endl;
      cout<<"4. Pembagian"<<endl;
      cout<<"5. Exit"<<endl;
      cout<<"=====Kalkulator Sederhana====="<<endl;
      cout<<"Pilih menu : ";cin>>pilih;
      while(pilih>5||pilih<0){
          cout<<"Pilih menu (1-5): ";cin>>pilih;
      }
      switch(pilih){
          case 1 :
              cout<<"\n========Penjumlahan======\n";
              inputAngka(angka1,angka2);
              cout<<angka1<<" + "<<angka2<<" = "<<penjumlahan(angka1,angka2)<<endl;
              system("Pause");
              break;
          case 2 :
              cout<<"\n========Pengurangan======\n";
              inputAngka(angka1,angka2);
              cout<<angka1<<" - "<<angka2<<" = "<<pengurangan(angka1,angka2)<<endl;
              system("Pause");
              break;
          case 3 :
              cout<<"\n========Perkalian======\n";
              inputAngka(angka1,angka2);
              cout<<angka1<<" * "<<angka2<<" = "<<perkalian(angka1,angka2)<<endl;
              system("Pause");
              break;
          case 4 :
              cout<<"\n========Pembagian======\n";
              inputAngka(angka1,angka2);
              cout<<angka1<<"/"<<angka2<<" = "<<pembagian(angka1,angka2)<<endl;
              system("Pause");
              break;
      }
   }while(pilih!=5);
}

main(){
   int pilihan;
   cout<<"Selamat Datang di Kalkulator Sederhana"<<endl;
   cout<<"Kharismaharani Aisyah P."<<endl;
   cout<<"MI 2019'A (19051397015)"<<endl;
   cout<<"Ketik 1 untuk melanjutkan :";cin>>pilihan;
   if(pilihan==1){
      menu(pilihan);
   }
   else{
      return 0;
   }
}
