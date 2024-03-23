#include <iostream>
#include "helper.cpp"
using namespace std;


void Tambah(Kelas&, string);
void Hapus(Kelas&, string);
void Tampilkan(Kelas&);

Kelas A("A"), B("B");

int main(){


    Tambah(A, "Naufal Array P.");
    Tambah(A, "Ahmad Pointer");
    Tambah(B, "Linked Listyawan");
    Tambah(B, "Kevin J. Void");
    Tambah(A, "Andika Not Null");
    Hapus(B, "Ahmad Pointer");

    Tampilkan(A);
    Tampilkan(B);

    return 0;
}


void Tambah(Kelas &k, string s){
    cout << "- Menambahkan " << s << " di kelas " << k.nama_kelas << endl;
    Mhsw *baru = new Mhsw();
    baru->nama = s;
    for(int i = 0; i < 4; i++){
        baru->nilai[i] = dummy[indx][i];
    }
    indx++;
    Mhsw *temp = k.head;
    Mhsw *tempprev;

    if(temp == NULL){
        k.head = k.tail = baru;
    }else{
        while(temp->next != NULL){
            if(bandingAbjad(baru->nama, temp->nama)){
                tempprev = temp;
                temp = temp->next;
            }else{
                break;
            }
        }
        if(temp == k.head && !(bandingAbjad(baru->nama, k.head->nama))){
            baru->next = k.head;
            k.head = baru;
        }else{
            if(temp != k.tail){
                baru->next = temp;
                tempprev->next = baru;
            }else{
                if(bandingAbjad(baru->nama, temp->nama)){
                    temp->next = baru;
                    k.tail = baru;
                }else{
                    baru->next = temp;
                    tempprev->next = baru;
                }
            }
        }
    }

}

void Hapus(Kelas &k, string s){
    cout << "- Menghapus " << s << " di kelas " << k.nama_kelas << endl;
    Mhsw *hapus = k.head;
    Mhsw *temp = hapus;
    bool ada = false;
    while(hapus != NULL){
        if(hapus->nama == s){
            ada = true;
            break;
        }
        temp = hapus;
        hapus = hapus->next;
    }
    if(ada){
        if(hapus == k.head){
            k.head = temp->next;
        }else if(hapus == k.tail){
            k.tail = temp;
        }else{
            temp->next = hapus->next;
        }
        free(hapus);
    }else{
        cout << s << " tidak ada di kelas " << k.nama_kelas << endl;
    }
}

void Tampilkan(Kelas &k){
    Mhsw *temp = k.head;
    cout << "Kelas " << k.nama_kelas << endl;
    while(temp != NULL){
        cout << "-- " << temp->nama << "\t" << hitung_rerata(temp) << endl;
        if(temp == k.tail) break;
        temp = temp->next;
    }
}