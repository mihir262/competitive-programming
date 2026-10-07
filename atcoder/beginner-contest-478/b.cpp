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
    ll n, v; cin >> n >> v;

    vll w(n);
    for(ll &x : w){
        cin >> x;
    }
    
    ll maxhap = -1;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                ll price = i+j+k + 3;
                if(price <= v){
                    maxhap = max(maxhap, w[i]+w[j]+w[k]);
                }
            }
        }
    }
    
    cout << maxhap << endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    solve();		
	return 0;
}
