#include<iostream>
#include<stdio.h> 
using namespace std;

 int main(){
	float sale = 0;
	float rate = 0;
	float salary = 0;
	while(true){
		cout<<"enter hours worked (-1 to end) : ";
		cin>>sale;
		if(sale  < 0){
			break;
		}
		cout<<"enter hourly rate of the employee($00.00):";
		cin>>rate;
		salary = rate * sale;
		cout<<"Salary is :$";
		printf("%0.2f",salary);
		cout<<endl;
	} 
	return 0;
}
