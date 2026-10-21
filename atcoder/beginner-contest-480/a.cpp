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
   char s[2][2];
   cin >> s[0][0] >> s[0][1] >> s[1][0] >> s[1][1];

   if((s[0][0] == 'A' && s[1][1] == 'D') || (s[0][0] == 'D' && s[1][1] == 'A')){
       cout << "No" << endl;
       return;
   }
   if ((s[0][1] == 'A' && s[1][0] == 'D') || (s[0][1] == 'D' && s[1][0] == 'A')){
       cout << "No" << endl;
       return;
   }
    cout << "Yes" << endl;
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
