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
		int n, k;
		cin >> n >> k;
		string s; cin >> s;
		int extra_cost = 0;
        for (int i = 0; i < n; i += k) {
            if (s.find('0', i) >= i + k || s.find('0', i) == string::npos) extra_cost++;
        }
		cout << extra_cost << "\n";
    }
	return 0;
}