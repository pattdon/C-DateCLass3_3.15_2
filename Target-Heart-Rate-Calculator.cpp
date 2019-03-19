#include<iostream>
using namespace std;

class HeartRates{
	private:
		string firstName;
		string lastName;
		int day;
		int mouth;
		int year;
		int Age;
		int maxRate;
		int Rate;
	public: 
	void get_value(string name1, string last1, int day1,int mouth1,int year1){
		firstName = name1;
		lastName = last1;
		day = day1;
		mouth = mouth1;
		year = year1;
		Age = getAge();
		maxRate = getMaximumHeartRate();
		Rate = getTargetHeartRate();
	}
	int getAge();
	
	int getMaximumHeartRate();
	
	int getTargetHeartRate();
	
	void printAll();
	
};

int HeartRates::getAge(){
		int Age = 0;
		Age = 2018 - year;
		
		cout<<"first name :"<<firstName<<endl;
		cout<<" last name :"<<lastName<<endl;
		cout<<" birthday  :"<<day<<" "<<mouth<<" "<<year;
		cout<<" Age       :"<<Age<<endl;
		
	return Age;
}

int HeartRates::getMaximumHeartRate(){
	    int max = 0;
		  max = 207 - (0.7 * Age);	
		return max;
}

int HeartRates::getTargetHeartRate(){
		int Rate = 0;
		Rate = (85 * maxRate) / 100;
		return Rate;
}

void HeartRates::printAll(){
		cout<<"first name :"<<firstName<<endl;
		cout<<" last name :"<<lastName<<endl;
		cout<<" birthday  :"<<day<<" "<<mouth<<" "<<year;
		cout<<" Age       :"<<Age<<endl;
		cout<<" MaxRate   :"<<maxRate<<endl;
		cout<<" Rate      :"<<Rate<<endl;
}


int main(){
	HeartRates person1;
	person1.get_value("pattadon","nutes",13,5,1999);
	person1.getAge();
	person1.printAll();
	return 0;
}
