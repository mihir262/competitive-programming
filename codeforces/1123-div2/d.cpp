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
   vi a(n); vi pos(n+1, 0);
   for(int i = 1; i <= n; i++){
       int x; cin >> x;
       pos[x] = i;
   }

   int leftIdx = 1, rightIdx = n;
   bool ok = true;
   for(int i = 1; i <= n; i++){
       if(leftIdx % 2 == pos[i] % 2) leftIdx++;
       else if(rightIdx % 2 == pos[i] % 2) rightIdx--;
       else {
           ok = false;
           break;
       }
   }
   cout << (ok ? "YES" : "NO") << endl;
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
