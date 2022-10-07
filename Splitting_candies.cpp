#include <iostream>

using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--){
     long int n,k;
     cin>>n>>k;
     if(k==0)
     cout<<0<<" "<<n<<endl;
    else {long int t=n/k;
    cout<<t<<" "<<n-t*k<<endl;}
 }

    return 0;
}