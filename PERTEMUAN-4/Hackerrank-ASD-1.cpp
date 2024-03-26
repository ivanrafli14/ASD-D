#include <bits/stdc++.h>

#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;

// 1sec -> 1e8

const int MOD = 1e9 + 7;
 
 
 
void Usaco(string s) { 
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

struct mahasiswa
{
    string nama;
    string NIM;
    int nilai[100];
    double rata;
};
 
 
void solve(){
    mahasiswa arr[100];

   int n; cin >> n;
   //cin.ignore();

   for(int i = 0; i < n; i++){
    cin.ignore();
    getline(cin,arr[i].nama);
    
    cin >> arr[i].NIM;

    double tot = 0;
    for(int j = 0; j < 5; j++){
        cin >> arr[i].nilai[j];
        tot+=arr[i].nilai[j];
    }

    

    arr[i].rata = tot / 5;

   }

   string nama_max = "";
   string nim_max = "";
   double rata_max = 0;

   for(int i=0; i < n; i++){

    if (arr[i].rata > rata_max){
        rata_max = arr[i].rata;
        nama_max = arr[i].nama;
        nim_max = arr[i].NIM;

    }
   }

   cout << "Perolehan Rata-Rata Tertinggi" << endl;
   cout << "Nama: " << nama_max << endl;
   cout << "NIM: " << nim_max << endl;
   cout << "Rata-rata: " << rata_max << endl;

   
 



}
 
 
 
 
 
int main(){
   BOOST
   solve();
}