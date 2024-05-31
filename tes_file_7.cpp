#include<iostream>
#include<fstream>
using namespace std;

class Student{
	public:
		int id;
		char name[20];
		char sex[20];
		float score;
};

int main(){
	
	ifstream file;
	Student stu;
	
	file.open("Student.bin",ios::in|ios::binary);
	
	if(!file){
		cout<<"Can't find file"<<endl;
	}
	
	while(file.read((char*)&stu,sizeof(stu))){
		cout<<stu.id<<'\t'<<stu.name<<'\t'<<stu.sex<<'\t'<<stu.score<<endl;
	}
	file.close();

}
