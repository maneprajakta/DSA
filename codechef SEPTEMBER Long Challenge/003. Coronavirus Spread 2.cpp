#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 

int main()
{
	
	int test;
	cin>>test;
	while(test--)
	{
		int no;
	 	cin>>no;
	 int covid[no];
	 int count=1;
	 int count1=1;
	 int mini=INT_MAX;
	 int maxit=1;
	 for(int i=0;i<no;i++)
	 {
	 	cin>>covid[i];

	 }
	 
	 int mint=INT_MAX;
	 int maxmumm=INT_MIN;
	 for(int i=0;i<no;i++)
	 {
	 	mint=INT_MAX;
	 	count=1;
	 	 maxmumm=INT_MIN;
	 	for(int j=0;j<i;j++)
		 {
		 	maxmumm=max(covid[j],maxmumm);
		 	if(covid[j]>covid[i] )
		 	{
		 		
		 		count++;
			 }
		 }
	 	 
	 	 
	 	 
	 	 
	 	for(int j=i+1;j<no;j++)
	 	{
	 		mint=min(covid[j],mint);
	 		
	 		if(covid[i]>covid[j] || maxmumm>covid[j])
	 		{
	 			count++;
			 }
			 
		 }
		 for(int j=0;j<i;j++)
		 {
		 	if(covid[j]<=covid[i]  && covid[i]>mint)
		 	{
		 		if(covid[j]>mint)
		 		{
		 			count++;
				 }
			 }
		 }
		 
		 
		 mini=min(count,mini);
		 
		 
	 }
	 
	 
	 
	 int maxxxx=INT_MIN;
	 for(int i=0;i<no;i++)
	 {
	 	count=1;
	 	maxxxx=INT_MIN;
	 	 for(int j=0;j<i;j++)
		 {
		 	maxxxx=max(covid[j],maxxxx);	
		 	if(covid[j]>covid[i])
		 	{
		 		count++;
			 }
		 }
		 
	 	for(int j=i+1;j<no;j++)
	 	{
	 		
	 		if(covid[i]>covid[j] || maxxxx>covid[j])
	 		{
	 			count++;
			 }
			 
		 }
		 for(int j=0;j<i;j++)
		 {
		 	if(covid[j]<=covid[i]  && covid[i]>mint)
		 	{
		 		if(covid[j]>mint)
		 		{
		 			count++;
				 }
			 }
		 }
		 
		 
		 maxit=max(count,maxit);
		 
	 }
	 
		
	 cout<<mini<<" "<<maxit<<endl;
	}
	
	return 0;
}