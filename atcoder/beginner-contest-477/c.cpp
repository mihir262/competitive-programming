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
    int q; cin >> q;
    string s, t; cin >> s >> t;

    int n  = sz(s), m = sz(t);

    vi pref(n+1);

    for(int i = 0; i + m <= n; i++){
        if(s.compare(i, m, t) == 0){
            pref[i+1] = 1;
        }
    }

    for(int i = 1; i <= n; i++){
        pref[i] += pref[i-1];
    }


    while(q--){
        int l, r;
        cin >> l >> r;

        l--; r--;

        if(r-l+1 < m){
            cout << "No" << endl;
            continue;
        }

        int st_last = r - m + 1;

        if(pref[st_last + 1] - pref[l] > 0){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    }
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    solve();		
	return 0;
}
