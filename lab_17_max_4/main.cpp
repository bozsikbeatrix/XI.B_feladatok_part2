#include <iostream>

using namespace std;

int f(int n){
if(n==0){return 1;}
return n%10*f(n/10);
}

int main()
{
    cout << f(342)<< endl;
    return 0;
}
