#include <bits/stdc++.h>
using namespace std;
int lar2(int a[])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    return a[1];
}
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