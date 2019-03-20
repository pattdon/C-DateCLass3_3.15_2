#include<iostream>
#include<stdio.h> 
using namespace std;

int main(){
	float sale = 0;
	float salary = 0;
	while(true){
		cout<<"enter sale in dollar (-1 to end) : ";
		cin>>sale;
		if(sale  < 0){
			break;
		}
		salary = ((9 * sale) / 100)+200;
		cout<<"Salary is :$";
		printf("%0.2f",salary);
		cout<<endl;
	} 
	return 0;
}
