#include <stdio.h>
int main() {
    char a[5];
    int b;
    char c[5];
    scanf("%s",a);
    scanf("%d",&b);
    scanf("%s",c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}