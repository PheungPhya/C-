#include<iostream>
#include<iomanip>
using namespace std;

void sum1(int n){
	int i,s=0;
	for(i=1;i<=n;i++){
		s=s+i;
		cout<<i<<" + ";
	}
	cout<<"\b\b= "<<s<<endl;
}

void sum2(int n){
	int i=2,s=0;
	
	while(i<=n){
		s=s+i;	
		cout<<i<<" + ";
		i+=2;
	}
	cout<<"\b\b= "<<s<<endl;
}

int sum3(int n){
	int i=3,s=0;
	
	do{
		s=s+i;
		cout<<i<<" + ";
		i+=2;
	}while(i<=n);
	return s;
}

void sum4(int n){
	int i,f=1,s=0;
	
	for(i=1;i<=n;i++){
		f=f*i;
		s=s+f;
		cout<<f<<" + ";
	}
	cout<<"\b\b= "<<s<<endl;
}

int main(){
	int n;
	cout<<"Enter value n : ";
	cin>>n;
	int sum;
	
	sum1(n);
	sum2(n);
	sum=sum3(n);
	cout<<"\b\b= "<<sum<<endl;
	sum4(n);
	
	return 0;
}
