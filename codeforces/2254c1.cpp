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
        string a, b; cin >> a >> b;

        int cnta[2] = {}, cntb[2] = {};
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') {
                if (i % 2 == 0) {
                    cnta[0]++;
                } else {
                    cnta[1]++;
                }
            }

            if (b[i] == '1') {
                if (i % 2 == 0) {
                    cntb[0]++;
                } else {
                    cntb[1]++;
                }
            }
        }
        
        cout << (cnta[0] == cntb[0] && cnta[1] == cntb[1] ? "YES" : "NO") << endl;

	}
	return 0;
}
