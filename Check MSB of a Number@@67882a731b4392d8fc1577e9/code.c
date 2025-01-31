#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a & 1){
        printf(" NotSet");
    }
    else{
        printf("Set");
    }
    return 0;
}