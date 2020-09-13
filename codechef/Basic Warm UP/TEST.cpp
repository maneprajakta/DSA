#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,x;
   vector<int>v;
   while(1)
  {  cin>>x;
     if(x==42)
       break;
     else { v.push_back(x);}
  }
  for(int i=0;i<v.size();i++)
     { cout<<v[i]<<endl;}
return 0;
}
