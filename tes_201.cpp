#include<iostream>
#include<iomanip>
using namespace std;


class Student{
	private :
		int id;
		string name,sex;
		float s1,s2,s3;
	public :
		void Input(){
			cout<<"Enter Id     : ";   cin>>id;
			cout<<"Enter Name   : ";   cin>>name;
			cout<<"Enter Sex    : ";   cin>>sex;
			cout<<"Enter Score1 : ";   cin>>s1;
			cout<<"Enter Score2 : ";   cin>>s2;
			cout<<"Enter Score3 : ";   cin>>s3;
		}
		float Total(){
			return s1+s2+s3;
		}
		float Avg(){
			return Total() / 3;
		}
		char Grade(){
			char g='F';  // 102
					
			if(Avg() < 50)       g='F';
			else if(Avg() < 60)  g='E';
			else if(Avg() < 70)  g='D';
			else if(Avg() < 80)  g='C';
			else if(Avg() < 90)  g='B';
			else if(Avg() <= 100)  g='A';
			
			return g;
		}
		
		void Output(){
			cout<<left<<setw(10)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<sex
				<<left<<setw(10)<<s1
				<<left<<setw(10)<<s2
				<<left<<setw(10)<<s3
				<<left<<setw(10)<<Total()
				<<left<<setw(10)<<Avg()
				<<left<<setw(10)<<Grade()
				<<endl;
		}
};

void Head(){
	cout<<string(85,'=')<<endl;
	cout<<left<<setw(10)<<"ID"
		<<left<<setw(10)<<"NAME"
		<<left<<setw(10)<<"SEX"
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
	Student st,st2;
	st.Input();

	Head();
	st.Output();

	
	
	return 0;
}

