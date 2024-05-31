#include<stdio.h>
#include<time.h>
int *getRandom(){
	static int r[20];
	int i;
	srand((unsigned)time(NULL));
	
	for(i=0;i<10;i++){
		r[i]=rand()%10+10;   // 
	}
	return r;
}

int main(){
	
	int *result;
	int i;
	result=getRandom();
	
	for(i=0;i<10;i++){
		printf("Result = %d\n",*(result+i));
		
		if(*(result+i)==9){
			printf("You win 1000000$\n");
		}	
	}			
	return 0;
}
