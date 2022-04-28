#include <iostream>
#include <bits/stdc++.h>
#include "header.h"
using namespace std;
int main()
{
    cout << "Nama: Matthew Raymond Hartono" << endl;
    cout << "NIM: A11.2021.13275" << endl;
    cout << "Kelas: 4208\n" << endl;
     cout << "===========================================\n";
    cout << "No 1" << endl;
    int arr1[] = {3, 5, 38, 0, 44, 47};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << " ";
    compress_array(arr1, n1);
    int arr2[] = {3, 0, 44, 38, 0, 5, 47};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << " ";
    compress_array(arr2, n2);
    int arr3[] = {2, 15, 0, 0, 0, 26, 27, 36};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << " ";
    compress_array(arr3, n3);
    int arr4[] = {15, 36, 27, 0, 0, 2, 26};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    cout << " ";
    compress_array(arr4, n4);
    cout << endl;
    cout << "No 2" << endl;
    int arr11[] = {3, 44, 38, 5, 47};
    int a11 = sizeof(arr11) / sizeof(arr11[0]);
    cout << "Arr1" << endl;
    selectionSort1(arr11, a11);
    printArray(arr11, a11);
    int arr12[] = {15, 36, 27, 2, 26};
    int a12 = sizeof(arr12) / sizeof(arr12[0]);
    cout << "\nArr2" << endl;
    selectionSort1(arr12, a12);
    printArray(arr12, a12);
    cout << endl;
    cout << "No 3" << endl;
    int arr31[] = {3, 44, 38, 5, 47};
    int x1 = sizeof(arr31) / sizeof(arr31[0]);
    int arr32[] = {15, 36, 27, 2, 26};
    int x2 = sizeof(arr32) / sizeof(arr32[0]);
    cout << "Arr 1 \n";
    selectionSort2(arr31, x1);
    printArray(arr31, x1);
    cout << endl;
    cout << "Arr 2 \n";
    selectionSort2(arr32, x2);
    printArray(arr32, x2);
    cout << endl;
    cout << "No 4" << endl;
    int arr41[] = {3, 44, 38, 5, 47};
    int y1 = sizeof(arr41) / sizeof(arr41[0]);
    cout << "Median : " << get_median(arr41, y1) << endl;
    int arr42[] = {15, 36, 27, 2, 26};
    int y2 = sizeof(arr42) / sizeof(arr42[0]);
    cout << "Median : " << get_median(arr42, y2) << endl;
    return 0;
}
