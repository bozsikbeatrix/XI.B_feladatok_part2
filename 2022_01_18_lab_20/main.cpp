#include <iostream>

using namespace std;

struct diak{
int azonosito;
string nev;
string osztaly;
double media;
} a, b, c;

int main()
{
    cout << "a diak neve:";
    cin >> a.nev;
    cout << "a diak mediaja:";
    cin >> a.media;
    cout << "b diak neve";
    cin >> b.nev;
    cout << "b diak mediaja:";
    cin >> b.media;
    cout << "c diak neve:";
    cin >> c.nev;
    cout << "c diak mediaja";
    cin >> c.media;

    if(a.media> b.media && a.media> c.media){
        cout << a.nev;
    } else if(b.media> c.media){
        cout << b.nev;
    } else{
        cout << c.nev;
    }
    return 0;
}
