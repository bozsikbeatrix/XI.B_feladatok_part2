#include <iostream>

using namespace std;

int a, b;
int lnko(){
    while(a!=b){
        if(a>b){
          a-=b;
        }else{
          b-=a;
    }
}
return a;
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
