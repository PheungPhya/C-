#include<stdio.h>
int main(){
	
	int in_time,o_time,to_time;
	int op;
	char back;
	
	printf("Enter your in time : ");scanf("%d",&in_time);
	printf("Enter your out time : ");scanf("%d",&o_time);
//	if(in_time>=6 && o_time<=11){
//		printf("You must pay 300 riel\n");
//		if(in_time>o_time){
//			to_time=in_time-o_time+24;
//		}else if(in_time==o_time){
//			to_time=in_time-o_time;
//		}else{
//			to_time=o_time-in_time;
//		}
//		
//	}else{
//		printf("You must pay 500 riel\n");
//		if(o_time>=in_time){
//			to_time = o_time - in_time;
//		}
//		
//	}
//	
//	printf("Total time = %d\n",to_time);
	
	if(in_time>=6 && in_time<=11 && o_time>=6 && o_time<=11){
		printf("You must pay 300 riel\n");
		if(in_time>o_time){
			to_time=o_time-in_time+24;
		}else{
			to_time=o_time-in_time;
		}
	}else{
		printf("You must pay 500 riel\n");
		if(in_time>o_time){
			to_time=o_time-in_time+24;
		}else{
			to_time=o_time-in_time;
		}
	}
	printf("Total time = %dh\n",to_time);
	return 0;
}
