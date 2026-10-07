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

    vll a(n);
    for(ll &x : a){
        cin >> x;
    }

    ll score = 0;

    if(2*k <= n){
        for(int i = k-1; i <= n -k; i++){
            score += a[i];
        }

        for(int i = 0; i < k-1; i++){
            score += max(a[i], a[n-i-1]);
        }
    } else {
        for(int i = 0; i < n - k + 1; i++){
            score += max(a[i], a[n-i-1]);
        }
    }
    cout << score << endl;
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

