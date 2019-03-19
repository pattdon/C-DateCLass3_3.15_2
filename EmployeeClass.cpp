#include<iostream>
using namespace std;

class Employee{
	private:
		string firstName;
		string lastName;
		int salary;
	public:
	void set_values(string name1,string Last1,int salary1){
		firstName = name1;
		lastName = Last1;
		if(salary1 > 0){
			salary = salary1;
		}else{
			salary = 0;
		}	
	}
	void displayEmployee(){
		cout<<"firstName :"<<firstName<<endl;
		cout<<"lastName  :"<<lastName<<endl;
		cout<<"salary mouth:"<<salary<<endl;
	}
};

int main(){
	Employee person1, person2;
	person1.set_values("pattadon","nutes",10000);
	person1.displayEmployee();
	
	person2.set_values("nnnnn","ssss",-1);
	person2.displayEmployee();
}


