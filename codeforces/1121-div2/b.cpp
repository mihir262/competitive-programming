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
		int n, m; cin >> n >> m;
        vll a(n); for(int i = 0; i < n; i++) cin >> a[i];

        if(m == 1){
            cout << *max_element(all(a)) << endl;
            continue;
        }

       ll maxScore = LLONG_MIN;

        multiset<ll> s;
        ll pSum = 0;
        for(int i = 0; i < n; i++){
            ll cur = a[i];

            if(s.size() == m-1){
                ll ans = (m*cur) - pSum;
                if(ans > maxScore) maxScore = ans;
            }

            s.insert(cur);
            pSum += cur;

            if(s.size() > m-1){
                auto it = prev(s.end());
                pSum -= *it;
                s.erase(it);
            }
        }

        cout << maxScore << endl;
	}
	return 0;
}
