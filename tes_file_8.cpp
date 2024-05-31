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
	
	ofstream file;
	Student stu;
	int n,i;
	file.open("Student.bin",ios::app|ios::binary);
	
	if(!file){
		cout<<"Can't create file"<<endl;
	}
	
	cout<<"How many student do you want to input : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nEnter Id  : "; cin>>stu.id;
		cout<<"Enter Name   : "; fflush(stdin);cin.getline(stu.name,20);
		cout<<"Enter Gender : "; cin.getline(stu.sex,20);
		cout<<"Enter Score  : "; cin>>stu.score;
		
		file.write((char*)&stu,sizeof(stu));
	}
	file.close();
	

	return 0;
}
