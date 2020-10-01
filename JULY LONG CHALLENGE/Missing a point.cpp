#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,n,pts;
    cin>>t;
    while(t--)
    {
        cin>>n;
        pts=4*n-1;
        long long int x[pts] , y[pts] ,ans1=0,ans2=0;
        for(i=0;i<pts;i++)
        {
            cin>>x[i]>>y[i];
        }
        for(i=0;i<pts;i++)
        {
            ans1^=x[i];
            ans2^=y[i];
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}