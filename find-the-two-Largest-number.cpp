#include<iostream>
using namespace std;


int main(){
	int num[10] = {};
	int i = 0;
	int secord = 0;
	int max = 0;
	while(i < 10){
		cout<<"counter :"<<i<<endl;
		cout<<"number  :";
		cin>>num[i];
		
		if(secord < num[i]){
			secord = num[i];
		}
		
		if(max < num[i]){
			secord = max;
			max = num[i];
			
		}

		cout<<"largest :"<<max<<endl;
		cout<<"secord  :"<<secord<<endl;
		cout<<"-----------------------"<<endl;
	}
}

