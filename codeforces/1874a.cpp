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
    ll n, m, k; cin >> n >> m >> k;
    k--;

    vi a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int x = distance(a.begin(), min_element(a.begin(), a.end()));
    int y = distance(b.begin(), max_element(b.begin(), b.end()));

    if(b[y] > a[x]) swap(a[x], b[y]);
    if(k & 1){
        x = distance(a.begin(), max_element(a.begin(), a.end()));
        y = distance(b.begin(), min_element(b.begin(), b.end()));

        swap(a[x], b[y]);
    }

    ll ans = 0;
    for(int i = 0; i < n; i++) ans += a[i];
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
