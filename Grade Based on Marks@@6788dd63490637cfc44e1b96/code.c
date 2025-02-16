#include <stdio.h>
int main()
{
    int a;
    char b[10];
    scanf("%d",&a);
    if(a>=90);
    b='A';
    else if(a<90 && a>=80)
    b='B';
    else if(a<80 && a>=70)
    b='C';
    else if(a<70 && a>=60)
    b='D';
    else
    b='F';
    printf("%c",b);
}