#include <iostream>
#include <stdlib.h>

using namespace std;

int minimum(int balindex, int jobbindex, int tomb[]){
if(balindex==jobbindex){
    return tomb[jobbindex];
}
int kozep=(balindex+jobbindex)/2;
int min1=minimum(balindex, kozep, tomb);
int min2=minimum(kozep+1, jobbindex, tomb);
if(min1<min2){
    return min1;
} else {
    return min2;
}
}

int main()
{
    int tomb[500000], n;
    for(int i=0; i<n; i++){
        tomb[i]=rand()%500001;
    }
    cout << minimum(0, 499999, tomb);
    return 0;
}
