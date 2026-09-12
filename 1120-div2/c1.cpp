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
        for(int i = 0; i < n; i++) cin >> a[i];

        vi b(n, 0);

        for(int i = 0; i < n; i++){
            int l = (i+1) * a[i];
            int r = (i+1) * (a[i] + 1) - 1;
            if(l < n) b[l] += 1;
            if(r + 1 < n) b[r+1] -= 1;
        }

        for(int i = 1; i < n; i++) b[i] += b[i-1];

        vi ans;
        for(int i = 0; i < n; i++) if(b[i] == 0) ans.push_back(i);

        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
	}
	return 0;
}
