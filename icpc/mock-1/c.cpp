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
    ll n, q; cin >> n >> q;

    while(q--){
        ll s, t; cin >> s >> t;
        
        if(s == t){
            cout << 0 << endl;
            continue;
        }

        if((s&t) == 0){
            cout << s + t << endl;
            continue;
        }

        ll ans = -1;
        ll mask = s|t;
        ll m = 1;
        while((mask & m) != 0){
            m <<= 1;
        }
        if(m<=n){
            ans = s + t + 2*m;
        }

        ll w1 = 0;
        for(int i = 0; i < 31; i++){
            ll val = 1LL << i;
            if((s&val) == 0){
                w1 =val;
                break;
            }
        }

        ll w2 = 0;
        for(int i = 0; i < 31; i++){
            ll val = 1LL << i;
            if((t&val) == 0){
                w2 =val;
                break;
            }
        }

        if(w1 != w2 && w1 <= n && w2 <= n){
            ll cost3hop = s + t + 2*(w1 + w2);
            if(ans == -1 || cost3hop < ans){
                ans = cost3hop;
            }
        }

        cout << ans << endl;
    }

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//int t; cin >> t;
	// while(t--){
        solve();		
	//}
	return 0;
}
