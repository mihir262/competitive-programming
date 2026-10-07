#include <bits/stdc++.h>
#include <ranges>
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
    vi a(n); for(int &x : a) cin >> x;
    
    int prefmax = -1e9, maxi = 0; 
    for(int i = 0; i < n; ++i) {
        prefmax = max(prefmax, a[i]);
        if(prefmax > a[i]) maxi = i;
    }

    int sufmin = 1e9, mini = 0;
    for(int i = n - 1; i >= 0; --i) {
        sufmin = min(sufmin, a[i]);
        if(sufmin < a[i]) mini = i;
    }
    
    cout << (k + mini > maxi ? "Yes" : "No") << endl;
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

