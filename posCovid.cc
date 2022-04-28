#include <iostream>

using namespace std;

int main()
{
    int posCovid[7] = {123, 678, 53, 15, 89, 34, 231};
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    int sumPosCovid = 0;
    int maxPosCovid = 0;
    int minPosCovid = 1000;
    int iMax;
    int iMin;

    for(int i=0; i<7; i++) {
        cout << posCovid[i];
        if (i < 6) {
            cout << ", ";
        } else {
            cout << ".";
        }
        sumPosCovid = sumPosCovid + posCovid[i];
        if (posCovid[i] > maxPosCovid) {
            maxPosCovid = posCovid[i];
            iMax = i;
        }
        if (posCovid[i] < minPosCovid) {
            minPosCovid = posCovid[i];
            iMin = i;
        }
    }
    cout << endl << "Jumlah Positive Covid-19 Kota Semarang 21-27 Feb = " << sumPosCovid << endl;
    cout << "Jumlah Positive Covid-19 terbanyak = " << maxPosCovid <<" di hari " << hari [iMax] << endl;
    cout << "Jumlah Positive Covid-19 tersedikit = " << minPosCovid <<" di hari " << hari [iMin] << endl;

    return 0;
}