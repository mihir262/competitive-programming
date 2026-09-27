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
   char c; cin >> c;
   if(c == 'B') cout << 'Y' << endl;
   if(c == 'Y') cout << 'R' << endl;
   if(c == 'R') cout << 'B' << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    solve();		
	return 0;
}
