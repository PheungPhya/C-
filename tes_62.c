#include<stdio.h>
#include<windows.h>
int main(){
	int x,y;
	printf("Input x y : ");
	scanf("%d %d",&x,&y);	
	printf("%d + %d = %d\n",x,y,x+y);
	printf("%d - %d = %d\n",x,y,x-y);
	printf("%d %% %d = %d\n",x,y,x%y);
	
	printf("===========> <===========\n");
	float x1,y1;
	printf("Input x1 y1 : ");
	scanf("%f %f",&x1,&y1);
	printf("%.2f * %.2f = %.2f\n",x1,y1,x1*y1);
	printf("%.2f / %.2f = %.2f\n",x1,y1,x1/y1);
	
	return 0;
}
