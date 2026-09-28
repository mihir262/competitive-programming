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
    ll a, b, m;
    cin >> a >> b >> m;
    
    ll cycles_b = b/m;
    ll rem_b = b%m;
    ll full_sum = (m*(m-1))/2;
    ll tot_b = (cycles_b*full_sum) + ((rem_b * (rem_b+1))/ 2);
    ll cycles_a = a/m;
    ll rem_a = a%m;
    ll tot_a = (cycles_a*full_sum) + ((rem_a * (rem_a+1)) /2);
    ll total = tot_b - tot_a;

    cout << total << endl;
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
