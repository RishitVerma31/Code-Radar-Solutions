#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(i=n;i>=i;i--){
            printf("* ");
        }
    printf("\n");
    }
}