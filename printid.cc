#include <iostream>


using namespace std;

void print_identitas();
void print_jumlah(int num1, int num2);
float hitung(int num1, int num2, char operan);
void print_nama(char nama[]);
int len_text(char text[]);
int max(int arr_num[], int n);

int main()
{
    print_identitas();
    print_jumlah(15, 12);
    float hasil = hitung(12, 15, '+');
    printf("%d %c %d = %2.2f\n", 12, '+', 15, hasil);
    hasil = hitung(12, 15, '-');
    printf("%d %c %d = %2.2f\n", 12, '-', 15, hasil);
    hasil = hitung(12, 15, 'x');
    printf("%d %c %d = %2.2f\n", 12, 'x', 15, hasil);
    hasil = hitung(12, 15, '/');
    printf("%d %c %d = %2.2f\n\n", 12, '/', 15, hasil);
    print_nama("Matthew Raymond");
    printf("Panjang nama = %d\n\n", len_text("Matthew Raymond"));
    int arr_num[] = {67, 23, 55, 87, 12, 40, 22};
    printf("Nilai tertinggi dari arr_num adalah = %d\n", max(arr_num, 7));

    return 0;
}

void print_identitas()
{
    printf("=============================\n");
    printf("Nama  : Matthew Raymond\n");
    printf("NIM   : A11.2021.13275\n");
    printf("Alamat: Kemuning, Semarang\n");
    printf("=============================\n\n");
}

void print_jumlah(int num1, int num2)
{
    printf("%d + %d = %d\n\n", num1, num2, num1 + num2);
}

float hitung(int num1, int num2, char operan)
{
    if (operan == '+')
    {
        return num1 + num2;
    }
    else if (operan == '-')
    {
        return num1 - num2;
    }
    else if (operan == 'x')
    {
        return num1 * num2;
    }
    else if (operan == '/')
    {
        return num1 / num2;
    }
    else
    {
        return 0;
    }
}

void print_nama(char nama[])
{
    printf("Nama : %s\n", nama);
}

int len_text(char text[])
{
    int i = 0;
    while (text[i] != '\0')
    {
        i++;
    }
    return i;
}

int max(int arr_num[], int n)
{
    int i;
    int max = arr_num[0];
    for (i = 1; i < n; i++)
    {
        if (arr_num[i] > max)
        {
            max = arr_num[i];
        }
    }
    return max;
}