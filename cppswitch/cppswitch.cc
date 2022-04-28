#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int a, b;
    a=3; b=10;

    cout << "Nilai a = " << a << " dan b = " << b << endl;
    tukar(a, b);
    cout << "Nilai a = " << a << " dan b = " << b << endl;

    int arrB[] = {7, 57, 49, 3};
    int sB = sizeof(arrB)/sizeof(arrB[0]);

    cout << sizeof(arrB)/sizeof(arrB[0]) << endl;
    
    cout << "\nBubble Sort method: " << endl;
    cout << "Array sebelum diurutkan: ";
    printArray(arrB, sB);
    bubleSort(arrB, sB);
    cout << "Array setelah diurutkan: ";
    printArray(arrB, sB);

    cout << "\nSelection Sort method: ";
    int arrS[] = {7, 30, 3, 22};
    int sS = sizeof(arrS)/sizeof(arrS[0]);

    cout << "\nArray sebelum diurutkan: ";
    printArray(arrS, sS);
    selectionSort(arrS, sS);
    cout << "Array setelah diurutkan: ";
    printArray(arrS, sS);

    return 0;
}
