#include <iostream>
#include "sb_model.cpp"

using namespace std;

void tampilkan_punyanya(Pesanan *p, int &b){
    int n;
    if(p[0].total_bill == 0)
        cout << "Kosong" << endl;
    else{
        ulang:
        for(int i = 0; i < b; i++){
            cout << i + 1 << ": " << p[i].nama << endl;
        }
        cout << "Bill punyanya nomor berapa? ";
        cin >> n;
        if(n > b + 1 || n < 1){
            cout << "bad request" << endl;
            goto ulang;
        }

        cout << "Nama\t: " << p[n - 1].nama << endl;
        int i = 0;
        while(p[n - 1].mesen_apa[i].id != 0){
            cout << "- " << p[n - 1].mesen_apa[i].nama << "\t" << p[n - 1].qty[i];
            cout << "\tx Rp " << p[n - 1].mesen_apa[i].harga << endl;
            i++;
        }
    }

    cout << "Total\t: Rp " << p[n - 1].total_bill << endl;
}

void tampilkan_semua(Pesanan *p, int &b){
    int total = 0;
    if(p[0].total_bill == 0)
        cout << "Kosong" << endl;
    else{
        for(int i = 0; i < b; i++){
            cout << "Nama\t: " << p[i].nama << endl;
            int j = 0;
            while(p[i].mesen_apa[j].id != 0){
                cout << "- " << p[i].mesen_apa[j].nama << "\t" << p[i].qty[j];
                cout << "\tx Rp " << p[i].mesen_apa[j].harga << endl;
                j++;
            }
            cout << "\tTotal bill " << p[i].nama << "\t: Rp " << p[i].total_bill << endl;
            total += p[i].total_bill;
        }
    }
    cout << endl << "Total keseluruhan : Rp " << total << endl;
}