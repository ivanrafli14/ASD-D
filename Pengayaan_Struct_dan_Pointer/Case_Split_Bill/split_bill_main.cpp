#include <iostream>
#include "sb_helper.cpp"

using namespace std;

Menu nasgor = {1, "Nasi Goreng ASD", 12000};
Menu siomay = {2, "Siomay Pointer", 7000};
Menu kerupuk = {3, "Kerupuk Flowchart", 7000};
Menu jeruk = {4, "Jeruk AVL Hangat", 4000};

Pesanan bills[40];  // deklarasi array of struct pesanan (masing-masing anak)
int indx = 0;
void tambah_orang(Pesanan *p, int &b);
void totalan(Pesanan *p);


int main(){
    int pilih;

    do{
        cout << "-----------------------------" << endl;
        cout << "1. Lihat Bill Salah Satu Anak" << endl;
        cout << "2. Lihat Bills" << endl;
        cout << "3. Tambah Orang" << endl;
        cout << "4. Tutup" << endl;
        cout << "Pilih tindakan: ";
        cin >> pilih;
        cout << endl;

        switch(pilih){
            case 1 : tampilkan_punyanya(&bills[0], indx); break;
            case 2 : tampilkan_semua(&bills[0], indx); break;
            case 3 : tambah_orang(&bills[0], indx); break;
        }

    }while(pilih != 4);

    cout << "Bye dunia\n\n";

    return 0;
}


void totalan(Pesanan *p){
    int i = 0;
    while(p->mesen_apa[i].id != 0){
        p->total_bill += p->qty[i] * p->mesen_apa[i].harga;
        i++;
    }
}

void tambah_orang(Pesanan *p, int &b){
    cout << "Masukkan nama: ";
    cin.ignore();
    getline(cin, p[b].nama);

    int i = 0;
    char konfirm;
    do{
        int m;
        cout << "\n1. Nasgor\n2. Siomay\n3. Kerupuk\n4. Jeruk" << endl;
        cout << "Menu nomor ... : ";
        cin >> m;
        switch(m){
            case 1 : p[b].mesen_apa[i] = nasgor; break;
            case 2 : p[b].mesen_apa[i] = siomay; break;
            case 3 : p[b].mesen_apa[i] = kerupuk; break;
            case 4 : p[b].mesen_apa[i] = jeruk; break;
        }

        cout << "Qty: ";
        cin >> p[b].qty[i];

        do{
            cout << endl << "Tambah lagi? y/n\t";
            cin >> konfirm;
        }while(konfirm != 'y' && konfirm != 'n');

        i++;
    }while(konfirm == 'y');

    totalan(&p[b]);
    b++;
}
