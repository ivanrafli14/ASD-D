#include <iostream>
// using namespace std;

struct Menu{
    int id;
    std::string nama;
    int harga;
};

struct Pesanan{
    std::string nama;
    Menu mesen_apa[10];
    int qty[10];
    int total_bill;
};