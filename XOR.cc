#include <iostream>

using namespace std;

void swapAngka(int x, int y);

int main()
{
    int a = 10;
    int b = 3;

    cout << "Sebelum swab\na = " << a << "\tb = " << b << endl;
    swapAngka(a,b);

    return 0;
}

void swapAngka(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Setelah swab\na = " << x << "\tb = " << y << endl;
}