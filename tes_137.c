#include<stdio.h>


int sum(int n){
    int s=0,i;
    for(i=1;i<=n;i++){
        s+=i; 
    }
    return s;
}

int main(){    
    int n;
    int total;
    printf("Input n : ");   scanf("%d",&n);
    
    total=sum(n);
    printf("1+2+3+..+n = %d\n",total);
    printf("1+2+3+..+n = %d",sum(n));
        
    return 0;
}

