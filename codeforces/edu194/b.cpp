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
		ll x, y, k; cin >> x >> y >> k; // employees, projects, months

        if(x == y) cout << 0 << endl;
        if(x > y) cout << k*y + (k*(k-1))/2 << endl;
        if(x < y){
            ll d = y-x;
            ll tot = 0;
            for(int i = 0; i < k; i++){
                if((x+i) > d){
                    ll rem = k - i;
                    tot += rem * d;
                    break;
                }
                tot += d % (x+i);
            }
            cout << tot << endl;
        }
	}
	return 0;
}
