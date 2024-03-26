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
 
 
void solve(){
   list<string>ls = {"Budi"};

   int n; cin >> n;

   while(n--){
    string opt, data1;
    cin >> opt >> data1;

    if(opt == "TambahAwal") ls.push_front(data1);
    if(opt == "TambahAkhir") ls.push_back(data1);
    if(opt == "Hapus"){
        ls.remove(data1);
    }
    if(opt == "Ubah"){
        string data2; cin >> data2;

        for(auto& it : ls){
            
            if(it == data1){
                it = data2;
            }

        }
    }
   }

   for(auto it : ls){
    cout << it << " ";
   }
 



}
 
 
 
 
 
int main(){
   BOOST
   solve();
   
   
}