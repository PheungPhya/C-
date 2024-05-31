#include<iostream>
#include<iomanip>
using namespace std;

class Worker{
	private:
		int id;
		string name,gender;
		int hour;
		float salary,rate;
	public:
		void Input(){
			cout<<"Enter ID : ";cin>>id;
			cout<<"Enter Name : ";fflush(stdin);getline(cin,name);
			cout<<"Enter Gender : ";getline(cin,gender);
			cout<<"Enter Salary : ";cin>>salary;
			cout<<"Enter Rate   : ";cin>>rate;
			cout<<"Enter Hour   : ";cin>>hour;
		}
		void Output(){
			cout<<left<<setw(8)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<gender
				<<'$'<<left<<setw(10)<<salary
				<<left<<setw(10)<<hour
				<<'$'<<left<<setw(10)<<rate
				<<'$'<<left<<setw(10)<<Income()<<endl;
			cout<<string(65,'-')<<endl;
		}
		void Update(){
			cout<<left<<setw(8)<<id
				<<left<<setw(10)<<name
				<<left<<setw(10)<<gender
				<<'$'<<left<<setw(10)<<salary
				<<left<<setw(10)<<hour
				<<'$'<<left<<setw(10)<<rate
				<<'$'<<left<<setw(10)<<Add()<<endl;
			cout<<string(65,'-')<<endl;
		}
		
		float Add(){
			return Income()+(Income()*0.15);
		}
		float Income(){
			return salary+(rate*hour);
		}
		int getId(){
			return id;
		}
		void setId(int id){
			this->id=id;
		}
};

int Menu(){
	int op;
	cout<<"\n\n==============> Information <============\n";
	cout<<"[1]. Input"<<endl;
	cout<<"[2]. Output"<<endl;
	cout<<"[3]. Search"<<endl;
	cout<<"[4]. Maximum Income"<<endl;
	cout<<"[5]. Minimum Income"<<endl;
	cout<<"[6]. Equal  Income"<<endl;
	cout<<"[7]. Sort ID"<<endl;
	cout<<"[8]. Sum Total Income"<<endl;
	cout<<"[9]. Add 15% to Income < 150$ "<<endl;
	cout<<"[10]. Insert"<<endl;
	cout<<"[11]. Delete"<<endl;
	cout<<"[12]. Clear"<<endl;
	cout<<"[13]. Exit"<<endl;
	cout<<"================="<<endl;
	cout<<"Select one option : ";
	cin>>op;
	return op;
}
void Head(){
	cout<<string(65,'=')<<endl;
	cout<<left<<setw(8)<<"ID"
		<<left<<setw(10)<<"NAME"
		<<left<<setw(10)<<"GENDER"
		<<left<<setw(10)<<"SALARY"
		<<left<<setw(10)<<"HOUR"
		<<left<<setw(10)<<"RATE"
		<<left<<setw(10)<<"INCOME"<<endl;
	cout<<string(65,'-')<<endl;
}

int main(){
	
	Worker work[20];
	int i,j,n;
		
	do{
		switch(Menu()){
			case 1:{
				cout<<"Enter number of worker : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\n======> Worker "<<i+1<<endl;
					work[i].Input();
				}
				break;
			}
			case 2:{
				Head();
				for(i=0;i<n;i++){
					work[i].Output();
				}
				break;
			}
			case 3:{
				int search;
				cout<<"Enter Id worker to search : ";
				cin>>search;
				for(i=0;i<n;i++){
					if(search==work[i].getId()){
						Head();
						work[i].Output();
					}
				}
				break;
			}
			case 4:{
				cout<<"The worker has income maximum is : "<<endl;
				int max=0;
				for(i=0;i<n;i++){
						if(work[max].Income() < work[i].Income()){
							max = i;
						}			
				}
				Head();
				work[max].Output();
				break;
			}
			case 5:{
				cout<<"The worker has income minimum is : "<<endl;
				int min=0;
				for(i=0;i<n;i++){
						if(work[min].Income() < work[i].Income()){
							min = i;
						}			
				}
				Head();
				work[min].Output();
				break;
			}
			case 6:{
			    cout<<"The worker(s) with equal income is/are: "<<endl;
			    int found = 1;
			    for(i=0;i<n-1;i++){
			        for(j=i+1;j<n;j++){// 
			            if(work[i].Income() == work[j].Income() ){   // 1 2 3 4 5 // 1 1 1 2 1
			                if (found==1) {							
			                    Head();
			                    found = 0;
			                }
			                if(work[i].getId()==work[j].getId()){
			                	continue;
							}
			                work[i].Output();     
			                work[j].Output();	  
			            }
			        }
			    }
			    break;
			}
			case 7:{
				Worker temp;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(work[i].getId() > work[j].getId()){
							temp = work[i];
							work[i]=work[j];
							work[j]=temp;
						}
					}
				}
				Head();
				for(i=0;i<n;i++){
					work[i].Output();
				}
				break;
			}
			case 8:{
				float total=0;
				for(i=0;i<n;i++){
					total = total + work[i].Income();
				}
				cout<<"Total Income is = "<<total<<"$"<<endl;
				break;
			}
			case 9:{
				int index=0;
				cout<<"=========> Add 15% to Worker that less than 150$"<<endl;
				for(i=0;i<n;i++){
					if(work[i].Income() < 150 ){
							if(index==0){
								Head();
								index++;
							}
							work[i].Update();					
					}
				}				
				break;
			}
			case 10:{
				int insert;
				cout<<"Enter place id you want to insert : ";
				cin>>insert;
				for(i=0;i<n;i++){
					if(insert==work[i].getId()){
						for(j=n;j>i;j--){
							work[j]=work[j-1];
						}
						n++;
						work[i].Input();
						break;
					}
				}
				break;
			}
			case 11:{
				int del;
				cout<<"Enter id to delete : ";
				cin>>del;
				for(i=0;i<n;i++){
					if(del==work[i].getId()){
						for(j=i;j<n;j++){
							work[j]=work[j+1];
						}
						n--;
					}
				}
				break;
			}
			case 12:{
				system("cls");
				break;
			}
			case 13:{
				cout<<"=========> Good Bye!"<<endl;
				exit(1);
				break;
			}
			default:{
				cout<<"Please try again!"<<endl;
				break;
			}
		}	
	}while(1);
	
	return 0;
}
