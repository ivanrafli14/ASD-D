#include <iostream>

using namespace std;
int n;

struct kelas
{
    int jumlah_siswa;
    int coba;
      
};

int main(){

    cout << "ini n : " << n << endl;
    int* p = (int*) calloc(4 , sizeof(int));
    kelas* pk;
    (*pk).jumlah_siswa = 15;
    (*pk).coba = 20;

    cout << "Kang " << (*pk).coba << endl;

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