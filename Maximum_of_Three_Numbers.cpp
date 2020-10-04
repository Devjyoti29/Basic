#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a[3];
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        int max=(a[0]>a[1])?a[0]:a[1];
        if(a[2]>max)
        max=a[2];
        cout<<max<<"\n";
        

    }
}