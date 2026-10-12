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
    vi a(n+1);

    int sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(i % 2 != 0){
            sum += a[i];
        }
    }
    cout << sum << endl;
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
