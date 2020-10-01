#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n],b[n],temp,flag=0,sum=0,flag1=0,count=0,size,minele;
        map<long long int,long long int>mp;
        for(i=0;i<n;cin>>a[i],i++);
        for(i=0;i<n;cin>>b[i],i++);
        for(i=0;i<n;i++)
        {
            mp[a[i]]++;
            mp[b[i]]--;
        }
        for(auto x: mp)
        {
            if(abs(x.second%2)!=0)
            {
                flag=1;
            }
        }
            sort(a,a+n);
            sort(b,b+n);
        if(flag==0)
        {
            //map<long long int,long long int>mp1;
            vector<long long int>v;
            for(auto x: mp)
            {
                if(x.second!=0)
                {
                    flag1=1;
                    for(i=0;i<abs(x.second/2);i++)
                    {
                        v.push_back(x.first);
                    }
                }
            }
            if(flag1==1)
            {
                sort(v.begin(),v.end());
                i=0;
                //cout<<i<<" "<<j;
                minele=min(a[0],b[0]);
                while(i<v.size()/2)
                {
                    //cout<<"i am also in";
                    if(minele*2<=v[i])
                    {
                        sum+=minele*2;
                    }
                    else
                    {
                        sum+=v[i];
                    }
                    i++;
                }
                //cout<<"i am in";
                cout<<sum<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}