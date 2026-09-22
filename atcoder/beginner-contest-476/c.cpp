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
	vi a(n); for(int i = 0; i < n; i++) cin >> a[i];

	vi three;
	three.push_back(a[0]);
	three.push_back(a[1]);

	for(int i = 2; i < n; i++){
		three.push_back(a[i]);
		sort(all(three), greater<int>());

		if(three.size() > 3){
			three.pop_back();
		}

		cout << three[2] << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}