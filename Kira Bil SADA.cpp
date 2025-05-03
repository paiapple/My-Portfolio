// Online C++ compiler to run C++ program online
// simple calculate SADA bill
#include <iostream>
using namespace std;


void blokTarif()
    {
        cout << "\n\nBlok Tarif(m)     | Blok Prorata(m)          |Kadar RM";
        cout << "\n0 - 20 (1 bulan)  : Blok Prorata 1= RM20.000   Kadar = RM0.75 ";
        cout << " \n21 - 35           : Blok Prorata 2= RM15.000   Kadar = RM1.30 ";
        cout << "\n>35               : Blok Prorata 3= RM5.000    Kadar = RM1.75 ";
        cout << "*********************************************** ";
}

int main() {
    // Write C++ code here
    int meterSemasa;
    int meterDahulu = 0;
    int totalGuna;
    float blokPurata1,blokPurata2,blokPurata3,bakiblokPurata1;
    char kadar;
    
    cout << "Kalkulator Bill SADA ";
    cout << "\n*********************** ";
    blokTarif();
   
        
    cout << "\n\nMasukkan meter semasa: ";
    cin >> meterSemasa;
    cout << "Masukkan meter dahulu: ";
    cin >> meterDahulu;
    
    if (meterSemasa>=meterDahulu)
    {
        totalGuna = meterSemasa - meterDahulu;
        cout << "Jumlah kegunaan(m) bulan terkini: " << totalGuna;
    }else
    {
        cout << "\ntak guna air ke? :p ";
    }
            
    if(totalGuna<=20)
    {
        cout << "\n\nAmaun Blok Prorata 1: RM" <<totalGuna;
            
        float kadar1=totalGuna * 0.75;
        cout << "\nTotal Bil Sada: RM" <<kadar1;
            
    }
    else if(totalGuna>=20 && totalGuna<=35)
    {
        blokPurata1 = 20;
        float kadar1=blokPurata1 * 0.75;
        cout << "\n\nAmaun Blok Prorata 1: RM" <<blokPurata1;
        cout << "\nAmaun Kadar 1: RM" <<kadar1;
        
        blokPurata2 = totalGuna-blokPurata1;
        float kadar2=blokPurata2 * 1.30;
        cout << "\nAmaun Blok Prorata 2: RM" <<blokPurata2;
        cout << "\nAmaun Kadar 2: RM" <<kadar2;
                
        float total2=kadar1+kadar2;
        cout << "\n\nTotal Bil Sada: RM" <<total2;
    }
    else 
    {
        blokPurata1 = 20;
        float kadar1=blokPurata1 * 0.75;
        cout << "\n\nAmaun Blok Prorata 1: RM" <<blokPurata1;
        cout << "\nAmaun Kadar 1: RM" <<kadar1;
        
        blokPurata2 = 15;
        float kadar2=blokPurata2 * 1.30;
        cout << "\nAmaun Blok Prorata 2: RM" <<blokPurata2;
        cout << "\nAmaun Kadar 2: RM" <<kadar2;
        
        blokPurata3 = totalGuna - 35;
        float kadar3=blokPurata3 * 1.75;
        cout << "\nAmaun Blok Prorata 3: RM" <<blokPurata3;
        cout << "\nAmaun Kadar 3: RM" <<kadar3;
                
        float total3=kadar1+kadar2+kadar3;
        cout << "\n\nTotal Bil Sada: RM" <<total3;
    }
        
    return 0;
}
