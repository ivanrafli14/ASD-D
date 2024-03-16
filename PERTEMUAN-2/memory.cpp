#include <bits/stdc++.h>

using namespace std;
int n;

struct kelas
{
    int jumlah_siswa;
    int jumlah_kursi;
      
};

int main(){

    cout << "ini n : " << n << endl;
    kelas* pk = (kelas*) malloc(sizeof(kelas));
    (*pk).jumlah_siswa = 15;
    (*pk).jumlah_kursi = 200;

    cout << "Kursi : " << (*pk).jumlah_kursi << endl;
    cout << "Siswa : " << (*pk).jumlah_siswa << endl;

    int* p = (int*) calloc(4 , sizeof(int));
    //realloc(p, 10 * sizeof(int));

    *(p+0) = 40;
    cout << p << " " << *(p+0) << endl;
    cout << p+1 << " " << *(p+1) << endl;
    cout << p+2 << " " << *(p+2) << endl;
    cout << p+3 << " " << *(p+3) << endl;

   
    cout << sizeof(kelas);
    


    //cout << &x << endl;

    //cout << arr[4] << endl;
}
