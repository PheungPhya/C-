#include<iostream>
#include<iomanip>
using namespace std;

class Student{
	
	private:
		int id;
		string name;
		string gender;
		float score;
	public:
		Student(){
			id=0;
			name="null";
			gender="null";
			score=0.0;
		}
		Student(int id,string name,string gender,float score){
			this->id=id;
			this->name=name;
			this->gender=gender;
			this->score=score;
		}
		Student(int id,string name,string gender){
			this->id=id;
			this->name=name;
			this->gender=gender;
			this->score=0.0;
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<gender
				<<setw(10)<<score
				<<endl;
		}
};

int main(){
	Student stu(123,"Meng","Male");
	stu.Output();
}
