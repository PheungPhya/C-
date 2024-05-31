#include<iostream>
#include<iomanip>
using namespace std;

class Student{
	private:
		int id;
		char name[20],gender;
		float s1,s2,s3;
	public:
		void Input(){
			cout<<"Enter Id     : ";  cin>>id;
			cout<<"Enter Name   : ";  fflush(stdin);cin.getline(name,20);
			cout<<"Enter Gender : ";  cin>>gender;
			cout<<"Enter Score1 : ";  cin>>s1;
			cout<<"Enter Score2 : ";  cin>>s2;
			cout<<"Enter Score3 : ";  cin>>s3;
		}
		double Total(){
			return s1+s2+s3;
		}
		double Avg(){
			return Total()/3;
		}
		char Grade(){
			char g='F';
			
			if(Avg()<50)          g='F';
			else if(Avg() <= 60 ) g='E';
			else if(Avg() <= 70 ) g='D';
			else if(Avg() <= 80 ) g='C';
			else if(Avg() <= 90 ) g='B';
			else if(Avg() <= 100 ) g='A';
			
			return g;
		}
		
		void Output(){
			cout<<left<<setw(10)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<gender
				<<left<<setw(10)<<s1
				<<left<<setw(10)<<s2
				<<left<<setw(10)<<s3
				<<left<<setw(10)<<Total()
				<<left<<setw(10)<<Avg()
				<<left<<setw(10)<<Grade()
				<<endl;
		}
};

int main(){
	Student stu;
	stu.Input();
	stu.Output();
	
	return 0;
}
