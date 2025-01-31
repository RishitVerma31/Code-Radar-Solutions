#include <stdio.h>
int main() {
    int a,n;
    scanf("%d %d",&a ,&n);
    if(n>sizeof(a)){
        printf("Invalid");
    }
    else{
    if( a&(1<<(n-1))){
        printf("0");
    }
    else{
        printf("1");
    }
    }
    return 0;
}