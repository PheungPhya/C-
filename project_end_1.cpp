#include<iostream>
#include<string.h>
#include<iomanip>
#include<fstream>
using namespace std;

class Product{
	private:
		int id,qty;
		char name[20];
		float price;
	public:
		Product(){
			id=0;
			qty=0;
			strcpy(name,"null");
			price=0.0;
		}	
		Product(int id,char *name,float price,int qty){
			this->id=id;
			strcpy(this->name,name);
			this->price=price;
			this->qty=qty;
		}
		void Input(){
			cout<<"Enter Product Id    : "; cin>>id;
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
			return Total() - (Total() * Dis() / 100);
		}
		void Output(){
			cout<<"\t\t|"<<left<<setw(10)<<id
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
		int getId(){
			return id;
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
	Product pro,pro_temp;
	fstream file,file_temp;
	int i,j,op,n=0;	
	do{
		cout<<"[1]. Write.........."<<endl;
		cout<<"[2]. Read..........."<<endl;
		cout<<"[3]. Search........."<<endl;
		cout<<"[4]. Update........."<<endl;
		cout<<"[5]. Remove........."<<endl;
		cout<<"[6]. Insert........."<<endl;
		cout<<"[7]. Append........."<<endl;
		cout<<"[8]. Sort_Id........"<<endl;
		cout<<"[9] Or [0] For Exit."<<endl;
		cout<<"======================"<<endl;
		cout<<"choose one option => ";
		cin>>op;		
		switch(op){
			case 1:{				
				file.open("Product.bin",ios::out|ios::binary);
				cout<<"(<>).How many product do you want to enter ? "<<endl;
				cout<<"Enter number of product : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n====> Product "<<i+1<<endl;
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				file.close();				
				break;
			}
			case 2:{				
				file.open("Product.bin",ios::in|ios::binary);
				system("cls");
				system("color B");
				Head();
				while(file.read((char*)&pro,sizeof(pro))){
					pro.Output();
				}
				cout<<"\t\t"<<string(69,'-')<<endl;
				file.close();
				break;
			}
			case 3:{
				file.open("Product.bin",ios::in|ios::binary);
				char search[20];
				cout<<"Enter Product Name to search : ";
				fflush(stdin);cin.getline(search,20);				
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(search,pro.getName())==0){
						Head();
						pro.Output();
					}					
				}
				cout<<"\t\t"<<string(69,'-')<<endl;
				file.close();				
				break;
			}
			case 4:{
				file.open("Product.bin",ios::in|ios::binary);
				file_temp.open("temp.bin",ios::out|ios::binary);
				char update[20];
				cout<<"Enter Name to update : ";
				fflush(stdin);cin.getline(update,20);
				
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(update,pro.getName())==0){
						pro.Input();
						file_temp.write((char*)&pro,sizeof(pro));
					}else{
						file_temp.write((char*)&pro,sizeof(pro));	
					}
				}
				file.close();
				file_temp.close();
				remove("Product.bin");
				rename("temp.bin","Product.bin");
				break;
			}
			case 5:{
				char Remove[20];
				file.open("Product.bin",ios::in|ios::binary);
				file_temp.open("temp.bin",ios::out|ios::binary);
				cout<<"Enter Product to delete : ";
				fflush(stdin);cin.getline(Remove,20);				
				while(file.read((char*)&pro,sizeof(pro))){
					if(!stricmp(Remove,pro.getName())==0){
						file_temp.write((char*)&pro,sizeof(pro));
					}
				}
				file.close();
				file_temp.close();
				remove("Product.bin");
				rename("temp.bin","Product.bin");				
				break;
			}
			case 6:{
				char insert[20];
				file.open("Product.bin",ios::in|ios::binary);
				file_temp.open("Temp.bin",ios::out|ios::binary);
				cout<<"Where product do you want to insert : ";
				fflush(stdin);cin.getline(insert,20);
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(insert,pro.getName())==0){
						pro_temp.Input();
						file_temp.write((char*)&pro_temp,sizeof(pro_temp));
						file_temp.write((char*)&pro,sizeof(pro));
					}else{
						file_temp.write((char*)&pro,sizeof(pro));
					}
				}
				file.close();
				file_temp.close();
				remove("Product.bin");
				rename("Temp.bin","Product.bin");
				break;
			}
			case 7:{
				int append;
				file.open("Product.bin",ios::app|ios::binary);
				cout<<"Enter number of more Product : ";
				cin>>append;
				for(i=0;i<append;i++){
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				file.close();
				break;
			}
			case 8:{
				Product p[20],temp;
				n=0;
				file.open("Product.bin",ios::in|ios::binary);
				while(file.read((char*)&pro,sizeof(pro))){
					p[n]=pro;
					n++;
				}
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(p[i].getId() > p[j].getId()){
							temp=p[i];
							p[i]=p[j];
							p[j]=temp;
						}
					}
				}
				file.close();
				file.open("Product.bin",ios::out|ios::binary);
				for(i=0;i<n;i++){
					file.write((char*)&p[i],sizeof(p[i]));
				}
				file.close();
				
				break;
			}
			case 9: case 0:{
				cout<<"=======> Good Bye!!!"<<endl;
				exit(1);
				break;
			}
		}	
	}while(op!=0);
	return 0;
}
