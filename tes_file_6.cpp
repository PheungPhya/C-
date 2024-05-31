#include<iostream>
#include<fstream>
using namespace std;

class Test{
	public:
		int id;
		char name[20];
		char gender[20];
		float age;
};

int main(){
	ofstream file;
	Test t;
	
	file.open("Etec_Center.txt",ios::out);
	
	cout<<"Enter id     : "; cin>>t.id;
	cout<<"Enter name   : "; fflush(stdin); cin.getline(t.name,20);
	cout<<"Enter gender : "; cin.getline(t.gender,20);
	cout<<"Enter age    : "; cin>>t.age;
	
	file.write((char*)&t,sizeof(t));
	file.close();
	
	
	// Read file

	ifstream r_f;
	Test t1;
	r_f.open("Etec_Center.txt",ios::in);
	r_f.read((char*)&t1,sizeof(t1));
	
	while(!r_f.eof()){
		cout<<t1.id<<"\t"<<t1.name<<"\t"<<t1.gender<<"\t"<<t1.age<<endl;
		r_f.read((char*)&t1,sizeof(t1));
	}
	r_f.close();
	

	return 0;
}
