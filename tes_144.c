#include<stdio.h>
int main(){
	
	int x=200;
	int y=100;
	
	int *p1,**p2,***p3;
	
	p1=&x;
	p2=&p1;
	p3=&p2;
	
	printf("x = %d\n",x);
	printf("*p1 = %d\n",*p1);
	printf("**p2 = %d\n",**p2);
	printf("***p3 = %d\n",***p3);
	
	
	**p3=&y;
        
    
    printf("y = %d\n",y);
	printf("*p1 = %d\n",*p1);
	printf("**p2 = %d\n",**p2);
	printf("***p3 = %d\n",***p3);

	return 0;
}
