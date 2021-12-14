#include <iostream>

using namespace std;

int a, b;
int lnko(){
    int a1=a, b1=b;
    while(a!=b){
        if(a>b){
          a-=b;
        }else{
          b-=a;
    }
}
int lnko=a;
a=a1;
b=b1;
return lnko;
}
int lkkt(){
 return a*b/lnko();
}

int main()
{
    a=2;
    b=3;
    cout << lkkt() << endl;
    cout << lnko() << endl;
    return 0;
}
