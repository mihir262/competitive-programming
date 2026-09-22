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
    
    int c1 = 0, c2 = 0;
    if(s[0] == '1'){
        for(int i =0; i < n; i++){
            if(s[i] == '0') c1++;
        }
        cout << c1 << endl;
    }
    else {
        for(int i =0; i < n; i++){
            if(s[i] == '1') c1++;
            else c2++;
            c2 = min(c2, c1);
        }
        cout << c2 << endl;
    }
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
