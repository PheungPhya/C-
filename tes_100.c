#include<stdio.h>
int main(){
	
	int op,x,y;
	
	printf("Input x : ");
	scanf("%d",&x);
	printf("Input y : ");
	scanf("%d",&y);
	start:
	printf("[1]. + \n");
	printf("[2]. - \n");
	printf("[3]. * \n");
	printf("[4]. / \n");
	printf("===========\n");
	printf("choose one number : ");
	scanf("%d",&op);
	
	switch(op){
		
		case 1:{
				printf("X + Y = %d\n",x+y);
			break;
		}
		case 2:{
				printf("X - Y = %d\n",x-y);
			break;
		}
		case 3:{
				printf("X * Y = %d\n",x*y);
			break;
		}
		case 4:{
				printf("X / Y = %d\n",x/y);
			break;
		}
		default :{
				printf("banh jol kos hz.\n");				
				goto start;
			break;
		}	
	}	
	
	
	return 0;
}
