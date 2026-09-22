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
	int n; cin >> n;

	for(int k = 1; k <= n; k++){
		ll total = ((long)k* k * (k * k-1))/2;
		ll attacking = 4 * (k-1) *(k-2);
		ll allowed = total - attacking;
		cout << allowed << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();

	return 0;
}