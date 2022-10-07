#include <iostream>
using namespace std;

int main() {
    double money_avaiable, output_money;
    int money_needed;
    cin>>money_needed>>money_avaiable;
    if ((money_needed+0.50)<=money_avaiable){
    if(money_needed%5==0){
        output_money= money_avaiable -money_needed -0.50;
        cout<<output_money;
    }else{
        cout<<money_avaiable;
    }}
    else{
        cout<<money_avaiable;
    }
	// your code goes here
	// your code goes here
	return 0;
}