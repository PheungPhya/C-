#include<stdio.h>
int main(){
	
	int a;
	printf("Input a : ");
	scanf("%d",&a);
	printf("A = %d\n",a);
	
	long b;
	printf("Input b : ");
	scanf("%ld",&b);
	printf("B = %ld\n",b);
	
	float c;
	printf("Input value c : ");
	scanf("%f",&c);
	printf("C = %.3f\n",c);
	
	double d;
	printf("Input value d : ");
	scanf("%lf",&d);
	printf("D = %.2lf\n",d);
	
	char gender;
	printf("Input your gender : ");
	fflush(stdin);
	scanf("%c",&gender);
	printf("Gender = %c\n",gender);
	
	char name[50];
	printf("Input your name : ");
	gets(name);
	// scanf("%s",&name);
	printf("My name is : %s\n",name);
	
	return 0; 
}
