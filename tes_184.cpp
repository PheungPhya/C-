#include<iostream>
using namespace std;

class Tes{
	private:
		int x;
		int y;
		float z;
	
		void Input(){
			cout<<"Input x : ";
			cin>>x;
			cout<<"Input y : ";
			cin>>y;
			cout<<"Input z : ";
			cin>>z;
		}
		void Output(){
			cout<<"x + y + z = "<<x+y+z<<endl;
		}
};

int main(){

	
	
	return 0;
}
