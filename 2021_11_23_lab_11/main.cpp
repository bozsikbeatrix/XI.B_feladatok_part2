#include <iostream>

using namespace std;

int maxim(int v[], int n){
int i;
int max= v[0];
for (int i=0; i<n; i++){
    if (v[i]>max){
        max=v[i];
    }
}
    return max;
}

int main()
{
    int v[100], n;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << maxim(v, n);
    return 0;
}
