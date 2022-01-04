#include <iostream>

using namespace std;

int f(int n){
if(n==0){return 0;}
return 1+f(n/10);
}

int main()
{
    cout << f(1974);
    return 0;
}
