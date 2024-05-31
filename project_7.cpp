#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class Lecture{
	private:
		int id;
		string name,position,gender;
		float salary;
	public:
		Lecture(){
			id=0;
			name="null";
			position="null";
			gender="null";
			salary=0.0;
		}
		Lecture(int id,string name,string gender,string position,float salary){
			this->id=id;
			this->name=name;
			this->gender=gender;
			this->position=position;
			this->salary=salary;
		}
		void setId(int id){
			this->id=id;
		}
		int getId(){
			return id;
		}

		void Input();
		void Output();
		
};


void Lecture::Input(){
	cout<<"Enter id : ";cin>>id;
	cout<<"Enter name : ";fflush(stdin);getline(cin,name);
	cout<<"Enter gender : ";getline(cin,gender);
	cout<<"Enter position : ";getline(cin,position);
	cout<<"Enter salary   : ";cin>>salary;
}
void Lecture::Output(){
	cout<<left<<setw(8)<<id
		<<left<<setw(12)<<name
		<<left<<setw(12)<<gender
		<<left<<setw(12)<<position
		<<left<<setw(12)<<salary<<endl;	
	cout<<string(50,'-')<<endl;	
}
void Head(){
	cout<<string(50,'=')<<endl;	
	cout<<left<<setw(8)<<"ID"
		<<left<<setw(12)<<"NAME"
		<<left<<setw(12)<<"GENDER"
		<<left<<setw(12)<<"POSITION"
		<<left<<setw(12)<<"SALARY"<<endl;	
	cout<<string(50,'-')<<endl;	
}
void Search(Lecture lec[],int n){
	int i,search;
	cout<<"Enter ID to search : ";
	cin>>search;
	for(i=0;i<n;i++){
		if(search==lec[i].getId()){
			lec[i].Output();
		}
	}
}
void Update(Lecture lec[],int n){
	int i,update;
	cout<<"Enter ID to search : ";
	cin>>update;
	for(i=0;i<n;i++){
		if(update==lec[i].getId()){
			lec[i].Input();
		}
	}
}
void Delete(Lecture lec[],int &n){
	int del,i,j;
	cout<<"Enter ID to delete : ";
	cin>>del;
	for(i=0;i<n;i++){
		if(del==lec[i].getId()){
			for(j=i;j<n;j++){
				lec[j]=lec[j+1];
			}
			n=n-1;
		}
	}
}
void Insert(Lecture lec[],int *n){
	int insert,i,j;
	cout<<"Enter place ID to insert : ";
	cin>>insert;
	for(i=0;i<*n;i++){
		if(insert==lec[i].getId()){
			for(j=*n;j>i;j--){
				lec[j]=lec[j-1];
			}
			lec[i].Input();
			*n=*n+1;
			break;
		}
	}
}
void Add(Lecture lec[],int *n){
	int add;
	int i;
	cout<<"Enter number of Lecture to add more : ";
	cin>>add;
	for(i=0;i<*n;i++){
		lec[i].Input();
	}
	*n=*n+add;
}


int main(){
	Lecture lec[50];
	int i,j,n,op;
	
	do{
		cout<<"[1].Input "<<endl;
		cout<<"[2].Output "<<endl;
		cout<<"[3].Search "<<endl;
		cout<<"[4].Update "<<endl;
		cout<<"[5].Delete "<<endl;
		cout<<"[6].Insert "<<endl;
		cout<<"[7].Sort "<<endl;
		cout<<"[8].Add More "<<endl;
		cout<<"[9].Exit "<<endl;
		cout<<"------------------"<<endl;
		cout<<"Choose one Option ==> ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter number of Lecturer : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n======> Lecture "<<i+1<<endl;
					lec[i].Input();
				}
				break;
			}
			case 2:{
				Head();
				for(i=0;i<n;i++){
					lec[i].Output();
				}
				break;
			}
			case 3:{
				Head();
				Search(lec,n);
				break;
			}
			case 4:{
				Update(lec,n);
				break;
			}
			case 5:{
				Delete(lec,n);
				break;
			}
			case 6:{
				Insert(lec,&n);
				break;
			}
			case 7:{
				
				break;
			}
			case 8:{
				Add(lec,&n);
				break;
			}
			case 9:{
				cout<<"======> Good Bye.!\n";
				exit(1);
				break;
			}
			default:{
				cout<<"Please Try again..!!!\n";
				cout<<"There aren't option number : "<<op<<endl;
				break;
			}
		}		
	}while(op!=0);
	return 0;
}
