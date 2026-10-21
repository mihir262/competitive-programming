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
    int n, k, t; cin >> n >> k >> t;
    vi a(n); for(int &x : a) cin >> x;

    int presses = 0;
    for(int i =0; i < n; i++){
        if(a[i]+k < a[i+1]) presses++;
    }
    cout << presses << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//int t; cin >> t;
	//while(t--){
        solve();		
	//}
	return 0;
}
