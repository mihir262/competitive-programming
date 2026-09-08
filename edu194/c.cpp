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
		int x, y; cin >> x >> y;
        int cnt = x, mx = x + y;

        while(x != 0){
            x--;
            y++;
        }
        cout << mx << " " << cnt << endl;
        
	}
	return 0;
}
