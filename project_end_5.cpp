#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;

class Info{
	protected:
		int code;
		char name[20];
	public:
		Info(){
			code=0;
			strcpy(name,"null");
		}
		Info(int code,char *name){
			this->code=code;
			strcpy(this->name,name);
		}
		void Input(){
			cout<<"Enter Product Code  : "; cin>>code;
			cout<<"Enter Product Name  : "; fflush(stdin);cin.getline(name,20);
		}
		void Output(){
			cout<<"\t\t\t| "<<left<<setw(10)<<code
				<<left<<setw(10)<<name;				
		}
		char *getName(){
			return name;
		}
};

class Product : public Info{
	private:
		float price;
		int qty;
	public:
		Product(){
			Info:Info();
			qty=0;
			price=0;
		}
		Product(int code,char *name,int qty,float price):Info(code,name){
			this->qty=qty;
			this->price=price;
		}
		void Input(){
			Info::Input();
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
			}else {
				return 50;
			}
		}
		float Pay(){
			return Total() - (Total() * Dis() / 100);
		}
		void Output(){
			Info::Output();
			cout<<left<<setw(10)<<qty
				<<'$'<<left<<setw(9)<<price
				<<'$'<<left<<setw(9)<<Total()
				<<'%'<<left<<setw(9)<<Dis()
				<<'$'<<left<<setw(9)<<Pay()
				<<'|'<<endl;			
		}
};

void Head(){
	cout<<"\t\t\t"<<string(73,'=')<<endl;
	cout<<"\t\t\t| "<<left<<setw(10)<<"CODE"
				<<left<<setw(10)<<"NAME"
				<<left<<setw(10)<<"QUANTITY"
				<<left<<setw(10)<<"PRICE"
				<<left<<setw(10)<<"TOTAL"
				<<left<<setw(10)<<"DISCOUNT"
				<<left<<setw(10)<<"PAYMENT"
				<<'|'<<endl;
	cout<<"\t\t\t"<<string(73,'-')<<endl;
}
int main(){
	fstream file,f_temp;
	Product pro;
	int i,n,j,op;
	
	do{
		cout<<"[1]. Write..................."<<endl;
		cout<<"[2]. Read...................."<<endl;
		cout<<"[3]. Search.................."<<endl;
		cout<<"[4]. Update.................."<<endl;
		cout<<"[5]. Delete.................."<<endl;
		cout<<"[6]. Append.................."<<endl;
		cout<<"Please Select One Option => ";
		cin>>op;
		
		switch(op){
			case 1:{
				file.open("Product_end.bin",ios::out|ios::binary);
				cout<<"How many product do you want to input = ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n========> Product "<<i+1<<endl;
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				file.close();
				break;
			}
			case 2:{
				file.open("Product_end.bin",ios::in|ios::binary);
				system("cls");
				system("Color B");
				Head();
				while(file.read((char*)&pro,sizeof(pro))){
					pro.Output();
				}
				cout<<"\t\t\t"<<string(73,'-')<<endl;
				file.close();
				break;
			}
			case 3:{
				char search[20];
				file.open("Product_end.bin",ios::in|ios::binary);
				cout<<"Enter Product Name to Search : ";
				fflush(stdin);cin.getline(search,20);
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(search,pro.getName())==0){
						system("Color B");
						Head();
						pro.Output();
					}
				}
				cout<<"\t\t\t"<<string(73,'-')<<endl;
				file.close();				
				break;
			}
			case 4:{
				char update[20];
				file.open("Product_end.bin",ios::in|ios::binary);
				f_temp.open("temp.bin",ios::out|ios::binary);
				cout<<"Enter Product Name To Update : ";
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
				remove("Product_end.bin");
				rename("temp.bin","Product_end.bin");
				break;
			}
			case 5:{
				char del[20];
				file.open("Product_end.bin",ios::in|ios::binary);
				f_temp.open("temp.bin",ios::out|ios::binary);
				cout<<"Enter Product Name To Delete : ";
				fflush(stdin);cin.getline(del,20);
				while(file.read((char*)&pro,sizeof(pro))){
					if(!stricmp(del,pro.getName())==0){
						f_temp.write((char*)&pro,sizeof(pro));
					}
				}
				file.close();
				f_temp.close();
				remove("Product_end.bin");
				rename("temp.bin","Product_end.bin");
				break;
			}
			case 6:{
				int add;
				file.open("Product_end.bin",ios::app|ios::binary);
				cout<<"How many product do you want to add more : ";
				cin>>add;
				for(i=0;i<add;i++){
					cout<<"\n===== Add Product "<<endl;
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				file.close();
				break;
			}
		}	
	}while(op!=0);
}

