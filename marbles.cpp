
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int nck(long long int n,long long int k){
    long long int ans=1;
    if(k>n-k)
    k=n-k;
    for(int i=1;i<=k;i++){
        ans*=n-i+1;
        ans/=i;
    }
    return ans;
}

int main()
{
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      long long int unh=nck(n-1,k-1);
      cout<<unh<<endl;
      
      
    //  long long int ans= (factorial(n-1)/factorial(k-1))/factorial(n-k);
    //  cout<<ans<<endl;
  }

    return 0;
}
