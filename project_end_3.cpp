#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
#include<windows.h>
#include<stdlib.h>
using namespace std;

class Product{
	private:
		int code,qty;
		char name[20];
		float price;
	public:
		Product(){
			code=0;
			strcpy(name,"null");
			qty=0;
			price=0.0;
		}
		Product(int code,char *name,int qty,float price){
			this->code=code;
			strcpy(this->name,name);
			this->qty=qty;
			this->price=price;
		}
		void Input(){
			cout<<"Enter Product Code  : "; cin>>code;
			cout<<"Enter Product Name  : "; fflush(stdin);cin.getline(name,20);
			cout<<"Enter Product QTY   : "; cin>>qty;
			cout<<"Enter Product Price : "; cin>>price;
		}
		float Total(){
			return qty*price;
		}
		int Dis(){
			if(Total()>0 && Total()<=10){
				return 10;
			}else if(Total()>10 && Total()<=20){
				return 20;
			}else if(Total()>20 && Total()<=30){
				return 30;
			}else if(Total()>30 && Total()<=40){
				return 40;
			}else if(Total()>40 && Total()<=50){
				return 50;
			}else {
				return 60;
			}
		}
		float Pay(){
			return Total() - ( Total() * Dis() / 100 );
		}
		void Output(){
			cout<<"\t\t|"<<left<<setw(10)<<code
				<<left<<setw(10)<<name
				<<left<<setw(10)<<qty
				<<'$'<<left<<setw(9)<<price
				<<'$'<<left<<setw(9)<<Total()
				<<"%"<<left<<setw(9)<<Dis()
				<<'$'<<left<<setw(9)<<Pay()
				<<endl;	
		}	
		char *getName(){
			return name;
		}	
		int getCode(){
			return code;
		}	
};

void Head(){
	cout<<"\t\t"<<string(26,'=')<<">> INFORMATION <<"<<string(26,'=')<<endl;
	cout<<"\t\t|"<<left<<setw(10)<<"CODE"
		<<left<<setw(10)<<"NAME"
		<<left<<setw(10)<<"QUANTITY"
		<<left<<setw(10)<<"PRICE"
		<<left<<setw(10)<<"TOTAL"
		<<left<<setw(10)<<"DISCOUNT"
		<<left<<setw(10)<<"PAYMENT"
		<<endl;	
	cout<<"\t\t"<<string(69,'-')<<endl;
}

int main(){
	fstream file,f_temp;   
	Product pro;
	int i,n,op;
	
	do{
		cout<<"[1]. Write..................."<<endl;
		cout<<"[2]. Read...................."<<endl;
		cout<<"[3]. Search.................."<<endl;
		cout<<"[4]. Update.................."<<endl;
		cout<<"[5]. Delete.................."<<endl;
		cout<<"[6]. Insert.................."<<endl;
		cout<<"[7]. Sort...................."<<endl;
		cout<<"[8]. Append.................."<<endl;
		cout<<"[9 or 0]. Exit..............."<<endl;
		cout<<"-----------------------------"<<endl;
		cout<<"Please select one option => ";
		cin>>op;
			
		switch(op){
			case 1:{
				file.open("Products.bin",ios::out|ios::binary);
				cout<<"How many product do you want to input ?"<<endl;
				cout<<"Enter number of product : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n=======> Product "<<i+1<<endl;
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				file.close();
				break;
			}
			case 2:{
				file.open("Products.bin",ios::in|ios::binary);
				system("color B");
				system("cls");
				Head();
				while(file.read((char*)&pro,sizeof(pro))){
					pro.Output();
				}
				cout<<"\t\t"<<string(69,'-')<<endl;
				file.close();
				break;
			}
			case 3:{
				char search[20];
			    file;
				file.open("Products.bin",ios::in|ios::binary);
				cout<<"Enter Name Product to search : ";
				fflush(stdin);cin.getline(search,20);
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(search,pro.getName())==0){
						Head();
						pro.Output();
						cout<<"\t\t"<<string(69,'-')<<endl;
					}
				}
				
				file.close();
				break;
			}
			case 4:{
				char update[20];
				file.open("Products.bin",ios::in|ios::binary);
				f_temp.open("temp.bin",ios::out|ios::binary);
				cout<<"Enter Product Name to update : ";
				fflush(stdin);cin.getline(update,20);
				
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(update,pro.getName())==0){
						pro.Input();
						f_temp.write((char*)&pro,sizeof(pro));
					}else{
						f_temp.write((char*)&pro,sizeof(pro));
					}
				}
				file.close();
				f_temp.close();
				remove("Products.bin");
				rename("temp.bin","Products.bin");
				break;
			}
			case 5:{
				char del[20];
				file.open("Products.bin",ios::in|ios::binary);
				f_temp.open("temp.bin",ios::out|ios::binary);
				cout<<"Enter Product Name to delete : ";
				fflush(stdin);cin.getline(del,20);
				
				while(file.read((char*)&pro,sizeof(pro))){
					if(!stricmp(del,pro.getName())==0){
						f_temp.write((char*)&pro,sizeof(pro));
					}
				}
				file.close();
				f_temp.close();
				remove("Products.bin");
				rename("temp.bin","Products.bin");
				
				break;
			}
			case 6:{
				char insert[20];
				Product p;
				file.open("Products.bin",ios::in|ios::binary);
				f_temp.open("temp.bin",ios::out|ios::binary);
				
				cout<<"Where name do you want to inser : ";
				fflush(stdin);cin.getline(insert,20);
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(insert,pro.getName())==0){
						p.Input();
						f_temp.write((char*)&p,sizeof(p));
						f_temp.write((char*)&pro,sizeof(pro));
					}else{
						f_temp.write((char*)&pro,sizeof(pro));
					}
				}
				file.close();
				f_temp.close();
				remove("Products.bin");
				rename("temp.bin","Products.bin");
				break;
			}
			case 7:{
				Product pro1[20],p_temp;
				n=0;
				int j;
				file.open("Products.bin",ios::in|ios::binary);
				while(file.read((char*)&pro,sizeof(pro))){
					pro1[n]=pro;
					n++;
				}
				file.close();
				file.open("Products.bin",ios::out|ios::binary);
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(pro1[i].getCode()>pro1[j].getCode()){
							p_temp=pro1[i];
							pro1[i]=pro1[j];
							pro1[j]=p_temp;
						}
					}
				}
				for(i=0;i<n;i++){
					file.write((char*)&pro1[i],sizeof(pro1[i]));
				}
				file.close();
				file.open("Products.bin",ios::in|ios::binary);
				system("color B");
				system("cls");
				Head();
				while(file.read((char*)&pro,sizeof(pro))){
					pro.Output();
				}
				cout<<"\t\t"<<string(69,'-')<<endl;
				file.close();
				break;
			}
			case 8:{
				int add;
				file.open("Products.bin",ios::app|ios::binary);
				cout<<"How many product do you want to add : ";
				cin>>add;
				for(i=0;i<add;i++){
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				file.close();
				break;
			}
			case 9: case 0:{
				system("color 4");
				cout<<"\n\t\tGood Bye See You Later.!"<<endl;
				exit(1);
				break;
			}
		}
		
	}while(op!=0);
	
	
	return 0;
}
