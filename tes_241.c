#include<stdio.h>
int main(){
	
	float s1,s2,s3,s4,s5;
	float total,average;
	
	printf("Enter Score1 = ");  scanf("%f",&s1);
	printf("Enter Score2 = ");  scanf("%f",&s2);
	printf("Enter Score3 = ");  scanf("%f",&s3);
	printf("Enter Score4 = ");  scanf("%f",&s4);
	printf("Enter Score5 = ");  scanf("%f",&s5);
	
	total=s1+s2+s3+s4+s5;
	average=total/5;
	printf("============================\n");
	printf("Score1 = %.2f\n",s1);
	printf("Score2 = %.2f\n",s2);
	printf("Score3 = %.2f\n",s3);
	printf("Score4 = %.2f\n",s4);
	printf("Score5 = %.2f\n",s5);
	printf("Total = %.3f\n",total);
	printf("Average = %.3f\n",average);
	
	return 0;
}
