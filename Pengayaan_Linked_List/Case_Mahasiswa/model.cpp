#include <iostream>
using namespace std;

struct Mhsw{
    string nama;
    float nilai[4];
    Mhsw *next;
};

struct Kelas{
    string nama_kelas;
    Mhsw *head, *tail;

    Kelas(string s){
        nama_kelas = s;
        head = tail = NULL;
    }
};
