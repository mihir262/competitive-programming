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
	int n, k; cin >> n >> k;
	
	k = n-k;
	int c0 = (k+1)/2;
	int c1 = k - c0;
	
	if(c0 == 0 || c1 == 0){
		cout << -1 << endl;
		return;
	}

	for(int i = 0; i < (n+1)/2 - c0;i++){
		cout << 0;
	}
	cout << 0;

	for(int i = 0; i < n/2 - c1;i++){
		cout << 1;
	}
	for(int i = 1; i < k;i++){
		cout << i % 2;
	}
	cout<< endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}