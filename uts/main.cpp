#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << arr[i] << " -> ";

        else
            cout << arr[i];
    }
    cout << endl;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;

    for (i = 0; i <
                n - 1;
         i++)
    {
        min_idx =
            i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx =
                    j;
            }
        }

        temp = arr[min_idx];

        arr[min_idx] = arr[i];
        arr[i] = temp;

        printArray(arr, n);
    }
}

int main()
{
    int arrS[] = {1, 6, 28, 45, 3, 22};
    int ss = sizeof(arrS) / sizeof(
                                arrS[0]);

    cout << "Array Sebelum Sorting Selection: \n";
    printArray(arrS, ss);
    cout << "Array Setelah Sorting Selection: \n";
    selectionSort(arrS, ss);
    printArray(arrS, ss);

    return 0;
}