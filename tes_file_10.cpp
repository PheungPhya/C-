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
	ofstream f_w;
	Student stu;
	int i,n;
	
	f_w.open("Student.bin",ios::app|ios::binary);
	if(!f_w){
		cout<<"can't create file";
		return 0;
	}
	cout<<"how many student do you want to input : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nEnter Id     : "; cin>>stu.id;
		cout<<"Enter Name   : "; fflush(stdin);cin.getline(stu.name,20);
		cout<<"Enter Gender : "; cin.getline(stu.sex,20);
		cout<<"Enter Score  : "; cin>>stu.score;
		
		f_w.write((char*)&stu,sizeof(stu));
	}
	f_w.close();
	
	

	return 0;
}
