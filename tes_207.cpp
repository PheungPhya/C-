#include<iostream>
#include<iomanip>
using namespace std;

class Info{
	protected:
		int id;
		string name;
		string gender;
	public:
		Info(int id,string name,string gender){
			this->id=id;
			this->name=name;
			this->gender=gender;
		}
		Info(){
			id=0;
			name="null";
			gender="null";
		}
		void Input(){
			cout<<"Enter ID : "; 	 cin>>id;
			cout<<"Enter Name : ";	 fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : "; getline(cin,gender);
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<gender;
		}
};

class Teacher:public Info{
	private:
		string subject;
		float salary;
	public:
		Teacher(int id,string name,string gender,string subject,float salary):Info(id,name,gender){
			this->subject=subject;
			this->salary=salary;
		}
		Teacher(){
			Info:Info();
			subject="null";
			salary=0.0;
		}
		void Input(){
			Info::Input();
			cout<<"Enter Subject : "; getline(cin,subject);
			cout<<"Enter Salary  : "; cin>>salary;
		}
		void Output(){
			Info::Output();
			cout<<setw(10)<<subject
				<<setw(10)<<salary<<endl;
		}		
};

class Student : public Info{
	private:
		float score;
	public:
		
		Student(){
			   
		}
		void Input(){
			
		}
		void Output(){
			
		}
};

int main(){
	Teacher t;
	t.Output();
}
