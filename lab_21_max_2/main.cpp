#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int v[500000], n, minimum=100000000000000000;
    for(int i=0; i<n; i++){
        v[i]=rand()%500001;
        if(v[i]<minimum){
            minimum=v[i];
        }
    }
    cout << minimum;
    return 0;
}
