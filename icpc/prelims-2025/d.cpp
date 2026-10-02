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
    vi p(n);
    for(int &x : p){
        cin >> x;
    }

    int k = n/2;
    int mx1 = *max_element(p.begin(), p.begin() + k);
    int mn1 = *min_element(p.begin(), p.begin() + k);

    int mx2 = *max_element(p.begin() + k + 1, p.end());
    int mn2 = *min_element(p.begin() + k + 1, p.end());
    
    if(mx1 < mn2 || mn1 > mx2){
        cout << 1 << endl;
        cout << n << ' ';
        for(int x : p) cout << x << ' ';
        cout << endl;
        return;
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
