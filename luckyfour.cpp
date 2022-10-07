#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int num, cnt=0;
        cin>>num;
        while(num>0){
            if((num%10)==4){
                cnt++;
                
            }
            num /= 10;
            //cout<<cnt<<endl; 
        }
        cout<<cnt<<endl;
    }
	// your code goes here
	return 0;
}