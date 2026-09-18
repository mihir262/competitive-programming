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
    vi a(n), p(n), pos(n+1);

    for(int i = 0; i < n; i++){
        cin >> p[i];
        pos[p[i]] = i;
    }

    for(int i = 0; i < n; i++) 
        cin >> a[i];
    
    int prev = -1;

    for(int i = 0; i < n; i++){
        if(pos[a[i]] < prev){
            cout << "NO" << endl;
            return;
        }
        prev = pos[a[i]];
    }
    cout << "YES" << endl;
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
