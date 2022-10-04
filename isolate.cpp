#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n ,m;
        cin>>n>>m;
        // when isolation exist then
        if(n==1||m==1){
            cout<<n<<" "<<m<<endl;

        }
        // when no isolation 
        else{
            cout<< 2 <<" "<< 2 <<endl;
        }


    }
    return 0;
}