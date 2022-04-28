#include <iostream>
#include "header.h"

using namespace std;
void insertionSort(int arr[], int n);
int main()
{
    int arrI[] = {9, 27, 12, 44};
    int sI = sizeof(arrI) / sizeof(arrI[0]);

    cout << "Sebelmun array proses InsertionSort\n";
    printArray(arrI, sI);
    insertionSort(arrI, sI);
    cout << "Sesudah array proses InsertionSort\n";
    printArray(arrI, sI);
    return 0;
}