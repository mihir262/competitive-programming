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
    for(int &x:a){
        cin >> x;
    }

    int p = 0; 
    int sign = (n%2 == 1) ? 1 : -1;

    for(int i = n -1; i >= 0; i--){
        p += sign * a[i];
        sign = -sign;
    }

    cout << p << endl;
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
