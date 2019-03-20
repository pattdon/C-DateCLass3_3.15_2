#include <iostream>

using namespace std;

class credit{
    private:
        int numberAccount = 0;
        int balance = 0;
        int item = 0;
        int credit = 0;
        int creditLimit = 0;
        int newBlance = 0;
    public:
        void setvalue(){
            cout<<"Account number :";
            cin>>numberAccount;
            cout<<"balance at the beginning of the month                             :";
            cin>>balance;
            cout<<"Total of all items charged by this customer this month            :";
            cin>>item;
            cout<<"Total of all credit applied to this customer's account this montn :";
            cin>>credit;
            cout<<"Allowed credit limit                                              :";
            cin>>creditLimit;
            newBlance = findBlance();
            cout<<"credit Limit Exceeded                                             :"<<newBlance<<endl;
        }
        int findBlance(){
            int ans = 0;
            ans = balance+item-credit;
            return ans; 
        }
}

int main() {
    while()
}
