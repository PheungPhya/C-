#include<stdio.h>
#include<windows.h>
int main(){
	
	int i,r,j;
	printf("input row (half of diamond) : ");
	scanf("%d",&r);
	start:
	for(i=0;i<=r;i++){
		system("Color A");
		for(j=1;j<=r-i;j++){
			system("Color B");
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			Sleep(1);
			system("Color D");
			printf("*");
		}
		printf("\n");
	}
	
	for(i=r-1;i>=1;i--){
		system("Color F");
		for(j=1;j<=r-i;j++){
			system("Color E");
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			Sleep(1);
			system("Color C");
			printf("*");
		}
		printf("\n");
	}
	
	goto start;
	
	return 0;
}
