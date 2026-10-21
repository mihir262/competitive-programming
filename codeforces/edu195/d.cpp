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
   int n, m; cin >> n >> m;

   vi deg(n);
   for(int i = 0; i < m; i++){
       int x, y; cin >> x >> y;
       x--; 
       y--;
       deg[x]++; 
       deg[y]++;
   }

   // 1 can never be ans as colouring is swappable
   // 2 is possible when graph has no path of 4, acyclic. star like
   // otherwise many
   // brain melt when no nodes
  
   sort(all(deg));

   if(deg[0] == 0){
       cout << "Brain Melt" << endl;
   }
   else if(deg[n-1]== n-1 && deg[n-2] == 1){
       cout << 2 << endl;
   }
   else cout << "Many" << endl;
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
