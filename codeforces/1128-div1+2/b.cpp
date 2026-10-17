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
    vi a(n); for(int &x : a) cin >> x;
    
    // no el can be bigger than max el
    // top bits frozen
    // 12 =  01100, 8 = 01000 best possible is 01011 (11)
    // so u set all the bits till right before the 1 0 pair in xor.

    ll min_el = *min_element(all(a)); ll max_el  = *max_element(all(a));
    if(min_el == max_el) cout << min_el << endl;
    else {
        ll diff = max_el^min_el;
        int max_set = 63 - __builtin_clzll(diff);
        ll mask = (1LL << (max_set+1)) - 1;
        cout << (max_el | mask) << endl;
    }
}

    //ll max_del = 0;
    //for(int i = 0; i < n; i++){
    //    max_del |= a[i];
    //}
    //cout << max_del << endl;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
        solve();		
	}
	return 0;
}
