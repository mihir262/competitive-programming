#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;
using pll = pair<ll, ll>;

using mii = map<int, int>;
using mll = map<ll, ll>;
using msi = map<string, int>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
	int n;
	string s, t;
	cin >> n >> s >> t;

	for(auto i = 0; i < s.size(); i++){
		if(t[i] != '*' && t[i] != s[i]){
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}