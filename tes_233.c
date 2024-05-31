#include<stdio.h>
int main(){
	int x=100;
	long y=200;
	float z=12.34;
	double w=15.55;
	char gender='F';
	char name[20]="mara kota";
	
	printf("x = %d\n",x);
	printf("y = %ld\n",y);
	printf("z = %.2f\n",z);
	printf("w = %.2lf\n",w);
	printf("gender = %c\n",gender);
	printf("name = %s\n\n",name);
	
	printf("a = %d\n",200);
	printf("b = %ld\n",50000);
	printf("c = %f\n",15.45);
	printf("d = %lf\n",156.3334);
	printf("e = %c\n",'M');
	printf("f = %s\n","hello");
	
	
	return 0;
}
