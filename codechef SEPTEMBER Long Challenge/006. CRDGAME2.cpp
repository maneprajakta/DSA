#include <bits/stdc++.h>

using namespace std;

#define int long long
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int MAX=2e5+5;
#define ld long double
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define v vector<int>
#define rtcheck cout<<"aman\n";exit(0);
#define vcheck(x) cout<<#x<<" "<<x<<endl;
#define len(v) ((int)((v).size()))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(),(v).rend()             
#define pint pair<int,int>
#define forl for(int i=0;i<n;i++)
const int mod=1000000007;
const int inf=1e17;

int powerof(int q, int n){
    int ans = 1;
    while(n){
        if(n&1){
            ans = ans*q%mod;
        }
        n=n/2;
        q=q*q%mod;
    }
    return ans;
}

int helper1(int x,int y){
    return (x%mod*(powerof(y,mod-2)%mod))%mod;
}

int helper2(int n, int q){
    int ans=1;
    int m = min(q, n - q);
    for (int i = 0; i < m; i++) {
        ans = (ans % mod * (n - i) % mod) % mod;
        ans = helper1(ans, i + 1);
    }
    return ans % mod;
}

void letsDoIt(){
    int n;
    cin>>n;
    int a[n], f;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (max == a[i])
        {
            maxi++;
        }
    }
    if (n == 1)
    {
        cout << 2 << "\n";
        return;
    }
    if (maxi % 2 != 0)
    {
        f = powerof(2, n) % mod;
    }
    else
    {
        f = powerof(2, n) % mod - ((powerof(2, n - maxi) % mod) * helper2(maxi, maxi / 2) % mod) % mod ;
    }
    if (f < 0)
    {
        f = (f + mod) % mod;
    }
    cout << f % mod;

}
int32_t main()
{
    speed;
    #ifndef ONLINE_JUDGE
        freopen("error.txt", "w", stderr);
    #endif
    int t;
    // t=1;
    cin>>t;
    while(t--)
    {
        letsDoIt();
        cout<<endl;
    }
    return 0;
 }