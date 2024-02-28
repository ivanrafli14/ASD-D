#include <iostream>

using namespace std;

struct kelas
{
    int jumlah_siswa;
    string nama;
      
};

int main(){

    kelas asd[5];

    for(int i=0; i < 5; i++){
        cin >> asd[i].jumlah_siswa;
        cin >> asd[i].nama;
    }

    for(int i=0; i < 5; i++){
        cout << "Kelas ke " << i << endl;
        cout << asd[i].jumlah_siswa << endl;
        cout <<  asd[i].nama << endl;
    }

    //cout << arr[4] << endl;
}