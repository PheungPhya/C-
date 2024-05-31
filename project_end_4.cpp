#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
#include<windows.h>
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
			price=0;
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
			cout<<"Enter Product Price : ";	cin>>price;
		}
		float Total(){
			return price*qty;
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
			return Total() - (Total()*Dis()/100);
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
		cout<<"[7]. Sort_Code..............."<<endl;
		cout<<"[8]. Append.................."<<endl;
		cout<<"[9] Or [0] For Exit ........."<<endl;
		cout<<"Please select one option => ";
		cin>>op;
		switch(op){
			case 1:{
				file.open("Product_Etec3.bin",ios::out|ios::binary);
				cout<<"How many product do you want to input ? "<<endl;
				cout<<"Enter value of product : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n========> product "<<i+1<<endl;
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				file.close();
				break;
			}
			case 2:{
				file.open("Product_Etec3.bin",ios::in|ios::binary);
				if(!file){
					cout<<"can't find file"<<endl;
					return 0;
				}
				system("cls");
				system("Color B");
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
				int found=0;
				file.open("Product_Etec3.bin",ios::in|ios::binary);
				cout<<"Enter Product Name to search : ";
				fflush(stdin);cin.getline(search,20);
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(search,pro.getName())==0){
						Head();
						pro.Output();
						cout<<"\t\t"<<string(69,'-')<<endl;
						found=1;
					}
				}
				if(found==0){
					system("Color 4");
					cout<<"Search not found"<<endl;
				}
				file.close();
				break;
			}
			case 4:{
				char update[20];
				file.open("Product_Etec3.bin",ios::in|ios::binary);
				f_temp.open("temp.bin",ios::out|ios::binary);
				cout<<"Enter product name to update : ";
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
				remove("Product_Etec3.bin");
				rename("temp.bin","Product_Etec3.bin");
				break;
			} 
			case 5:{
				char del[20];
				file.open("Product_Etec3.bin",ios::in|ios::binary);
				f_temp.open("temp.bin",ios::out|ios::binary);
				cout<<"Enter product name to delete : ";
				fflush(stdin);cin.getline(del,20);
				
				while(file.read((char*)&pro,sizeof(pro))){
					if(!stricmp(del,pro.getName())==0){
						f_temp.write((char*)&pro,sizeof(pro));
					}
				}
				file.close();
				f_temp.close();
				remove("Product_Etec3.bin");
				rename("temp.bin","Product_Etec3.bin");
				break;
			}
			case 6:{
				Product p_in;
				char insert[20];
				file.open("Product_Etec3.bin",ios::in|ios::binary);
				f_temp.open("temp.bin",ios::out|ios::binary);
				cout<<"Enter place name for insert : ";
				fflush(stdin);cin.getline(insert,20);
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(insert,pro.getName())==0){
						p_in.Input();
						f_temp.write((char*)&p_in,sizeof(p_in));
						f_temp.write((char*)&pro,sizeof(pro));
					}else{
						f_temp.write((char*)&pro,sizeof(pro));
					}
				}
				file.close();
				f_temp.close();
				remove("Product_Etec3.bin");
				rename("temp.bin","Product_Etec3.bin");
				break;
			}
			case 7:{
				Product p[20],p_temp;
				int j;
				n=0;
				file.open("Product_Etec3.bin",ios::in|ios::binary);
				while(file.read((char*)&pro,sizeof(pro))){
					p[n]=pro;
					n++;
				}
				file.close();
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(p[i].getCode()>p[j].getCode()){
							p_temp=p[i];
							p[i]=p[j];
							p[j]=p_temp;
						}
					}
				}
				file.open("Product_Etec3.bin",ios::out|ios::binary);
				for(i=0;i<n;i++){
					file.write((char*)&p[i],sizeof(p[i]));
				}
				file.close();
				file.open("Product_Etec3.bin",ios::in|ios::binary);
				if(!file){
					cout<<"can't find file"<<endl;
					return 0;
				}
				system("cls");
				system("Color B");
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
				file.open("Product_Etec3.bin",ios::app|ios::binary);
				cout<<"How many product do you want to add more : ";
				cin>>add;
				for(i=0;i<add;i++){
					cout<<"\n========> product add more "<<i+1<<endl;
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				file.close();
				break;
			}
			case 9: case 0:{
				cout<<"======> Good bye...!!"<<endl;
				exit(1);
				break;
			}
			default:{
				cout<<"Please try again..!"<<endl;
				break;
			}
		}	
	}while(op!=0);	
	return 0;
}
