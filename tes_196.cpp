#include<iostream>
#include<iomanip>
using namespace std;

class Student{
	private:
		int id;
		string name,gender;
		float s1,s2,s3;
	public:
		Student(){
			id=0;
			name="null";
			gender="null";
			s1=0.0;
			s2=0.0;
			s3=0.0;
		}
		Student(int id,string name,string gender,float s1,float s2,float s3){
			this->id = id;
			this->name=name;
			this->gender=gender;
			this->s1=s1;
			this->s2=s2;
			this->s3=s3;
		}
		void Input(){
			cout<<"Enter Id     : "; cin>>id;
			cout<<"Enter Name   : "; fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : "; getline(cin,gender);
			cout<<"Enter Score1 : "; cin>>s1;
			cout<<"Enter Score2 : "; cin>>s2;
			cout<<"Enter Score3 : "; cin>>s3;
		}
		double Total(){
			return s1+s2+s3;
		}
		double Avg(){
			return Total()/3;
		}
		char Grade(){
			char g='F';
						
			if ( Avg() < 50 ) g='F';
			else if ( Avg() < 50 ) g='F';
			else if ( Avg() < 60 ) g='E';
			else if ( Avg() < 70 ) g='D';
			else if ( Avg() < 80 ) g='C';
			else if ( Avg() < 90 ) g='B';
			else if ( Avg() <= 100 ) g='A';
			
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
			cout<<string(85,'-')<<endl;
		}
		void setId(int id){
			this->id=id;
		}
		int getId(){
			return id;
		}
};

void Head(){
	cout<<string(85,'=')<<endl;
	cout<<left<<setw(10)<<"ID"
		<<left<<setw(10)<<"NAME"
		<<left<<setw(10)<<"GENDER"
		<<left<<setw(10)<<"SCORE1"
		<<left<<setw(10)<<"SCORE2"
		<<left<<setw(10)<<"SCORE3"
		<<left<<setw(10)<<"TOTAL"
		<<left<<setw(10)<<"AVERAGE"
		<<left<<setw(10)<<"GRADE"
		<<endl;
	cout<<string(85,'-')<<endl;
}

int main(){
	Student s;
	s.Input();
	Head();
	s.Output();
}
