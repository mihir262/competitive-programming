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
    int n, m; cin >> n >> m;
    n %= m;

    if(n == 0){
        cout << 0 << endl;
        return;
    }

    ll red_m = m/gcd(n,m);

    if(red_m & (red_m - 1)){
        cout << -1 << endl;
        return;
    }

    ll ops = 0;
    while(n > 0){
        ops += n;
        n *= 2;
        n %= m;
    }
    
    cout << ops << endl;
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
