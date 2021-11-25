#include <iostream>

bool prim(int x){
for (int oszto=2; oszto< x/2+1; oszto++){
    if(x%oszto==0){
        return false;
    }
}
return true;
}

bool pallindrom(int x){
    int ideiglenes;
    int szamjegy;
    int ujszam=0;
while(x!=0){
    szamjegy=x%10;
    ujszam=(ujszam*10)+szamjegy;
    x=x/10;
}
if(x==ujszam){
    return true;
}else{
    return false;
}
}

int lnko(int x, int y){
while(x!=y){
    if(x>y){
        x=x-y;
    }else{
        y=y-x;
    }
}
return x;
}

using namespace std;

int main()
{
    int a=1;
    while(a>0){
        cout << "Mit szeretnel csinalni?" << endl << endl;
        cout << "1. Megvizsgalni, hogy egy szam prim-e" << endl;
        cout << "2. Megvizsgalni, hogy egy szam pallindrom-e" << endl;
        cout << "3. Megkeresni ket szam legnagyobb kozos osztojat" << endl;
        cout << "0. Kilepni" << endl;
        cin >> a;
        if(a==1){
            int x;
            cout << "x=";
            cin >> x;
         if(prim(x)){
          cout << "a szam prim";
         } else{
          cout << "a szam nem prim";
         }
     cout << endl;
        }

        if(a==2){
            int x;
            cout << "x=";
            cin >> x;
            if(pallindrom(x)){
             cout << "a szam pallindrom";
            }else {
             cout << "a szam nem pallindrom";
            }
     cout << endl;
        }

        if(a==3){
           int x, y;
           cout << "x=";
           cin >> x;
           cout << "y=";
           cin >> y;
           cout << "a es b legnagyobb kozos osztoja:" <<lnko(x, y) << endl;
        }
    }
    return 0;
}
