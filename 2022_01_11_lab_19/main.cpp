#include <iostream>

using namespace std;

long Mandelbrot(long k, long c){
if(k==0){return c;}
return (Mandelbrot(k-1, c)*Mandelbrot(k-1, c))+Mandelbrot(0, c);
}

int main()
{
    int c, k;
    cout << "k=";
    cin >> k;
    cout << "c=";
    cin >> c;
    cout << Mandelbrot(k, c);
    return 0;
}
