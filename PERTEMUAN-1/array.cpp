#include <iostream>

using namespace std;

int main(){
    // tipedata nama_array[panjang];
    int n; cin >> n;
    cin.ignore();
    string arr[n];

    for(int i=0; i < n; i++){
        getline(cin, arr[i]);
    }

    for(int i=0; i < n; i++){
        cout << "data index ke " << i << " adalah : " << arr[i] << endl;
    }

    //cout << arr[4] << endl;
}
