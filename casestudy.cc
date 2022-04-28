#include <iostream>

using namespace std;

float NilaiAkhir(float nilai_tugas, float nilai_uts, float nilai_uas);
char GradeNilai (float NilaiAkhir);
void CetakNilai(float nilai_tugas, float nilai_uts, float nilai_uas);

int main()
{
    float Tugas, UTS, UAS;

    cout << "Masukkan nilai tugas: ";
    cin >> Tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> UTS;
    cout << "Masukkan nilai UAS: ";
    cin >> UAS;
    CetakNilai(Tugas, UTS, UAS);
    
    return 0;
}

float NilaiAkhir(float nilai_tugas, float nilai_uts, float nilai_uas)
{
    float hasil;
    hasil = (nilai_tugas * 0.4) + (nilai_uts * 0.3) + (nilai_uas * 0.3);
    return hasil;
}
char GradeNilai (float NilaiAkhir)
{
    if ((NilaiAkhir >= 80) && (NilaiAkhir <= 100))
        return 'A';
    else if ((NilaiAkhir >= 70) && (NilaiAkhir <= 79))
        return 'B';
    else if ((NilaiAkhir >= 60) && (NilaiAkhir <= 69))
        return 'C';
    else if ((NilaiAkhir >= 50) && (NilaiAkhir <= 59))
        return 'D';
    else
        return 'E';
}
void CetakNilai(float nilai_tugas, float nilai_uts, float nilai_uas)
{
    float nilai_akhir;
    char grade;
    
    nilai_akhir = NilaiAkhir(nilai_tugas, nilai_uts, nilai_uas);
    grade = GradeNilai(nilai_akhir);

    cout << "Nilai Tugas\t = " << nilai_tugas << endl;
    cout << "Nilai UTS\t = " << nilai_uts << endl;
    cout << "Nilai UAS\t = " << nilai_uas << endl;
    cout << "\nNilai Akhir\t = " << nilai_akhir << endl;
    cout << "Grade Nilai\t = " << grade << endl;
}