#include <iostream>

using namespace std;

struct Praktikan{
    int id;   
    string nama = "[belum ada]";    // "[belum ada]" menjadi nilai default
    float nilai[3] = {50, 50, 50};  // 50 menjadi nilai default
    string email[2];
};

struct Kelompok{
    string nama;
    Praktikan anggota[4];
};

Kelompok satu;

int main(){
    
    Praktikan prkt1 = { 
                        1,
                        "Rizqi",
                        {80, 81, 80.5},
                        {"emailrizqi@gmail.com", "emailrizqi@student.asd.ac.id"}
                      };

    Praktikan prkt2 = {1, "Indri", {81, 82, 81.5}, {"emailindri@gmail.com", "emailindri@student.asd.ac.id"}};


    satu = {"Kelompok Satu", {prkt1, prkt2}};

    // cin >> satu.anggota[0].nilai[1];     // update nilai dari masukan user

    for(int i = 0; i < 4; i++){
        cout << "Nilai si " << satu.anggota[i].nama << endl;
        for(int j = 0; j < 3; j++){
            cout << satu.anggota[i].nilai[j] << "  ";
        }
        cout << endl;
    }
    

    return 0;
}