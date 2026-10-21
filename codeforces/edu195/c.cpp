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
    int n, k; cin >> n >> k;

    // condition for an element entering the subarray
    // or for prefix sums p1 and p2
    // p2 - p1 % k = 0 ... so p2 % k = p1 % k and 2 - 1 > k
    // we can binary search for pj >= pi + k + 1

    vll p(n+1, 0);
    vector<vi> idx(k);

    idx[0].push_back(0);

    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        p[i] = p[i-1] + x;
        idx[p[i] % k].push_back(i);
    }

    ll ans = 0;

    for(int i = k+1; i <= n; i++){
        int rem = p[i] % k;
        int lim = i - k - 1;
        ans += upper_bound(idx[rem].begin(), idx[rem].end(), lim) - idx[rem].begin();
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
