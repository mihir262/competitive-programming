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

#define wt(x, y) ((x==y) ? 2LL : 1LL)

void solve(){
    int n; cin >> n;
    vll a(n+1), b(n+1);
    for(int i = 1; i <=n; i++) cin >> a[i];
    for(int i = 1; i <=n; i++) cin >> b[i];

    vll pref(n+1, 0);
    for(int i = 2; i <= n; i++){
        pref[i] = pref[i-1] + wt(a[i-1], b[i-1]) + wt(b[i-1], a[i]);
    }

    vll diags(n+1, 0);
    for(int i = n-1; i >= 1; i--){
        diags[i] = diags[i+1] + wt(a[i], b[i+1]) + wt(b[i], a[i+1]);
    }

    ll last = wt(a[n], b[n]);
    ll ans = 0;

    for(int k =1; k <= n; k++){
        ll length = pref[k] + diags[k] + last;
        ans = max(ans, length);
    }

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
