//judul
#include <iostream>
#include <string.h>
using namespace std;
//kamus
int a,mk,sks;
long int nim;
string nm,pd,makul;
int total, ts=0, tarif=200000;
//deskripsi
int main(){
    cout << "Nama                :" ;cin >> nm;
    cout << "NIM                 :" ;cin >> nim;
    cout << "Prodi               :" ;cin >> pd;
    cout << "-------------------------------------------------------" << endl;
    cout << "Input Jumlah Matkul :" ;cin >> mk;
    cout << "-------------------------------------------------------" << endl;

    for(a=0; a<mk; a++){
        cout << "matkul          :";cin >> makul;
        cout << "sks             :";cin >> sks;
        ts+=sks;
        }

    total=tarif*ts;
    cout << "-------------------------------------------------------" << endl;
    cout << "Total SKS           :"; cout << ts << endl;
    cout << "Total Tarif SKS     :"; cout << total << endl;
    cout << "-------------------------------------------------------" << endl;
    return 0;
}

