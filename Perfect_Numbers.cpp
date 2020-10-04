#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,s=0;
        cin>>n;
        long long int sum = 1;  
      for (long long int i=2; i*i<=n; i++) 
      { 
        if (n%i==0) 
        { 
            if(i*i!=n) 
                sum = sum + i + n/i; 
            else
                sum=sum+i; 
        }
      }
        if(sum==n &&n!=1)
        cout<<"YES\n";
        else
        cout<<"NO\n";

         
      
    }
    return 0;
}