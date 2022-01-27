#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#define N 500000

using namespace std;

void normal(int arr[]){
    int n;
 for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {



            if ( arr[i]> arr[j])
            {
                int aux= arr[j];
                arr[j]= arr[i];
                arr[i]=aux;

            }

        }

    }

}



void quickSort(int arr[], int balindex, int jobbindex) {

      int i = balindex, j = jobbindex;

      int tmp;

      int pivot = arr[(balindex + jobbindex) / 2];





      while (i <= j) {

            while (arr[i] < pivot){

                  i++;
            }
            while (arr[j] > pivot){

                  j--;
            }
            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      }



      if (balindex < j){

            quickSort(arr, balindex, j);
        }
      if (i < jobbindex){

            quickSort(arr, i, jobbindex);
        }
}

int main()
{
    int v[500000];
    srand(0);
    int n;

for(int i = 0; i<n; i++){

v[i]=rand()%511111;
}
//quickSort(v, 0, n);
normal(v);
    return 0;
}
