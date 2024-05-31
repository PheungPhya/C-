#include<iostream>
#include<iomanip>
using namespace std;

class Student{
	private :
		int id;
		string name;
		string gender;
		float score;
	public : 
		
		Student(int Nid,string Nname,string Ngender,float Nscore){
			id=Nid;
			name=Nname;
			gender=Ngender;
			score=Nscore;
		}
		Student(int Nid,string Nname,string Ngender){
			id=Nid;
			name=Nname;
			gender=Ngender;
			score=0.0;
		}
		Student(){
			id=0;
			name="null";
			gender="null";
			score=0.0;
		}
		void Output(){
			cout<<id<<"\t\t"<<name<<"\t\t"<<gender<<"\t\t"<<score<<endl;
		}
		void show(){
			cout<<left<<setw(5)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<gender
				<<left<<setw(10)<<score<<endl;
		}
};

int main(){
	Student obj(123,"Kik kok","Male");
	obj.Output();
	
	return 0;
}
