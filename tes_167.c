#include<stdio.h>
#include<time.h>

int *getRandom(){
	
	static int r[50];
	int i;
	
	srand((unsigned)time(NULL));
	
	for(i=0;i<10;i++){
		r[i]= rand()%8;
	}
	
	return r;
	
}

int main(){
	int i;
	int *random = NULL;
	
	random = getRandom();
	
	for(i=0;i<10;i++){
		printf("Number is %d\n",*(random+i));
		if(*(random+i)==9){
			printf("You win\n");
		}
	}
	
		
	return 0;
}
