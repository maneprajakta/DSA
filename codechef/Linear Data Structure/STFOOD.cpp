#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	
	while(t--)
	{   priority_queue<int>heap;
	    int n;
	    cin>>n;
	    while(n--)
	    {
	      int s,p,v;
	    
	      cin>>s>>p>>v;
	      heap.push(p/(s+1) * v);
	      
	    
	    }
	    
	    cout<<heap.top()<<endl;
	}
	return 0;
}

