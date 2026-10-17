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

    int cnt = 0, first = -1, last = -1;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cnt++;
            if(first == -1) first = i;
            last = i;
        }
    }

    if(cnt == 1) cout << 0 << endl;
    else if(cnt == 2) cout << 1 << endl;
    else cout << last - first << endl;
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
