#include<iostream>
using namespace std;

class HealthProfile{
	private:
		string firstName;
		string lastName;
		string gander;
		int day;
		int mouth;
		int year;
		int height;
		int weight;
		int Age;
		int maxRate;
		int Rate;
		int BMI;
	public:
		void set_values(string firstName1, string lastName1, string gander1,int day1,int mouth1,int year1,int height1, int weight1){
		        firstName = firstName1;
		        lastName = lastName1;
		        gander = gander1;
		        day = day1;
		        mouth = mouth1;
		        year = year1;
		        height = height1;
		        weight = weight1;
		        Age = getAge();
		        maxRate = getMaximumHeartRate();
		        Rate = getTargetHeartRate();
		        BMI = getBMI();
	    }
	    
	    int getAge();
	    
		int getMaximumHeartRate();
		
		int getTargetHeartRate();
		
		int getBMI();
		
		void printAll();
	
};

int HealthProfile::getBMI(){
	int ans = 0;
	ans = weight/((height*height)/10000);
	return ans;
}

int HealthProfile::getAge(){
		int Age = 0;
		Age = 2018 - year;		
	return Age;
}

int HealthProfile::getMaximumHeartRate(){
	    int max = 0;
		  max = 207 - (0.7 * Age);	
		return max;
}

int HealthProfile::getTargetHeartRate(){
		int Rate = 0;
		Rate = (85 * maxRate) / 100;
		return Rate;
}

void HealthProfile::printAll(){
		cout<<"first name :"<<firstName<<endl;
		cout<<" last name :"<<lastName<<endl;
		cout<<" birthday  :"<<day<<" "<<mouth<<" "<<year;
		cout<<" Age       :"<<Age<<endl;
		cout<<" MaxRate   :"<<maxRate<<endl;
		cout<<" Rate      :"<<Rate<<endl;
		cout<<" BMI value :"<<BMI<<endl;
}



int main(){
	HealthProfile person1;
	person1.set_values("pattadon","nutes","male",13,5,1999,170,60);
	person1.printAll();
}
