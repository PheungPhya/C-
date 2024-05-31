#include<stdio.h>
int main(){
	
	int a=10;
	int b=20;
	
	// Login And
	printf("a = %d , b = %d\n",a,b);
	printf(" a>b && a>5 = %d\n",a>b&&a>5);  // false
	printf(" a<b && a>5 = %d\n",a<b&&a>5);  // true
	printf(" 10>=10 && 20!=10 = %d\n",10>=10 && 20!=10);  // true
	printf(" 20<20 && 50<=40 = %d\n\n",20<20 && 50<=40);  // false
	
	// Login OR
	printf("10>=20 || 10==10 = %d\n",10>=20 || 10==10);  // true
	printf("50!=60 || 50<=50 = %d\n",50!=60 || 50<=50); // true
	printf("80!=80 || 80==90 = %d\n",80!=80 || 80==90); // false
	printf("70>20  || 70<90  = %d\n",70>20  || 70<90);   // true
	
	
	return 0;
}
