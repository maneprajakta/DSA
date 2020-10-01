#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int w;
	    cin>>w;
	    int wt[n];
	    int v[n];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>v[i];
	    }
	    for(int i=1;i<=n;i++)
	    {
	        cin>>wt[i];
	    }
	    int t[n+1][w+1];
	    for(int i=0;i<n+1;i++)
	    {
	        for(int j=0;j<w+1;j++)
	        {
	            if(i==0 || j==0)
	                t[i][j]=0;
	        }
	    }
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<w+1;j++)
	        {
	            if(j>=wt[i])
	            {
	                t[i][j] = max(v[i]+ t[i-1][j-wt[i]],t[i-1][j]);
	            }
	            else
	            {
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    cout<<t[n][w]<<endl;
	}
	return 0;
}
