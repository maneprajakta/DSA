#include <iostream>
using namespace std;
long long int mysum(long long int n)
{
    string s;
    int i,sum=0;
    s=to_string(n);
    if(s.length()==1)
    {
        sum=n;
    }
    else
    {
            sum=0;
            for(i=0;i<s.length();i++)
            {
                sum+=s[i]-48;
            }
            s=to_string(sum);
    }
    return sum;
}
int main() {
	// your code goes here
	long long int t,n,i,j,k;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int w1=0,w2=0;
	    while(n--)
	    {
	        long long int a,b,a1=0,b1=0;
	        cin>>a>>b;
	        a1=mysum(a);
	        b1=mysum(b);
	        if(a1>b1)
	        {
	            w1+=1;
	        }
	        else if(a1<b1)
	        {
	            w2+=1;
	        }
	        else
	        {
	            w1+=1;
	            w2+=1;
	        }
	    }
	    if(w1>w2)
	    {
	        cout<<0<<" "<<w1<<endl;
	    }
	    else if(w2>w1)
	    {
	        cout<<1<<" "<<w2<<endl;
	    }
	    else
	    {
	        cout<<2<<" "<<w1<<endl;
	    }
	}
	return 0;
}
