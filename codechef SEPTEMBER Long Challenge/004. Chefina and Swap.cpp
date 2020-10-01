#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 1000005
#define MOD 1000000007
using namespace std;

vector <lli> v1(MAX,0);

lli answer (lli sum, lli n)
{
	sum = sum*8;
	sum++;
	sum = sqrt(sum);
	return (n-(-1+sum)/2);
}
 
 
int main()
{
	lli t;
	cin>>t;

	for(int i = 1; i <MAX; i++)
		v1[i] = i+ v1[i-1];
	
	set <lli >s1 = {3, 20, 119, 696, 4059, 23660, 137903, 803760, 4684659, 27304196, 159140519, 927538920};
	while(t--)
	{
		lli n;
		cin>>n;
		lli ans = (n*(n+1))/4;
		if(((n%4) == 0)or (((n+1)%4)==0))
		{
			lli count = 0;
			count = answer(ans,n);
			if(s1.find(n) != s1.end())
				count += (((count*(count-1))/2) + (((n-count)*((n-count)-1))/2)); 
			cout<<count<<endl;
		}
		else
			cout<<0<<endl;
	}
	return 0;
}