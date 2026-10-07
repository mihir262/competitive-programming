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
    
    vector<bool> printed(n+1, false);
    vi mem;
    
    for(int i = 1; i <= n; i++){
        char cmd = s[i-1];
        if(cmd == '1'){
            mem.push_back(i);
        }
        else if (cmd == '2'){
            if(!mem.empty()){
                printed[mem.back()] = true;
                mem.pop_back();
            } else {
                printed[i] = true;
            }
        } else {
            printed[i] = true;
        }
    }

    vi unprinted;
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) {
            unprinted.push_back(i);
        }
    }

    cout << unprinted.size() << endl;
    for (size_t i = 0; i < unprinted.size(); i++) {
        cout << unprinted[i] << (i + 1 == unprinted.size() ? "" : " ");
    }
    cout << endl;
    
    
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
