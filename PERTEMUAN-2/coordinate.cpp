#include <bits/stdc++.h>

using namespace std;

struct coordinate {
    int x;
    int y;
};


int main(){
    //coordinate* pertama = (coordinate*) malloc(sizeof(coordinate));
    coordinate* pertama = new coordinate;

    //(*pertama).x = 10;
    pertama->x = 50;
    (*pertama).y = 20;

    cout << (*pertama).x << endl; 
    cout << (*pertama).y << endl; 



    
    
    
}
