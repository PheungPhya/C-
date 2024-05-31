#include<stdio.h>
int main(){
	
	int totalsec,hour,min,sec;
	
	printf("Enter TotalSeconds : ");
	scanf("%d",&totalsec);
	
	hour = totalsec / 3600;
	min  = (totalsec % 3600) / 60;
	sec  = (totalsec % 3600) % 60;
	
	printf("%dh : %dmin : %dseconds",hour,min,sec);
	
		
	return 0;
}
