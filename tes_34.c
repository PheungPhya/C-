#include<stdio.h>
int main(){
	int in_time,o_time,total;
	
	printf("Enter Time in : ");
	scanf("%d",&in_time);
	printf("Enter Time out : ");
	scanf("%d",&o_time);
	
	if(in_time>=6 && in_time<=11 && o_time>=6 && o_time<=11){
		printf("You must pay 300 riel\n");
		
		if(o_time>in_time){
			total=o_time-in_time;
			
		}else if(in_time>o_time){
			total= o_time-in_time+24;
			
		}else{
			total = in_time-o_time+24;
		}
	}else{
		if(o_time>in_time){
			total=o_time-in_time;
			
		}else if(in_time>o_time){
			total= o_time-in_time+24;
			
		}else{
			total = in_time-o_time+24;
		}
		printf("You must pay 500 riel\n");
	}
	
	printf("Total time = %d\n",total);
	
	return 0;
}
