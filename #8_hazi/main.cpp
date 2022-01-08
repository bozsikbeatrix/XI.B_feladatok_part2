#include <iostream>

using namespace std;

int joc(int n){
int oszto, k=0;
for(oszto=2; oszto<=n; oszto++){
    if(n%oszto==0){
        k+=1;
    }
}
return k;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cout << joc(n);
    return 0;
}
