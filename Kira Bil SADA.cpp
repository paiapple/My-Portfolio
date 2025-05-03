calculate SADA bill
// simple calculate SADA bill
#include <iostream>
using namespace std;


void blokTarif()
    {
        cout << "0 - 20 (1 bulan)  : Blok Purata 1= 20.000   Kadar = RM0.75 ";
        cout << " \n21 - 35           : Blok Purata 2= 15.000   Kadar = RM1.30 ";
        cout << "\n>35               : Blok Purata 3= 5.000    Kadar = RM1.75 ";
    
    }

int main() {
    // Write C++ code here
    int meterSemasa;
    int meterDahulu = 0;
    int totalGuna;
    float blokPurata1,blokPurata2,blokPurata3,bakiblokPurata1;
    char kadar;
    blokTarif();
    
    int KadarTetapPurata1 = 20;
        blokPurata2 = 15;
        
        
    cout << "\n\nMasukkan meter semasa: ";
    cin >> meterSemasa;
    cout << "Masukkan meter dahulu: ";
    cin >> meterDahulu;
    
    if (meterSemasa>=meterDahulu)
    {
        totalGuna = meterSemasa - meterDahulu;
        cout << "Jumlah kegunaan (m) bulan terkini: " << totalGuna;
    }else
    {
        cout << "\nTak mungkin tak guna air :p ";
    }
        //cout << "\nAmaun Blok Purata 1: " <<blokPurata1;
        

        
        //cout << "\nAmaun Blok Purata 1: " <<blokPurata1;
        //cout << "\nAmaun Blok Purata 2: " <<blokPurata2;
        //blokPurata3 = totalGuna - 35;
        //cout << "\nAmaun Blok Purata 3: " <<blokPurata3;
            
        if(totalGuna<=20)
        {
            cout << "\nAmaun Blok Purata 1: " <<totalGuna;
            }
            else if(totalGuna>=20 && totalGuna<=35)
            {
                blokPurata1 = 20;
                cout << "\nAmaun Blok Purata 1: " <<blokPurata1;
                blokPurata2 = totalGuna-blokPurata1;
                cout << "\nAmaun Blok Purata 2: " <<blokPurata2;
            }else 
            {
                blokPurata1 = 20;
                cout << "\nAmaun Blok Purata 1: " <<blokPurata1;
                blokPurata2 = 15;
                cout << "\nAmaun Blok Purata 2: " <<blokPurata2;
                blokPurata3 = totalGuna - 35;
                cout << "\nAmaun Blok Purata 3: " <<blokPurata3;
            }
        

    
    return 0;
}
