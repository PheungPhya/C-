#include<iostream>
using namespace std;

int main(){

	float s1,s2,s3,s4,s5;
	float total,avg;
	
	cout<<"Enter score1  : "; cin>>s1;
	cout<<"Enter score2  : "; cin>>s2;
	cout<<"Enter score3  : "; cin>>s3;
	cout<<"Enter score4  : "; cin>>s4;
	cout<<"Enter score5  : "; cin>>s5;
	total=s1+s2+s3+s4+s5;
	avg=total/5;
	
	
	cout<<"Total Score = "<<total<<endl;
	cout<<"Average = "<<avg<<endl;
	return 0;
}
