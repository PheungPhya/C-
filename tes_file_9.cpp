#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student{
	public:
		int id;
		char name[20];
		char sex[20];
		float score;
};

int main(){
	
	fstream f_r,f_temp;
	Student s;
	f_r.open("Student.bin",ios::in|ios::binary);
	
	if(!f_r){
		cout<<"Can't find file";
		return 0;
	}
	
	while(f_r.read((char*)&s,sizeof(s))){
		cout<<s.id<<'\t'<<s.name<<'\t'<<s.sex<<'\t'<<s.score<<endl;
	}
	f_r.close();
	
	f_temp.open("temp.bin",ios::out|ios::binary);
	f_r.open("Student.bin",ios::in|ios::binary);
	char del[20];
	cout<<"Enter name to delete : ";
	fflush(stdin);cin.getline(del,20);
	
	while(f_r.read((char*)&s,sizeof(s))){
		if(!stricmp(del,s.name)==0){
			f_temp.write((char*)&s,sizeof(s));
		}
	}
	f_r.close();
	f_temp.close();
	
	remove("Student.bin");
	rename("temp.bin","Student.bin");
	
}
