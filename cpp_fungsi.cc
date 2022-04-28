#include <iostream>

using namespace std;

int isGenap(int i);
int tambah(int a, int b);
float luasLingkaran(float r);
float luasSegitiga(float a, float t);

int main()
{
    int i, j, xx;
    float r, luasLing;
    float a, t;
    cout << "Masukkan angka pertama: ";
    cin >> i;
    cout << "Apakah nilai "<<i<<" genap? "<<isGenap(i)<<endl;
    xx = isGenap(i);
    cout << "Apakah nilai "<<i<<" genap? "<<xx<<endl;
    cout << "Masukkan angka kedua: ";
    cin >> j;
    cout << "Hasil penjumlahan "<<i<<" dan "<<j<<" adalah "<<tambah(i, j)<<endl;
    cout << "Masukan jari-jari: ";
    cin >> r;
    luasLing = luasLingkaran(r);
    cout << "Luas lingkaran dengan jari-jari "<<r<<" adalah "<<luasLing<<endl;
    cout << "Masukan alas: ";
    cin >> a;
    cout << "Masukan tinggi: ";
    cin >> t;
    cout << "Luas segitiga dengan alas "<<a<<" dan tinggi "<<t<<" adalah "<<luasSegitiga(a, t)<<endl;
    
    return 0;
}

int isGenap(int i)
{
    // if(i%2==0)
    //     return 1;
    // else
    //     return 0;
    return i%2==0;
}

int tambah(int a, int b)
{
    return a+b;
}

float luasLingkaran(float r)
{
    return 3.14*r*r;
}

float luasSegitiga(float a, float t)
{
    return a*t/2;
}