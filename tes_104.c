#include<stdio.h>

int main(){
	
	float s1,s2,s3,s4,s5;
	float total,avg;
	char grade;
	
	printf("Input score 1 : ");
	scanf("%f",&s1);
	printf("Input score 2 : ");
	scanf("%f",&s2);
	printf("Input score 3 : ");
	scanf("%f",&s3);
	printf("Input score 4 : ");
	scanf("%f",&s4);
	printf("Input score 5 : ");
	scanf("%f",&s5);
	
	total = s1 + s2 + s3 + s4 + s5 ;
	avg = total / 5;
	if(avg >= 90 && avg <= 100){
		grade = 'A';
	}else if(avg >= 80 && avg < 90){
		grade = 'B';
	}else if(avg >= 70 && avg < 80){
		grade = 'C';
	}else if(avg >= 60 && avg < 70){
		grade = 'D';
	}else if(avg >= 50 && avg < 60){
		grade = 'E';
	}else{
		grade = 'F';
	}
	
	printf("Total Score = %.2f\n",total);
	printf("Average = %.2f\n",avg);
	printf("Grade = %c\n",grade);
	
	return 0;
}
