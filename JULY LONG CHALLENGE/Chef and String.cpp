#include <iostream>
using namespace std;

int main() {
	long long int t,i,j,k;
	cin>>t;
	while(t--)
	{
	    long long int n,sum=0;
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;cin>>a[i],i++);
	    for(i=0;i<n-1;i++)
	    {
	        sum+=abs(a[i]-a[i+1])-1;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
