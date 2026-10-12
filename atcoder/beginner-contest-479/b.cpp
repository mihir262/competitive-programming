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
    string s; cin >> s;
    
    int maxstreak = 0, cur = 0;

    for(char c:s){
        if(c == 'R'){
            cur++;
            maxstreak = max(cur, maxstreak);
        } else {
            cur = 0;
        }
    }
    cout << maxstreak << endl;
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
