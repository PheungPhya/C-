#include<iostream>
using namespace std;

class Test{
	private:
		int x;
		float y;
	public:
		void Input(){
			cout<<"Enter x : ";
			cin>>x;
			cout<<"Enter y : ";
			cin>>y;
		}
		void Output(){
			cout<<x<<" + "<<y<<" = "<<x+y<<endl;
		}
};

int main(){
	Test t;
	
	t.Input();
	t.Output();
	
	
	
	
	return 0;
}
