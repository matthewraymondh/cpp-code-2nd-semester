#include <iostream>
#include <stdio.h>

using namespace std;

int Max2(int a, int b);
int Max3(int a, int b, int c);
int Max4(int a, int b, int c, int d);
int isGanjil(int N);
int isPrima(int N);
int NumOfPrima(int N);
int Pangkat(int basis, int eksp);
int SumOfN(int N);
int ProductOfN(int N);
float Average(int N, int Count);
float AveSumOfN(int N);
float AveProdOfN(int N);
int FPB(int n, int m);
float C2F(float C);
float F2C(float F);
float C2R(float C);
float R2C(float R);
float Cel2Cal(float Cal);
float Cal2Cel(float Cel);
float R2F(float R);
float F2R(float F);


int main()
{
    printf("Max 2 --> 2 dan 5     : %d\n", Max2(2, 5));
    printf("Max 3 --> 2, 5, 1     : %d\n", Max3(2, 5, 1));
    printf("Max 4 --> 7, 2, 5, 1  : %d\n", Max4(7,2,5,1));
    printf("isGanjil --> 7        : %d\n", isGanjil(7));
    printf("isPrime  --> 17       : %d\n", isPrima(17));
    printf("IsPrima --> 70        : %d\n", isPrima(70));
    printf("NumOfPrima --> 17     : %d\n", NumOfPrima(17));
    printf("Pangkat --> 2^4       : %d\n", Pangkat(2,4));
    printf("SumOfN --> 15         : %d\n", SumOfN(15));
    printf("ProductOfN --> 15     : %d\n", ProductOfN(15));
    printf("Average --> 15        : %f\n", Average(70, 80));
    printf("AveSumOfN --> 15      : %f\n", AveSumOfN(15));
    printf("AveProdOfN --> 15     : %f\n", AveProdOfN(15));
    printf("FPB --> 36 & 48       : %d\n", FPB(36,48));
    printf("C2F --> 15            : %.2f F\n", 72.5, C2F(72.5));
    printf("F2C --> 15            : %.2f C\n", 13.5, F2C(13.5));
    printf("C2R --> 15            : %.2f R\n", 72.5, C2R(72.5));
    printf("R2C --> 15            : %.2f C\n", 22.5, R2C(22.5));
    printf("Cel2Cal --> 15        : %.2f K\n", 72.5, Cel2Cal(72.5));
    printf("Cal2Cel --> 15        : %.2f C\n", 172.5, Cal2Cel(172.5));
    printf("R2F --> 15            : %.2f F\n", 72.5 , R2F(72.5));
    printf("F2R --> 15            : %.2f R\n", 62.5, F2R(62.5));

    return 0;
}

int Max2(int a, int b) {
    if (a>b) {
        return a;
    } else {
        return b;
    }
}

int Max3(int a, int b, int c) {
    if (a>b && a>c) {
        return a;
    } else if (b>a && b>c) {
        return b;
    } else {
        return c;
    }
}

int Max4(int a, int b, int c, int d) {
    if (a>b && a>c && a>d) {
        return a;
    } else if (b>a && b>c && b>d) {
        return b;
    } else if (c>a && c>b && c>d) {
        return c;
    } else {
        return d;
    }
}

int isGanjil(int N) {
    if (N%2 != 0) {
        return 1;
    } else {
        return 0;
    }
}

int isPrima(int N) {
    int i;
    if(N==0||N==1) {
        return 0;
    }
    for(i=2; i<=N/2; i++) {
        if(N%i==0) {
            return 0;
            break;
        } else {
            return 1;
        }
    }
}

int NumOfPrima(int N) {
    int i,j;
    int total=0;
    if(N==0||N==1) {
        return 0;
    }

    for(i=2; i<=N; i++) {
        bool isPrime=true;
        for(j=2; j*j<=i; j++) {
            if(i%j==0) {
                isPrime=false;
                break;
            }
        }
        if(isPrime) {
            total=total+i;
        }
    }

    return total;
}

int Pangkat(int basis, int eksp) {
    if (eksp == 0) {
        return 1;
    }

    int total = basis;
    int incr = basis;

    int i,j;
    for(i=1; i<eksp; i++) {
        for(j=1; j<basis; j++) {
            total += incr;
        }
        incr=total;
    }
    return total;
}

int SumOfN(int N) {
    int total=0;
    for(int i=0; i<=N; ++i) {
        total += i;
    }

    return total;
}

int ProductOfN(int N) {
    int total=0;
    int counter=0;
    for(int i=0; i<=N; ++i) {
        total = counter*i;
        counter += i;
    }

    return total;
}

float Average(int N, int Count) {
    int i;
    int total=0;
    float avg;
    for(i=0; i<=N; ++i) {
        total += i;
    }
    avg=total/Count;
    return avg;
}

float AveSumOfN(int N) {
    int i;
    int total=0;
    float avg;

    for(i=0; i<=N; i++) {
        total+=i;
    }

    avg=total/N;
    return avg;
}

float AveProdOfN(int N) {
    int i;
    int counter=0;
    int total=0;
    float avg;

    for(i=0; i<=N; i++) {
        total=counter*i;
        counter+=i;
    }

    avg=total/N;
    return avg;
}

int FPB(int n, int m) {
    int counter;

    counter = n%m;
    while(counter!=0) {
        n=m;
        m=counter;
        counter=n%m;
    }

    return m;
}

float C2F(float C) {
    float F;
    F=(C*9/5)+32;
    return F;
}

float F2C(float F) {
    float C;
    C=(F-32)*5/9;
    return C;
}

float C2R(float C) {
    float R;
    R=(C*9/5)+491.67;
    return R;
}

float R2C(float R) {
    float C;
    C=(R-491.67)*5/9;
    return C;
}

float Cel2Cal(float Cel) {
    float Cal;
    Cal=Cel+273;
    return Cal;
}

float Cal2Cel(float Cal) {
    float Cel;
    Cel=Cal-273;
    return Cel;
}

float R2F(float R) {
    float F;
    F=R-459.67;
    return F;
}

float F2R(float F) {
    float R;
    R=F+459.67;
    return R;
}