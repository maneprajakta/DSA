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
		vector < vector <int> >v1(n, vector<int>(n));
		for(int i =0; i<n;i++)
			for(int j =0; j<n; j++)
				cin>>v1[i][j];
		int i = n-1;
		int count = 0;
		bool change = true;
		while(i>0)
		{
			if(v1[i][i-1] < v1[i-1][i])
			{
				if(change)
				{
					count++;
					change = false;	
				}
			}
			else
			{	
				if(!change)
				{
					count++;
					change = true;	
				}
			}
			i--;
		}
		cout<<count<<endl;

	}
	return 0;
}