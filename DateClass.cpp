#include<iostream>
using namespace std;

class Date{
  private:
	int mouth;
	int day;
	int year;
  public:
	void set_values(int day1, int mouth1,int year1){
		if(mouth1 > 0 && mouth1 <= 12){
			mouth = mouth1;
		}else{
			mouth = 1;
		}
		
		if(day1 > 0 && day1 <= 31){
			day = day1;
		}else{
			day = 1;
		}
		
		if(year1 > 0){
		  year = year1;
	    }else{
	    	year = 1;
		}
	}
	void dispalyDate(){
		cout <<"mouth :"<<mouth <<endl;
		cout <<"day   :"<<day << endl;
		cout <<"year  :"<<year<<endl;
	}
};

int main(){
	Date date1;
	date1.set_values(18,3,-1999);
	date1.dispalyDate();
}
