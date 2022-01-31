#include <iostream>

using namespace std;

void cuburi(int n){
int b;
for(b=n; b>=1; b--){
cout << b*b*b << " ";
 }
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cuburi(n);
    return 0;
}
