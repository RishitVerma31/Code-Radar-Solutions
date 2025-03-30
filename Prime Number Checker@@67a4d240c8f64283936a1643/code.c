void isPrime(int num){
    scanf("%d",&num);
    int a[100],i,j,c=0;
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++){
        for(j=2;j<=num/2;j++){
            if(a[i]%j==0){
                c++;
            }}
            if(c>0){
                b[i]=0;
            }
            else{
                b[i]=1;
            }
        }
        for(i=0;i<num;i++)
        return b[i];
    }
