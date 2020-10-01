#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,n,pts,ans1,ans2,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=0,b=0;
        char chess[8][8]={{'O','X','X','X','X','X','X','X'},{'X','X','X','X','X','X','X','X'},{'X','X','X','X','X','X','X','X'},{'X','X','X','X','X','X','X','X'},{'X','X','X','X','X','X','X','X'},{'X','X','X','X','X','X','X','X'},{'X','X','X','X','X','X','X','X'},{'X','X','X','X','X','X','X','X'}};
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                chess[i][j]='.';
                a++;
                if(a==n)
                {
                    b=1;
                    break;
                }
            }
            if(b==1)
            {
                break;
            }
        }
        chess[0][0]='O';
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cout<<chess[i][j];
            }
            cout<<endl;
        }  
        cout<<endl;
    }
}