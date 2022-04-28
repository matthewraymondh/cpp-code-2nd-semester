#include <iostream>
#include "header.h"

using namespace std;

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

    cout << "count array 1 =" << count_array(arr1, s1) <<endl;
    cout << "count array 2 =" << count_array(arr2, s2) <<endl;
    cout << "count array 2 =" << count_array(arr3, s3) <<endl;
    cout << "count array 2 =" << count_array(arr4, s4) <<endl;

    if (cek_urut(arr5, s5))
        cout << "\nTrue\n";
    else
        cout << "False\n";

    if (cek_urut(arr6, s6))
        cout << "True\n";
    else
        cout << "False\n";

    if (cek_urut(arr7, s7))
        cout << "True\n";
    else
        cout << "False\n";

    if (cek_urut(arr8, s8))
        cout << "True\n";
    else
        cout << "False\n\n";

    int arr9[] = { 3, 44, 38, 5, 47 };
    int arr10[] = { 15, 36, 27, 2, 26 };

    bubble_sort1(arr9, 5);
    printArray(arr9, 5);
    cout << endl;
    bubble_sort1(arr10, 5);
    printArray(arr10, 5);
    cout << endl;

    int arr11[] = { 3, 44, 38, 5, 47 };
    int arr12[] = { 15, 36, 27, 2, 26 };

    bubble_sort2(arr11, 5);
    cout << endl;
    bubble_sort2(arr12, 5);
    cout << endl;
    return 0;
    return 0;
}