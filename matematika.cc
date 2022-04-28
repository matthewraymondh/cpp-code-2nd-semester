#include <iostream>
#include <stdio.h>

using namespace std;
int Max3(int a, int b, int c);
int Max4(int a, int b, int c, int d);
int isGanjil(int N);
int main()
{
    printf("Max3 --> 2, 5,1 : %d\n",Max3(2,5,1));
    printf("Max4 --> 7, 2, 5,1 : %d\n",Max4(7,2,5,1));
    printf ("isGanjil 93 : %d\n",isGanjil(93));
    printf ("isGanjil 1324 : %d\n",isGanjil(1324));
    return 0;
}
int Max3(int a, int b, int c)
{
    if(a > b && a > c)
        return a;
    else if(b > a && b > c)
        return b;
    else
        return c;
}
int Max4(int a, int b, int c, int d)
{
    if(a>b && a>c && a>d)
        return a;
    else if(b>a && b>c && b>c)
        return b;
    else if(c>a && c>b && c>d)
        return c;
    else
        return d;
}
int isGanjil(int N)
{
    if(N%2!=0)
        return 1;
    else
        return 0;
}