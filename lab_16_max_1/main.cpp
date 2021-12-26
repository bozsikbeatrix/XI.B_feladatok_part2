#include <iostream>

using namespace std;

int P(int n, int x){
if(n==1){return x;}
return x * P(n-1, x);
}

int main()
{
    cout << P(10, 2);
    return 0;
}
