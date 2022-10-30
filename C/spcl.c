//Special number in c program
    #include<stdio.h>
    int fact(int x){
        int f=1;
        for(int j=1;j<=x;j++){
            f*=j;
        }
        return f;
    }
    void main(){
        int n,m,sf=0,r;
        printf("\nEnter the number: ");
        scanf("%d",&n);
        m=n;
        while(m>0){
            r=m%10;
            sf+=fact(r);
            m/=10;
        }
        if(sf==n){
            printf("\n%d is a special number: ",sf);
        }
        else{
            printf("\n%d is not a special number: ",n);
        }
    }