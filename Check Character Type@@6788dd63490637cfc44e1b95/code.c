#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    char b[100];
    char c[100];
    c="aeiou";
    b="bcdfghjklmnpqrstvwxyz";
    if(a in b)
    printf("Consonant");
    else if(a in c)
    printf("Vowel");
}