#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	fstream file;
	file.open("AStudent.txt", ios::in | ios::ate);
	//                       ^^^^^^^^

	char str[90];
	if(!file){
		cout<<"Can't find file"<<endl;
	}
	else {
		// Reading from the end of the file
		file.seekg(0, ios::beg); // Move the file pointer to the beginning

		while(!file.eof()){
			file.getline(str,100);
			cout<<str<<endl;
		}
	}
	
	file.close();
	
	return 0;
}

