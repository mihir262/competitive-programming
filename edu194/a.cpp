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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int zero = count(all(a), 0);
        int ops = 0;
        if(zero < 2){
            cout << -1 << endl;
        } else {
            if(a[0] == 1) ops++;
            if(a[n-1] == 1) ops++;
            cout << ops << endl;
        }
	}
	return 0;
}
