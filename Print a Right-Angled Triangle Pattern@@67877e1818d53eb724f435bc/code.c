#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=n;j>=i;j--){
            printf("* ");
        }
    printf("\n");
    }
}