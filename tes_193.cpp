#include<iostream>
#include<iomanip>
using namespace std;


class Teacher{
	private:
		int id;
		string name;
		string gender;
		string course;
		float salary;
	public:
		Teacher(){
			id=0;
			name="Null";
			gender="Null";
			course="Null";
			salary=0.0;
		}
		
		void Input(){
			cout<<"Enter Id     : ";cin>>id;
			cout<<"Enter Name   : ";fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : ";getline(cin,gender);
			cout<<"Enter Course : ";getline(cin,course);
			cout<<"Enter Salary : ";cin>>salary;
		}
		void Output(){
			cout<<left<<setw(10)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<gender
				<<left<<setw(10)<<course
				<<left<<setw(10)<<salary
				<<endl;
			cout<<string(46,'-')<<endl;
		}
		int getId(){
			return id;
		}
};

void Head(){
	cout<<string(46,'=')<<endl;
	cout<<left<<setw(10)<<"ID"
		<<left<<setw(10)<<"NAME"
		<<left<<setw(10)<<"GENDER"
		<<left<<setw(10)<<"COURSE"
		<<left<<setw(10)<<"SALARY"
		<<endl;
	cout<<string(46,'-')<<endl;
}

int main(){
	Teacher t[20];
	int i,j,n=1,op;
	
	do{
		cout<<"[1] Input\n";
		cout<<"[2] Output\n";
		cout<<"==============\n";
		cout<<"Select one option => ";
		cin>>op;
		
		switch(op){
			case 1:{
				cout<<"Enter number of Teacher : ";
				cin>>n;
				for(i=0;i<n;i++){
					t[i].Input();
				}
				break;
			}
			case 2:{
				Head();
				for(i=0;i<n;i++){
					t[i].Output();
				}
				break;
			}
			case 3:{
				int search;
				cout<<"Enter id to search : ";
				cin>>search;
				for(i=0;i<n;i++){
					if(search == t[i].getId()){
						Head();
						t[i].Output();
					}
				}
				break;
			}
		}
		
	}while(op!=0);
	
	
	return 0;
}
