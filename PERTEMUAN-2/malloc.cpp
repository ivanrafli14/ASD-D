#include <iostream>

using namespace std;
int n;



int main(){
    int* p;
    p = (int*) malloc(20 * sizeof(int));
    //p = (int*) calloc(5 , sizeof(int));

    //realloc(p, 3 *  sizeof(int));

    *(p+0) = 10;
    *(p+1) = 50;
    *(p+2) = 100;
    *(p+3) = 50;
    *(p+4) = 100;

    free(p);

    cout << (p+0) << " " << *(p+0) << endl;
    cout << (p+1) << " " << *(p+1) << endl;
    cout << (p+2) << " " << *(p+2) << endl;
    cout << (p+3) << " " << *(p+3) << endl;
    cout << (p+4) << " " << *(p+4) << endl;
    
    
}