#include<bits/stdc++.h>
using namespace std;

using ll = long long int;
using ull = unsigned long long int;

string dectobin(ll N) {
    string str = bitset<64> (N).to_string();
    const auto l = str.find('1');
      
    if(l != string::npos)
        return str.substr(l);
    return "0";
}

ll bintodec(string s) {
	ll n = 0;
	for(ll i = 0; i < s.length(); ++i) {
		if(s[s.length()-i-1] == '1')
			n += (1<<i);
	}
	return n;
}

int main() 
{
	ll T;
	cin >> T;
	string ans = "", temp, n0, str, n1;
	ll N, S, sum, fbans;
	int tib, b0;
	ll A[21];
	while(T--) {
		ans = "";
		cin >> N;
		for(ll i = 1; i < 21; ++i) {
			fflush(stdout);
			cout << "1 " << (1 << i) << "\n";
			fflush(stdout);
			cin >> A[i];
		}
		S = A[20] - (N * (1 << 20));
		ans += to_string(S%2);

		for(ll i = 1; i < 21; ++i) {
			if(A[i] == (S + (N * (1 << i))) && i > dectobin(S).length() ) {
				break;
			}
			else {
				sum = ((A[i] + S) - ((1 << i) * N)) >> 1;
				temp = dectobin(sum);
				n0 = "";
				if(temp.length() - i - 1 < 0) {
					n0 = "0";
				}
				else {
					n0 = temp[temp.length() - 1 - i];
				}
				stringstream degree(n0);
				degree >> tib;
				str = dectobin(S);
				n1 = "";
				if(str.length() - 1 - i < 0) {
					break;
				}
				else {
					n1 = str[str.length() - i - 1];
				}
				stringstream degree1(n1);
				degree1 >> b0;
				fbans = tib^b0;
				ans += to_string(fbans);
			}
		}
		reverse(ans.begin(), ans.end());
		fflush(stdout);
		cout << "2 " << bintodec(ans) << "\n";
		fflush(stdout);
		ll useless;
		cin >> useless;
		fflush(stdout);
	}

	return 0;
}