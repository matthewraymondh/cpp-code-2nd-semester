#include <iostream>

using namespace std;

int Max2 (int angka1, int angka2);

void Max2P(int angka1, int angka2);
void InputBilangan();

int angka1, angka2;

int main()
{
    InputBilangan();
    cout << "(Dari Fungsi) Nilai terbesar dari " << angka1 <<" dan " << angka2 << " adalah " << Max2(angka1, angka2) << endl;
    cout << "(Dari Prosedur) Nilai terbesar dari " << angka1 <<" dan " << angka2 << " adalah ";
    Max2P(angka1, angka2);
    
    return 0;
}
int Max2 (int angka1, int angka2)
{
    if (angka1 >= angka2)
        return angka1;
    else
        return angka2;
}
void Max2P(int angka1, int angka2)
{
    if (angka1 >= angka2)
        cout << angka1 << endl;
    else
        cout << angka2 << endl;
}
void InputBilangan()
{
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
}