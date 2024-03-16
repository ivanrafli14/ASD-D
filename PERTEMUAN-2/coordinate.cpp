#include <iostream>

using namespace std;

struct coordinate {
    int x;
    int y;
};


int main(){
    //koordinate* pertama = (koordinate*) malloc(sizeof(koordinate));
    coordinate* pertama = new coordinate;

    //(*pertama).x = 10;
    pertama->x = 50;
    (*pertama).y = 20;

    cout << (*pertama).x << endl; 
    cout << (*pertama).y << endl; 



    
    
    
}
