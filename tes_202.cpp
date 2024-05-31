#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	float s1,s2,s3,s4,s5;
	float total,avg;
	char grade='F';
	
	cout<<"Enter Score1 : ";  cin>>s1;
	cout<<"Enter Score2 : ";  cin>>s2;
	cout<<"Enter Score3 : ";  cin>>s3;
	cout<<"Enter Score4 : ";  cin>>s4;
	cout<<"Enter Score5 : ";  cin>>s5;
	total = s1+s2+s3+s4+s5;
	avg  = total / 5;
	
	if(avg < 50)       grade = 'F';
	else if(avg < 60 ) grade = 'E';
	else if(avg < 70 ) grade = 'D';
	else if(avg < 80 ) grade = 'C';
	else if(avg < 90 ) grade = 'B';
	else if(avg <= 100 ) grade = 'A';
	
	cout<<left<<setw(10)<<s1
		<<left<<setw(10)<<s2
		<<left<<setw(10)<<s3
		<<left<<setw(10)<<s4
		<<left<<setw(10)<<s5
		<<left<<setw(10)<<total
		<<left<<setw(10)<<avg
		<<left<<setw(10)<<grade
		<<endl;
	
	return 0;
}
