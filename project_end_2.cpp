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
			qty=0;
			strcpy(name,"null");
			price=0.0;
		}
		Product(int code,char* name,int qty ,float price){
			this->code=code;
			strcpy(this->name,name);
			this->qty=qty;
			this->price=price;
		}
		void Input(){
			cout<<"Enter Product Code  : "; cin>>code;
			cout<<"Enter Product Name  : "; fflush(stdin);cin.getline(name,20);
			cout<<"Enter Product Qty   : "; cin>>qty;
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
			}else if(Total()>40 && Total()<50){
				return 50;
			}else{
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
		int getcode(){
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
	Product pro;
	fstream file,f_temp;
	int i,n,op;
	
	do{
		cout<<"[1]. Input.................."<<endl;
		cout<<"[2]. Output................."<<endl;
		cout<<"[3]. Search................."<<endl;
		cout<<"[4]. Update................."<<endl;
		cout<<"[5]. Delete................."<<endl;
		cout<<"[6]. Insert................."<<endl;
		cout<<"[7]. Sort_Code.............."<<endl;
		cout<<"[8]. Append................."<<endl;
		cout<<"[9] Or [0] .For Exit........"<<endl;
		cout<<"----------------------------"<<endl;
		cout<<"Please Enter one option => ";
		cin>>op;
		
		switch(op){
			case 1:{
				file.open("Products.bin",ios::out|ios::binary);
				cout<<"How many product do you want to input ?"<<endl;
				cout<<"Enter number of product : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\nProduct "<<i+1<<endl;
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				
				file.close();	
				break;
			}
			case 2:{
				system("color B");
				system("cls");
				file.open("Products.bin",ios::in|ios::binary);
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
				file.open("Products.bin",ios::in|ios::binary);
				cout<<"Enter Product Name to search : ";
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
				remove("Products.bin");
				rename("temp.bin","Products.bin");				
				break;
			}
			case 5:{
				char del[20];
				file.open("Products.bin",ios::in|ios::binary);
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
				remove("Products.bin");
				rename("temp.bin","Products.bin");
				break;
			}
			case 6:{
				char insert[20];
				Product p_temp;
				file.open("Products.bin",ios::in|ios::binary);
				f_temp.open("temp.bin",ios::out|ios::binary);
				cout<<"Where product do you want to insert : ";
				fflush(stdin);cin.getline(insert,20);
				
				while(file.read((char*)&pro,sizeof(pro))){
					if(stricmp(insert,pro.getName())==0){
						p_temp.Input();
						f_temp.write((char*)&p_temp,sizeof(p_temp));
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
				Product p[20],temp_pro;
				i=0;
				n=0;
				int j=0;
				file.open("Products.bin",ios::in|ios::binary);
				while(file.read((char*)&pro,sizeof(pro))){
					p[n]=pro;
					n++;
				}
				file.close();
				file.open("Products.bin",ios::out|ios::binary);
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(p[i].getcode()>p[j].getcode()){
							temp_pro=p[i];
							p[i]=p[j];
							p[j]=temp_pro;
						}
					}
				}
				for(i=0;i<n;i++){
					file.write((char*)&p[i],sizeof(p[i]));
				}
				file.close();
				
				system("color B");
				system("cls");
				file.open("Products.bin",ios::in|ios::binary);
				Head();
				while(file.read((char*)&pro,sizeof(pro))){
					pro.Output();
				}
				cout<<"\t\t"<<string(69,'-')<<endl;
				file.close();
				break;
			}
			case 8:{
				file.open("Products.bin",ios::app|ios::binary);
				cout<<"How many product do you want to add : ";
				cin>>n;
				for(i=0;i<n;i++){
					pro.Input();
					file.write((char*)&pro,sizeof(pro));
				}
				file.close();
				break;
			}
			case 9: case 0:{
				cout<<"=========> Good bye..!"<<endl;
				exit(1);
				break;
			}
			default:{
				cout<<"Please try again..!"<<endl<<endl;
				break;
			}
		}
		
	}while(op!=0);
}


