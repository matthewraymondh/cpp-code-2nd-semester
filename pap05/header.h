#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

void compress_array(int data[], int jml_data)
{
    for (int i = 0; i < jml_data; i++)
    {
        if (data[i] == 0)
        {
            cout << "";
        }
        else
        {
            cout << data[i] << " ";
        }
    }
    cout << "\n";
}
void tukar(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void printArray(int data[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
void selectionSort1(int data[], int n)
{
    int i, j, minn;
    for (i = 0; i < n - 1; i++)
    {
        minn = i;
        for (j = i + 1; j < n; j++)
        {
            if (data[j] < data[minn])
            {
                minn = j;
            }
        }
        tukar(data[minn], data[i]);
        for (int a = 0; a < n; a++)
        {
            cout << data[a] << " ";
        }
        cout << endl;
    }
}
void selectionSort2(int data[], int n)
{
    int i, j, k, minn;
    for (i = 0; i < n - 1; i++)
    {
        minn = i;
        for (j = i + 1; j < n; j++)
        {
            if (data[j] < data[minn])
            {
                minn = j;
            }
        }
        tukar(data[minn], data[i]);
        for (k = 0; k < n; k++)
        {
            if ((data[0] < data[1] && data[0] < data[2] && data[0] < data[3] && data[0] < data[4]) &&
                (data[1] < data[2] && data[1] < data[3] && data[1] < data[4]) && (data[2] < data[3] && data[2] < data[4]) &&
                data[3] < data[4])
            {
                cout << "";
            }
            else
            {
                cout << data[k] << " ";
            }
        }
        if ((data[0] < data[1] && data[0] < data[2] && data[0] < data[3] && data[0] < data[4]) &&
            (data[1] < data[2] && data[1] < data[3] && data[1] < data[4]) && (data[2] < data[3] && data[2] < data[4]) &&
            data[3] < data[4])
        {
            cout << "";
        }
        else
        {
            cout << "\n";
        }
    }
}
double get_median(int data[], int n)
{
    sort(data, data + n);
    if (n % 2 != 0)
        return (double)data[n / 2];
    return (double)(data[(n - 1) / 2] + data[n / 2]) / 2.0;
}
#endif