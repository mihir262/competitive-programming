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

const int OFFSET = 30000;
int freq[60005];

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m = n - 4;
    if (m <= 0) {
        cout << 0 << endl;
        return;
    }

    vi V(m);
    long long ans = 0;

    for (int i = 0; i < m; ++i) {
        V[i] = a[i] + a[i + 2] - a[i + 4];
        
        ans += freq[V[i] + OFFSET];
        freq[V[i] + OFFSET]++;
    }

    for (int i = 0; i < m; ++i) {
        if (i + 2 < m && V[i] == V[i + 2]) {
            ans--;
        }
        if (i + 4 < m && V[i] == V[i + 4]) {
            ans--;
        }
    }

    cout << ans << endl;
    
    for (int i = 0; i < m; ++i) {
        freq[V[i] + OFFSET]--;
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
