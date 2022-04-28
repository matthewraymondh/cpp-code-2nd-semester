#include <iostream>

using namespace std;

int main()
{
    int x, hh, sisaDetik, mm, ss;

    cout << "Masukan detik = ";
    cin >> x ;
    hh = x/3600;
    sisaDetik = x%3600;
    mm = sisaDetik/60;
    ss = sisaDetik%60;
    cout << x << " detik sama dengan " << hh << ":" << mm << ":" << ss << endl;

    return 0;
}