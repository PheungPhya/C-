#include<iostream>
#include<iomanip>
using namespace std;

class Student{
	private :
		int id;
		string name;
		string gender;
	public :
		void setId(int id){
			this->id=id;
		}
		int getId(){
			return id;
		}
		void setName(string name){
			this->name=name;
		}
		string getName(){
			return name;
		}
	
};

int main(){
	
	Student stu;
	
	stu.setId(123);
	stu.setName("Vannda");
	
	cout<<"Id = "<<stu.getId()<<endl;
	cout<<"Name = "<<stu.getName();
	return 0;
}
