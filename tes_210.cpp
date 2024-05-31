#include<iostream>
#include<string.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class Teacher{
	private:
		int id;
		char name[20],gender[20];
		float salary;
	public:
		Teacher(){
			id=0;
			strcpy(name,"null");
			strcpy(gender,"null");
			salary=0.0;
		}
		void Input(){
			cout<<"Enter Id     : "; cin>>id;
			cout<<"Enter Name   : "; fflush(stdin);cin.getline(name,20);
			cout<<"Enter Gender : "; cin.getline(gender,20);
			cout<<"Enter Salary : "; cin>>salary;
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<gender
				<<setw(10)<<salary
				<<endl;
		}
		int getId(){
			return id;
		}
};

int main(){
	Teacher *t;
	int op,i,j,n=1;
	
	while(1){
		cout<<"[1]. Input"<<endl;
		cout<<"[2]. Output"<<endl;
		cout<<"[3]. Search"<<endl;
		cout<<"[4]. Update"<<endl;
		cout<<"[5]. Delete"<<endl;
		cout<<"[6]. Exit"<<endl;
		cout<<"================="<<endl;
		cout<<"Choose (1-6) => ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter number of Teacher : ";
				cin>>n;
				t=(Teacher*)malloc(n*sizeof(Teacher));
				for(i=0;i<n;i++){
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
			case 3:{
				int search;
				cout<<"Enter id to search : ";
				cin>>search;
				for(i=0;i<n;i++){
					if(search == (t+i)->getId()){
						(t+i)->Output();
					}
				}
				break;
			}
			case 4:{
				int update;
				cout<<"Enter id to update : ";
				cin>>update;
				for(i=0;i<n;i++){
					if(update==(t+i)->getId()){
						(t+i)->Input();
					}
				}
				break;
			}
			case 5:{
				int del;
				cout<<"Enter id to delete : ";
				cin>>del;
				for(i=0;i<n;i++){
					if(del==(t+i)->getId()){
						for(j=i;j<n-1;j++){
							//t[j] = t[j+1]
							*(t+j) = *(t+j+1);
						}
						n--;
					}
				}
				break;
			}
			case 6:{
				cout<<"Good Bye ..!"<<endl;
				exit(1);
				break;
			}
			default:{
				cout<<"Wrong option : \n please try again"<<endl;
				break;
			}
		}
	}
	
}
