#include <iostream>
//#include "header.h"

using namespace std;

int countArray(int a[], int size);
int arraySort(int arr[], int n);


int main()
{
    int arr1[10]={1, 2, 3, 4, 5, 6, 0, 0, 0, 0};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[10]={1, 2, 3, 4, 0, 0 ,0, 0, 0, 0};
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[]={2, 4, 9, 5, 2, 0, 0, 0, 0, 0};
    int s3 = sizeof(arr3)/sizeof(arr3[0]);
    int arr4[]={2, 8, 5, 0, 0, 0, 0, 0, 0, 0};
    int s4 = sizeof(arr4)/sizeof(arr4[0]);

    int arr5[] = { 3, 5, 38, 44, 47 };
    int s5 = sizeof(arr5)/sizeof(arr5[0]);
    int arr6[] = { 3, 44, 38, 5, 47 };
    int s6 = sizeof(arr6)/sizeof(arr6[0]);
    int arr7[] = { 2, 15, 26, 27, 36 };
    int s7 = sizeof(arr7)/sizeof(arr7[0]);
    int arr8[] = { 15, 36, 27, 2, 26 };
    int s8 = sizeof(arr8)/sizeof(arr8[0]);

    cout << "count array 1 =" << countArray(arr1, s1) <<endl;
    cout << "count array 2 =" << countArray(arr2, s2) <<endl;
    cout << "count array 2 =" <<countArray(arr3, s3) <<endl;
    cout << "count array 2 =" <<countArray(arr4, s4) <<endl;

    if (arraySort(arr5, s5))
        cout << "True\n";
    else
        cout << "False\n";

    if (arraySort(arr6, s6))
        cout << "True\n";
    else
        cout << "False\n";

    if (arraySort(arr7, s7))
        cout << "True\n";
    else
        cout << "False\n";

    if (arraySort(arr8, s8))
        cout << "True\n";
    else
        cout << "False\n";


    return 0;
}

int countArray(int a[], int l){
   int i, j, k = 0;
   for (i = 1; i < l; i++){
      for (j = 0; j < i; j++){
         if (a[i] == a[j]){
            break;
         }
      }
      if (i == j){
         k++;
      }
   }
   return k;
}

int arraySort(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;

    if (arr[n - 1] < arr[n - 2])
        return 0;

    return arraySort(arr, n - 1);
}