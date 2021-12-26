#include <iostream>

using namespace std;

int prim(int n){
int osztokszama=0;
for(int oszto=1; oszto<=n/2; oszto++)
    if(n%oszto==0) osztokszama++;
if(osztokszama==1) return 1;
return 0;
}

void primek(int n, int &x, int &y){
x=0;
y=0;
int szam=n-1;
while(szam>=2 && x==0){
    if(prim(szam)==1){
        if(y==0) y=szam;
        else x=szam;
    }
    szam--;
}
}

int main()
{
    int n, x, y;
    cout << "n=";
    cin >> n;
    primek(n, x, y);
    cout << x << " " << y;
    return 0;
}
