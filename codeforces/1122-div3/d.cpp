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
    for(int i =0; i < n; i++){
        int p; cin >> p;
        a[i] = p - i;
    }

    sort(all(a));

    int mx = 1, l = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1]) continue;
        if(a[i] == a[i-1]+1){
            l++;
            mx = max(mx, l);
        } else {
            l = 1;
        }
    }
    cout << mx << endl;
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
