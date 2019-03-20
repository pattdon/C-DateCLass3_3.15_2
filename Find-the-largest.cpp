#include<iostream>
using namespace std;

int main(){
	int num[10] = {};
	int i = 0;
	int max = num[0];
	while(i < 10){
		cout<<"counter :"<<i<<endl;
		cout<<"number  :";
		cin>>num[i];
		if(max < num[i]){
			max = num[i];
		}
		cout<<"largest :"<<max<<endl;
	}
}
