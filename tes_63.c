#include<stdio.h>
int main(){
	float s1,s2,s3,s4,s5;
	float total,average;
	char grade;
	
	printf("Enter Score1 : ");
	scanf("%f",&s1);
	
	printf("Enter Score2 : ");
	scanf("%f",&s2);
	
	printf("Enter Score3 : ");
	scanf("%f",&s3);
	
	printf("Enter Score4 : ");
	scanf("%f",&s4);
	
	printf("Enter Score5 : ");
	scanf("%f",&s5);
	
	total = s1 + s2 + s3 + s4 + s5 ;
	average = total / 5; // (s1 + s2 + s3 + s4 + s5)/5;
	
	if(average >= 90 && average <=100){
		grade = 'A';
	}else if(average >=80 && average < 90){
		grade = 'B';
	}else if(average >=70 && average < 80){
		grade = 'C';
	}else if(average >=60 && average < 70){
		grade = 'E';
	}
	else if(average >=50 && average < 60){
		grade = 'E';
	}else{
		grade = 'F';
	}
	
	printf("==============================> Students Informantion <======================\n");
	printf("%10s %10s %10s %10s %10s %10s %10s %10s\n","Score1","Score2","Score3","Score4","Score5","Total","Average","Grade");
	printf("%10.2f %10.2f %10.2f %10.2f %10.2f %10.2f %10.2f %10c\n",s1,s2,s3,s4,s5,total,average,grade);
	
	
	return 0;
}
