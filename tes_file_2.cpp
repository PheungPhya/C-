#include<iostream>
#include<fstream>
using namespace std;

class Employee{
	public:
		int id;
		char name[20];
		char sex[20];
		float salary;
};

int main(){
	
	ofstream f;
	f.open("Employee.txt",ios::out);
	Employee emp;
	int i,n;
	
	if(!f){
		cout<<"Can't create file"<<endl;
	}
	cout<<"Enter n : ";
	cin>>n;
	
	for(i=0;i<n;i++){
		
	cout<<"Enter Id     : "; cin>>emp.id;
	cout<<"Enter Name   : "; fflush(stdin); cin.getline(emp.name,20);
	cout<<"Enter Ses    : "; cin.getline(emp.sex,20);
	cout<<"Enter Salary : "; cin>>emp.salary;
	
	f.write((char*)&emp,sizeof(emp));
	}
	
	f.close();
	
	
	ifstream file;
	file.open("Employee.txt",ios::in);
	Employee emp;
	
	while(file.read((char*)&emp,sizeof(emp))){
		cout<<emp.id<<'\t'<<emp.name<<'\t'<<emp.sex<<'\t'<<emp.salary<<endl;
	}
	file.close();
	
	
	
	
}
