#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	float sum=0;    // 1+2+3+...+n
	
	printf("Input n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum = sum + sqrt(i);
		printf("%.2f + ",sqrt(i));
	}
	printf("\b\b= %.2f",sum);
	return 0;
}
