#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<int>l;
    while(t--)
    {    vector<char>v;
         int n,k;
         char p;
         cin>>n>>k;
         for(int i=0;i<n;i++)
         {
             cin>>p;
             v.push_back(p);
         }
         for(int i=0;i<k;i++)
         {
             if(v[v.size()-1]=='H')
             {
                v.pop_back();
                for(int i=0;i<v.size();i++)
                {
                    if(v[i]=='H')
                    {v[i]=='T';
                    
                    }
                    else{
                        v[i]=='H';
                    }
                    
                }
             }
             else{
                v.pop_back();
             }
         }
         int c=0;
         for(int i=0;i<v.size();i++)
         {if(v[i]=='H')
             {c++;}
         }
         l.push_back(c);
    }
    for(int i=0;i<l.size();i++)
    {cout<<l[i]<<endl;}
	return 0;
}

