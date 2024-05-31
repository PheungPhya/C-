#include<stdio.h>
int main(){
	float s1,s2,s3;
	float total,average;
	char grade;
	
	printf("Input Score 1 : ");scanf("%f",&s1);
	printf("Input Score 2 : ");scanf("%f",&s2);
	printf("Input Score 3 : ");scanf("%f",&s3);
	
	total=s1+s2+s3;
	average=total/3;
	if(average >= 90 && average <= 100){
		grade='A';
	}else if(average >= 80 && average < 90){
		grade='B';
	}else{
		grade='F';
	}
	printf("============================================================\n");
	printf("%-10s %-10s %-10s %-10s %-10s %-10s\n","Score1","Score2","Score3","Total","Average","Grade");
	printf("------------------------------------------------------------\n");
	printf("%-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10c\n",s1,s2,s3,total,average,grade);
	printf("============================================================\n");
	
	return 0;
}
