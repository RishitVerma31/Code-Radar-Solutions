#include <stdio.h>
int main() {
    int a,n;
    scanf("%d %d",&a ,&n);
  //  if((n>sizeof(a))||(n<sizeof(a))|| sizeof(a)==0){
    //    printf("1");
    //}
    //else{
    if( a&(1<<(n))){
        printf("1");
    }
    else{
        printf("0");
    }
    
    return 0;
}