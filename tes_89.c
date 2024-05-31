#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int t_in,t_out,Time;
	
	printf("Enter Time In : ");
	scanf("%d",&t_in);
	printf("Enter Time Out : ");
	scanf("%d",&t_out);
	
	if(t_in>=6 && t_in<=11 && t_out>=6 && t_out<=11){
		printf("You must pay 300riel.\n");
		if(t_in>t_out){
			Time = t_out - t_in +24;
		}else if(t_out>t_in){
			Time = t_out - t_in;
		}else{
			Time = t_out - t_in ;
		}
	}else{
		printf("You must pay 500rile.\n");
		if(t_in>t_out){
			Time = t_out - t_in +24;
		}else if(t_out>t_in){
			Time = t_out - t_in;
		}else{
			Time = t_out - t_in ;
		}
	}
	printf("Time send : %dh\n",Time);
	
	return 0;
}
