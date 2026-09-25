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
    int n; cin >> n; char c; cin >> c;
    string s; cin >> s;

    int coins = 0;

    for(int i =0; i < n/2; i++){
        char l = s[i]; char r = s[n-i-1];
        if(l != r){
            if(l == c || r == c) coins++;
            else coins +=2;
        }
    }
    cout << coins << endl;
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
