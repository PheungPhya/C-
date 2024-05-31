#include<stdio.h>
int *getRandom(){
	static int r[10];
	int i;
	srand((unsigned)time(NULL));
	
	for(i=0;i<10;i++){
		r[i]=rand()%50;
	}
	
	return r;
}

int main(){
	int *get;
	int i;
	get = getRandom();
	
	for(i=0;i<10;i++){
		printf("Value = %d\n",*(get+i));
		if(*(get+i)==1){
			printf("You win 1000,000.00$\n");
		}
	}
	
	
	return 0;
}
