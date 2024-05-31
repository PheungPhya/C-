#include<iostream>
#include<iomanip>
using namespace std;


class Teacher{
	private:
		int id;
		string name;
		string gender;
		float salary;
	public:
		
		//default constructor
		Teacher(){
			id=0;
			name="null";
			gender="null";
			salary=0.0;
		}
		Teacher(int id,string name,string gender,float salary){
			this->id=id;
			this->name=name;
			this->gender=gender;
			this->salary=salary;
		}
		void Output(){
			cout<<setw(10)<<id
				<<setw(10)<<name
				<<setw(10)<<gender
				<<setw(10)<<salary
				<<endl;
		}
};


int main(){
	
	Teacher t(123,"rithy","male",999);
	t.Output();
	
	
	return 0;
}
