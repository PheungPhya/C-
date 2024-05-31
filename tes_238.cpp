#include <iostream>
#include <string>
#include<iomanip>
#include<windows.h>
using namespace std;
class Person {
protected:
	int id;
    string name;
    int age;
    string sex;
public:
    Person() {
    	id=0;
        name = "null";
        age = 0;
        sex="null";
    }

    Person(int id,string name, int age,string sex) {
    	this->id=id;
        this->name = name;
        this->age = age;
        this->sex=sex;
    }

    void input() {
    	cout<<"==========>Input Data<==========\n";
    	cout<<"Enter your ID  :";cin>>id;
        cout<<"Enter your name: ";fflush(stdin);getline(cin, name);
        cout<<"Enter your age : ";cin>>age;cin.ignore();
        cout<<"Enter Gender:";cin>>sex;
    }

    void output() {
    	  cout<<"=========>Output<============\n";
    	  cout<<left<<setw(10)<<id
    	      <<left<<setw(10)<<name
    	      <<left<<setw(10)<<age
    	      <<left<<setw(10)<<sex;
    }
    void setID(int id){
    	this->id=id;
	}
	int getId(){
		return id;
	}
    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }
    
    void setSex(string sex){
    	this->sex=sex;
	}
	string getSex(){
		return sex;
	}
};

class Student : public Person {
private:
    float score1,score2,score3,score4,score5;

public:
    Student() {
    	Person:Person();
        score1=0.0;
        score2=0.0;
        score3=0.0;
        score4=0.0;
        score5=0.0;
    }

    Student(float score1,float score2, float score3,float score4,float score5) : Person(id,name, age,sex) {
        this->score1=score1;
        this->score2=score2;
        this->score3=score3;
        this->score4=score4;
        this->score5=score5;
    }

    void input() {
        Person::input();
        cout<<"Enter Point of JAVA        :";cin>>score1;
        cout<<"Enter Point of C           :";cin>>score2;
        cout<<"Enter Point of C++         :";cin>>score3;
        cout<<"Enter Point of C#          :";cin>>score4;
        cout<<"Enter Point of Javascript  :";cin>>score5;
    }

    void output() {
        Person::output();
        cout<<left<<setw(10)<<score1
            <<left<<setw(10)<<score2
            <<left<<setw(10)<<score3
            <<left<<setw(10)<<score4
            <<left<<setw(10)<<score5
            <<left<<setw(10)<<Total()
            <<left<<setw(10)<<Avg()
            <<left<<setw(10)<<Grade()<<endl;
    }
   float Total(){
   	return score1+score2+score3+score4+score5;
   }
   float Avg(){
       return Total()/5;   	
   }
   char Grade(){
   	char g ='F';
   	    if(Avg()<50)
   	     g ='F';
   	    else if(Avg()<60)
   	     g ='E';
   	    else if(Avg()<70)
   	     g ='D';
		else if(Avg()<80)
   	     g ='C';
		else if(Avg()<90)
   	     g ='B';
		else if(Avg()<=100)
   	     g ='A';
			return g;		 
   }
  
};

int main() {
	system("color A");
    Student stu[10],str;
    str.setName("Kimson");
    cout<<"name = "<<str.getName();
    
    int i,j,n,op;
     do{
     	cout<<"=======>Application for Calulate Point Student<=======\n";
     	cout<<"[1]. Input"<<endl;
     	cout<<"[2]. Output"<<endl;
     	cout<<"[3]. Search"<<endl;
     	cout<<"[4]. Update"<<endl;
     	cout<<"[5]. Delete"<<endl;
     	cout<<"[6]. Insert"<<endl;
     	cout<<"[7]. Sort"<<endl;
     	cout<<"[8]. Add"<<endl;
     	cout<<"[9]. Clear"<<endl;
     	cout<<"[0]. Exit"<<endl;
     	cout<<"======================================================\n";
     	cout<<"Please select one option:";cin>>op;
     	switch(op){
     		case 1:{
     			cout<<"Input number of student:";cin>>n;
     			for(i=0;i<n;i++){
     				stu[i].input();
				 }
				break;
			 }
			 case 2:{
			 	for(i=0;i<n;i++){
			 		stu[i].output();
				 }
				break;
			 }
			 case 3:{
			 	int search;
			 	cout<<"Enter ID do you want to search:";cin>>search;
			 	for(i=0;i<n;i++){
			 		if(search == stu[i].getId()){
			 			stu[i].output();
					 }
				 }
				break;
			 }
			 case 4:{
			 	int update;
			 	cout<<"Enter ID do you want to update:";cin>>update;
			 	for(i=0;i<n;i++){
			 		if(update==stu[i].getId()){
			 			stu[i].output();
			 			stu[i].input();
					 }
				 }
				break;
			 }
			 case 5:{
			 	int del;
			 	cout<<"Enter ID do you want to delete:";cin>>del;
			 	for(i=0;i<n;i++){
			 		if(del==stu[i].getId()){
			 			for(j=i;j<n;j++){
			 				stu[j]=stu[j+1];
						 }
						 n--;
					 }
				 }
				break;
			 }
			 case 6:{
			 	int insert;
			 	cout<<"Enter ID do you want to insert:";cin>>insert;
			 	for(i=0;i<n;i++){
			 		if(stu[i].getId() == insert){
			 			for(j=n;j>i;j--){
			 					stu[j]=stu[j-1];
						 }
					 }
					 stu[i].input();
					 n++;
					 break;
				 }
				break;
			 }
			 case 7:{
			 	Student temp;
			 	for(i=0;i<n;i++){
			 		for(j=i+1;j<n;j++){
			 			if(stu[i].getId() < stu[j].getId()){
			 				temp=stu[i];
			 				stu[i]=stu[j];
			 				stu[j]=temp;
						 }
					 }
				 }
				 for(i=0;i<n;i++){
				 	stu[i].output();
				 }
				break;
			 }
			 case 8:{
			 	int add;
			 	cout<<"How many student do you want to add more :";cin>>add;
			 	for(i=n;i<n+add;i++){
			 		stu[i].input();
				 }
				 n=n+add;
				break;
			 }
			 case 9:{
			 	system("cls");
				break;
			 }
			 case 0:{
			 	exit(0);
				break;
			 }
		 }
	 }while(1);
    return 0;
}

