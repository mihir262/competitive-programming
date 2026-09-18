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
        int mx = x + y;
        
        int fx = 0;
        for(int bit = 30; bit >= 0; bit--){
            if(mx&(1 << bit) && (fx + (1<<bit))<= x){
                fx += (1 << bit);
            }
        }
        cout << mx << " " << x - fx << endl;
    }
	return 0;
}
