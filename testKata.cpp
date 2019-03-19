#include<iostream>
using namespace std;

int sequenceSum(int start, int end, int step)
{
int sum = start;
int ans = start;
if(ans < end ){
  while(true){
	  sum = sum + step;
    if(sum <= end){
  	   ans += sum;
    }else if(sum > end){
  	   break;
    }	
  }
}else if(ans == end){
	ans = end;
}else{
	ans = 0;
}
  return ans;
}

int main(){
 cout<<sequenceSum(2, 2, 2);
}
