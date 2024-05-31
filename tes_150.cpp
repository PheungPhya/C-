#include<iostream>
using namespace std;
int main(){
	
	int id;
	string name;
	char gender;
	string position;
	cout<<"Enter ID : ";
	cin>>id;
	cout<<"Enter Name : ";
	fflush(stdin);getline(cin,name);
	cout<<"Enter gender : ";
	cin>>gender;
	cout<<"Enter Position : ";
	cin>>position;
	
	cout<<"ID\tName\tGender\tPostion"<<endl;
	cout<<id<<'\t'<<name<<'\t'<<gender<<'\t'<<position;	
	return 0;
}
