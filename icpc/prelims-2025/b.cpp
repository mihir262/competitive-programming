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
    ll n, d; cin >> n >> d;
    vll a(n); for(ll &x : a) cin >> x;

    sort(all(a));

    bool possible = true;
    ll l = 0, r = n-1;
    while(l < r){
        if(abs(a[l] - a[r]) > d){
            possible = false;
            break;
        }
        l++;
        r--;
    }
    
    cout << (possible ? "YES" : "NO") << endl;
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
