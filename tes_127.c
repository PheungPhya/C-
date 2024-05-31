#include<stdio.h>
#include<string.h>
int main(){
	
	char word[4][20]={"book","apple","door","car"};
	char temp[20];
	int i,j;
	
	
	for(i=0;i<4;i++){
		printf("word[%d] = %s\n",i,word[i]);
	}
	printf("======= Sort ======\n");
	int l=strcmp(word[0],word[2]);
				printf("l = %d\n",l);
	
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			if(strcmp(word[i],word[j])>0){
				strcpy(temp,word[i]);
				strcpy(word[i],word[j]);
				strcpy(word[j],temp); 
			}
		}
	}
	for(i=0;i<4;i++){
		printf("word[%d] = %s\n",i,word[i]);
	}
		
	return 0;
}
