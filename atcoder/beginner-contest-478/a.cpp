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
    int n, m; 
    cin >> n >> m;

    int rounds = m / n;
    int extra = m % n;

    for(int i = 1; i <= n; ++i){
        int grapes = rounds;
        if (i <= extra){
            grapes++;
        }

        cout << grapes << endl;
    }
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// int t; cin >> t;
	// while(t--){
        solve();		
	// }
	return 0;
}
