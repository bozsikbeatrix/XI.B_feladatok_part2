#include <iostream>

using namespace std;

long Hanoi(long k){
if(k==1){return 1;}
if(k==2){return 3;}
return 2*Hanoi(k-1)+Hanoi(1);
}

int main()
{
    int k;
    cout << "k=";
    cin >> k;
    cout << Hanoi(k);
    return 0;
}
