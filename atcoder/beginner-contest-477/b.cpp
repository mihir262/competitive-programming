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
    int k = 0;
    vll x(n);
    for (auto &i : x) cin >> i;
    vi ans;

    for(int i = 0; i < n; i++){
        bool apart = 1;

        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(abs(x[i] - x[j]) < d){
                apart = false;
                break;
            }
        }

        if(apart){
            ans.push_back(i+1);
        }
    }

    cout << ans.size() << endl;
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;
    
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    solve();		
	return 0;
}
