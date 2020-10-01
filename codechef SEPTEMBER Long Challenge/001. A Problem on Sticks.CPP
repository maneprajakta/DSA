#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
#define MAX 1000005
#define MOD 1000000007
using namespace std;


int main()
{
	int t;
	cin>>t;
	for(int tc =0; tc<t; tc++)
	{
		int n;
		cin>>n;
		vector <lli> v1(n);
		for(int i =0; i<n; i++)
			cin>>v1[i];
		sort(v1.begin(), v1.end());
		int count = 0;
		lli prev = 0;
		for(int i =0; i<n; i++)
		{
			if(prev < v1[i])
				count++;
			prev = v1[i];
		}
		cout<<count<<endl;
	}
	return 0;
}