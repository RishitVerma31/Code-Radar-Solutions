#include <stdio.h>
int main() {
    int a,n;
    scanf("%d %d",&a ,&n);
    if((n>sizeof(a))||(n<sizeof(a))|| sizeof(a)==1){
        printf("1");
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