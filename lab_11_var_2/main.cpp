#include <iostream>

using namespace std;

int maximum(int v[], int n){
int m= v[0];
for (int i=1; i<n; i++){
    if(m< v[i]) {
        m= v[i];
    }
}
return m;
}

int main()
{
    int v[10]= {1, 2, 2004, 3, 4, 5, 6, 8, 9, 0};
    cout << maximum(v, 10);
    return 0;
}
