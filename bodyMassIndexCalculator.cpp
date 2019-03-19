#include<iostream>
using namespace std;
int main(){
	double BMLInches = 0;
	double WIP = 0;
	double HIIInches = 0;
	
	double BMLMeters = 0;
	double WIK = 0;
	double HIIMeters = 0;
	
	cout<<"weightInPounds: ";
	cin>> WIP;
	cout<<"heightInInches: ";
	cin>> HIIInches;	
	BMLInches = (WIP * 703)/(HIIInches*HIIInches);
	cout<<BMLInches<<endl;
	
	cout<<"weightInkilograms: ";
	cin>> WIK;
	cout<<"heightInInches: ";
	cin>> HIIMeters;	
	BMLMeters = WIK/(HIIMeters*HIIMeters);
	cout<<BMLMeters<<endl;
}
