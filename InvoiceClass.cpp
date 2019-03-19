#include<iostream>
using namespace std;

class Invoice{
	private:
		string number;
		string description;
		int quantity;
		int price;
	public:
	    int getInvoiceAmount(string number1,string description1,int quantity1,int price1){
		   int send = 0;
		       number = number1;
		       description = description1;
		       price = price1;
		   
		       if(quantity1 > 0){
		      	    quantity = quantity1;
		       }else{
		   	        quantity = 0;
		        }
		   
		   send = quantity * price;
		 return send;
		}
		void display();
};

void Invoice::display(){
		cout<<"number      : "<<number<<endl;
		cout<<"description : "<<description<<endl;
		cout<<"quatity     : "<<quantity<<endl;
		cout<<"price       : "<<price<<endl;
}

int main(){
	Invoice item;
	cout<<item.getInvoiceAmount("222","fuck",-10,12)<<endl;
	item.display();
}
