#include<stdio.h>
#include<math.h>
int main(){
	
	int i,n;
	float sum=0;
	printf("Input n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum = sum + cos(i);
		printf("%.2f + ",cos(i));
	}
	printf("\b\b = %.2f",sum);
	
	
	return 0;
}
