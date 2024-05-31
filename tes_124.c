#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	a:
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			Sleep(300);
			system("Color D");
			printf("%d  ",j);
			Sleep(300);
			system("Color A");
		}
		printf("\n");
	}
	goto a;
	
	return 0;
}
