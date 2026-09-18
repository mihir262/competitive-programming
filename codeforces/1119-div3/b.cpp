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
		int n; cin >> n;
		vi a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int odd = 0, even2 = 0, even4 = 0;
		for(int i : a){
			int x = abs(i);
			if(x % 2 != 0) odd++;
			else{
				if (x % 4 == 0) even4++;
				else even2++;
			}
		}
		cout << max({odd, even2, even4}) << endl;
	}
 
	return 0;
}