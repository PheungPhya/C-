#include<stdio.h>
#include<conio.h>
#include<time.h>
int *getrandom(){
	static int r[10];
	int i;
	srand((unsigned)time(NULL));
	
	for(i=0;i<10;i++){
		r[i]= rand()%20;
	}	
	return r;
}

int main(){

	int *s,i;
	s=getrandom();
	
	for(i=0;i<10;i++){
		printf("s[%d] = %d\n",i,*(s+i));
		getch();
	}
		
	return 0;
}
