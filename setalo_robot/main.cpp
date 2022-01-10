#include <iostream>

using namespace std;

int lnko(int n, int k){
while(n!=k){
    if(n>k){
        n=n-k;
    }else{
        k=k-n;
    }
}
return n;
}
int csokolade(int n, int k){
return n-n/lnko(n, k);
}

int main()
{
    int n, k;
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    cout << n-n/lnko(n, k);
    return 0;
}
