#include<iostream>
#include<iomanip>
using namespace std;

class Test{
	private :
		int id;
		string name;
		string gender;
		float score;
		
	public :
		
		Test(){
			this->id=0;
			this->name="null";
			this->gender="null";
			this->score=0.0;
		}
		
		int g_Id(){
			return id;
		}
		string g_Name(){
			return name;
		}
		string g_Gender(){
			return gender;
		}
		float g_score(){
			return score;
		}
};

int main(){
	Test t;
	
	
	cout<<t.g_Id()<<'\t'<<t.g_Name()<<'\t'<<t.g_Gender()<<'\t'<<t.g_score()<<endl;
		
	return 0;
}
