#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Teacher{
	private:
		int id;
		char name[20],gender[20];
		float income;
	public:
		Teacher(){
			id=0;
			strcpy(name,"null");
			strcpy(gender,"null");
			income=0.0;
		}
		void Input(){
			cout<<"Enter ID     : ";	cin>>id;
			cout<<"Enter Name   : ";	fflush(stdin);cin.getline(name,20);
			cout<<"Enter Gender : ";	cin.getline(gender,20);
			cout<<"Enter Income : ";    cin>>income;
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<gender
				<<setw(10)<<income
				<<endl;
		}
		int getId(){
			return id;
		}
};


int main(){
	Teacher *t;
	int i,j,n=1,op;
	
	while(1){
		cout<<"[1]. Input"<<endl;
		cout<<"[2]. Output"<<endl;
		cout<<"[3]. Update"<<endl;
		cout<<"[4]. Delete"<<endl;
		cout<<"[5]. Exit"<<endl;
		cout<<"==========================="<<endl;
		cout<<"Choose one option (1-5) => ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Input  n : ";
				cin>>n;
				t = (Teacher*)malloc(n*sizeof(Teacher));
				for(i=0;i<n;i++){
					cout<<"\n======> Employee "<<i+1<<endl;
					(t+i)->Input();
				}
				break;
			}
			case 2:{
				for(i=0;i<n;i++){
					(t+i)->Output();
				}
				break;
			}
		}
	}
	
	return 0;
}
