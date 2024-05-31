#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	fstream file;
	file.open("Etec3.txt",ios::in);
	
	char str[100];
	
	if(!file){
		cout<<"Can't find file"<<endl;
	}
	
	while(!file.eof()){
		file.getline(str,100);
		cout<<str;
	}
	
	file.close();
	
	
	return 0;
}
