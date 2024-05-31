#include<iostream>
using namespace std;
int main(){	
	
	int id;
	string name;
	string gender;
	float salary;
	
	cout<<"Input Id : ";       cin>>id;
	cout<<"Input Name : ";	   fflush(stdin);getline(cin,name);
	cout<<"Input Gender : ";    getline(cin,gender);
	cout<<"Input Salary : ";	cin>>salary;
	
	cout<<"ID\tName\tGender\tSalary"<<endl;
	cout<<id<<'\t'<<name<<'\t'<<gender<<'\t'<<salary<<'$'<<endl;
	
	return 0;
}
