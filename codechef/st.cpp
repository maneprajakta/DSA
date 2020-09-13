#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{   int a[26]={0};
	    int b[26]={0};
	     string s;
	     cin>>s;
	     int num;
	    
	   for(int i=0;i<s.length()/2;i++)
	   {
	       a[s[i]-'a']++;
	   }
	   if(s.length()%2==0)
	   {
	       num=s.length()/2;
	   }
	   else{
	       num=s.length()/2 + 1;
	   }
	   for(int i=num;i<s.length();i++)
	   {
	       b[s[i]-'a']++;
	   }
	   int c=0;
	   for(int i=0;i<26;i++)
	   {
	       if(a[i]==b[i])
	       {
	           c=c+a[i];
	       }
	       
	   }
             cout<<c;
	   if(c==s.length()/2)
	   {
	   cout<<"YES"<<endl;
	   }
	   else{
	       cout<<"NO"<<endl;
	   }
	}
	return 0;
}
