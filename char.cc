#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

using namespace std;
char gradeDaster(int harga);
float sumArrayFloat(float arrayFloat[], int sizeArray);
int main()
{
    int hargaDaster;
    char hasilGradeDaster;
    float IPKmhs[3] = {3.5, 4, 2.34};
    char nama[28];
    char fakul[50] = "Fakultas Ilmu Komputer";
    int x, y;
    
    // cout << "Masukkan Harga Daster = ";
    // cin >> hargaDaster;
    // hasilGradeDaster = gradeDaster(hargaDaster);
    // cout << "Grade daster " << hasilGradeDaster << endl;

    cout << "Jumlah IPK mhs = " << sumArrayFloat (IPKmhs, 3);

    strcpy(nama, "Universitas Dian Nuswantoro");
    printf("\n\nNama = %s", nama);
    printf("\nBanyaknya karakter = %d\n", strlen(nama));
    strcat(nama, fakul);
    printf("Hasil penggabungan = %s", nama);
    printf("\nHasil uppercase - lowercase = %s - %s\n", strupr(nama), strlwr(fakul));

    x = 3;
    y = 5;
    printf("%d pangkat %d = %f\n", x, y, pow(x, y));

    return 0;
}
char gradeDaster(int harga)
{
    char grade;
    if(harga > 300000)
        grade = 'A';
    else if(harga >= 100000 && harga<300000)
        grade = 'B';
    else
        grade = 'C';

    return grade;
}

float sumArrayFloat(float arrayFloat[], int sizeArray) {
    float sum = 0;

    for (int i=0; i<sizeArray; i++) {
        sum = sum + arrayFloat[i];
    }

    return sum;
}