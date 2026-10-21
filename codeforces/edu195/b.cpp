#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;
using pll = pair<ll, ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve(){
    string s; cin >> s;
    int ans = 1;

    if(s.find("000") != string::npos || s.find("111") != string::npos) ans++;
    if(s.find("010") != string::npos || s.find("101") != string::npos) ans++;

    cout << ans << endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
        solve();		
	}
	return 0;
}
