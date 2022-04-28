#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

int count_array(int data[], int jml_data)
{
    int i, j, k = 0;
    for (i = 1; i < jml_data; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (data[i] == data[j])
            {
                break;
            }
        }
        if (i == j)
        {
            k++;
        }
    }
    return k;
}
int cek_urut(int data[], int jml_data)
{
    if (jml_data == 1 || jml_data == 0)
        return 1;

    if (data[jml_data - 1] < data[jml_data - 2])
        return 0;

    return cek_urut(data, jml_data - 1);
}
void bubble_sort1(int data[], int jml_data){
    int i,j,k,temp;
    for(i = 0; i < jml_data - 1; i++){
        for(j = 0; j < jml_data; j++){
            cout << data[j] << " ";
        }
        cout << "\n";
        for(k = 0; k < jml_data - i - 1; k++){
            if(data[k] > data[k+1]){
                temp = data[k+1];
                data[k+1] = data[k];
                data[k] = temp;
            }
        }
    }
}

void printArray(int data[], int jml_data){
    int i;
    for(i = 0; i < jml_data; i++){
        cout << data[i] << " ";
    }
    cout << "\n\n";
}
bool is_sort(int data[], int jml_data) {
    bool is_sort = true;
    int tempVal = 0;

    for(int i = 0; i < (jml_data+1); i++){
        if(tempVal > data[i]){
            is_sort = false;
        }
        tempVal = data[i];
    }

    return is_sort;
}

void bubble_sort2(int data[], int n) {
    int i, j, temp;
    int show = 0;
    for(i=0; i<n-1; i++){
        for(j=0; j<(n-i-1); j++){
            if(data[j]>data[j+1]){
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }

        int if_sort = is_sort(data, (n-1));

        if(show == 0){
            for(int j=0; j<n; j++){
                cout << data[j] << " ";
            }
            cout << endl;

            if(if_sort == 1){
                show = 1;
            }
        }
    }
}


#endif