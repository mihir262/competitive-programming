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
    vi a(n);
    vi cnt(101, 0);

    for(int &x : a){
        cin >> x;
        cnt[x]++;
    }

    vi ans;
    int mx = 0;
    for(int x =0; x <= 100; x++){
        mx = max(cnt[x], mx);
    }

    for(int i = 1; i <= mx; i++){
        for(int j = 100; j >= 1; j--){
            if(cnt[j] >= i){
                ans.push_back(j);
            }
        }
    }

    for(int x : ans){
        cout << x << ' ';
    }
    cout << endl;
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
