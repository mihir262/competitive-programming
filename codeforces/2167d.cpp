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
    vll a(n); for(int i = 0; i < n; i++) cin >> a[i];

    for (ll x : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53}){
        bool ok = false;
        for(ll i : a){
            if(i%x){
                ok = true;
                break;
            }
        }
        if(ok){
            cout << x << endl;
            break;
        }
    }
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
