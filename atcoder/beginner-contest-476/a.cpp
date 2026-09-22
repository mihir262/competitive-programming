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
	string s; cin >> s;
	char c = s.back();
	
	if(c == 'e'){
		s+= 'r';

	}
	else {
		s = s + 'e' + 'r';
	}

	cout << s << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}