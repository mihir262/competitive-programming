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
    int n; cin >> n;

    ll L = 0, R = LLONG_MAX;

    for(int i = 1; i <= n; i++){
        ll w; cin >> w;
        if(i & 1) R = min(R, w);
        else L = max(L, w);
    }
    cout << (n % 2 == 0 && L+2 <= R ? "YES" : "NO") << endl;
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
