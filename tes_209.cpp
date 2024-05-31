#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class Teacher{
	private :
		int id;
		char name[20],sex[20];
		float salary;
	public :
		void Input(){
			cout<<"Enter Id     : ";  cin>>id;
			cout<<"Enter Name   : ";  fflush(stdin);cin.getline(name,20);
			cout<<"Enter Sex    : ";  cin.getline(sex,20);
			cout<<"Enter Salary : ";  cin>>salary;
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<sex
				<<setw(10)<<salary
				<<endl;
		}
		int getId(){
			return id;
		}
};

int main(){
	Teacher *t;
	int i,n,j,op;
	
	// intput
	cout<<"Enter n : ";
	cin>>n;
	t=(Teacher *)malloc(n*sizeof(Teacher));
	for(i=0;i<n;i++){
		(t+i)->Input();
	}
	
	// Output
	for(i=0;i<n;i++){
		(t+i)->Output();
	}
	
	// Search
	int search;
	cout<<"Enter id to search : ";
	cin>>search;
	for(i=0;i<n;i++){
		if(search==(t+i)->getId()){
			(t+i)->Output();
		}
	}
}
