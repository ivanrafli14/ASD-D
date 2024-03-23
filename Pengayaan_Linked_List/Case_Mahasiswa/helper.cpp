#include <iostream>
#include "model.cpp"
using namespace std;

float dummy[5][4] = {
    {80, 87, 89, 87},
    {90, 88, 89, 85},
    {84, 85, 89, 88},
    {82, 86, 90, 84},
    {88, 87, 90, 83}
};
int indx = 0;

bool bandingAbjad(string a, string b){
    for(int i = 0; i < a.length(); i++){
        if(a[i] == b[i]) continue;
        else if(a[i] > b[i]) return true;
        else if(a[i] < b[i]) return false;
    }
    return false;
}

float hitung_rerata(Mhsw *m){
    float hasil;
    for(int i = 0; i < 4; i++){
        hasil += m->nilai[i];
    }
    return hasil / 4;
}
