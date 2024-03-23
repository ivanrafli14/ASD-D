#include <iostream>

using namespace std;

// deklarasi struct dengan 4 atribut (semuanya bertipe float)
struct Segi_empat{
    float panjang, lebar, luas, keliling;
};

// ceritanya atribut panjang & lebar akan sudah diisi saat inisialisasi (di baris 22)
// sedangkan atribut luas & keliling belum diisi

// membuat function untuk mengupdate nilai atribut luas & keliling
void hitung_luas(Segi_empat *se){
    (*se).luas = (*se).panjang * (*se).lebar;
}

void hitung_keliling(Segi_empat *se){
    (*se).keliling = ((*se).panjang + (*se).lebar) * 2;
}
    // atau
/*
void hitung_luas(Segi_empat *se){
    se->luas = se->panjang * se->lebar;
}

void hitung_keliling(Segi_empat *se){
    se->keliling = (se->panjang + se->lebar) * 2;
}
*/


int main(){
    // deklarasi 3 buah member struct Segi_empat
    // (kebetulan kita buat berupa array)
    Segi_empat bidang[] = {{20, 15}, {10.5, 8}, {15, 10}};
    
    // mengupdate nilai atribut luas & keliling di setiap member tadi
    for(int i = 0; i < 3; i++){
        hitung_luas(&bidang[i]);
        hitung_keliling(&bidang[i]);
    }

    // memprint luas & keliling semua member
    for(int i = 0; i < 3; i++){
        cout << "Bidang ke-" << i + 1 << endl;
        cout << "Luas \t\t: " << bidang[i].luas << " satuan luas." << endl;
        cout << "Keliling \t: " << bidang[i].keliling << " satuan panjang." << endl;
        cout << endl;
    }

    return 0;
}