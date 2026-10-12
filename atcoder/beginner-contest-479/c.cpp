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
    int n, w; cin >> n >> w;

    vll a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    ll max_del = 0;
    int com = 1 << n;

    for(int i = 0; i < com; i++){
        ll cur_vol = 0;
        ll cur_del = 0;
        
        for(int j = 0; j < n; j++){
            if((i >> j) & 1){
                cur_vol += b[j];
                cur_del += a[j];
            }
        }
        if(cur_vol <= w) max_del = max(max_del, cur_del);
    }

    cout << max_del << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//int t; cin >> t;
	//while(t--){
        solve();		
	//}
	return 0;
}
