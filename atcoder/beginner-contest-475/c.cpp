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
    int n, s; 
    ll l; 
    cin >> n >> s >> l;

    vll p(n + 1, 0);
    for(int i = 1; i < n; i++){
       ll road_len; 
       cin >> road_len;
       p[i+1] = p[i] + road_len;
    }

    ll r = s;
    ll max_visited = 0;

    for (int ltown = 1; ltown <= s; ++ltown) {
        while (r + 1 <= n) {
            ll dist_l = p[s] - p[ltown];
            ll dist_r = p[r+1] - p[s];
            ll total_dist = dist_l + dist_r + min(dist_l, dist_r);

            if (total_dist <= l) {
                r++;
            } else {
                break;
            }
        }
        
        ll dist_l = p[s] - p[ltown];
        ll dist_r = p[r] - p[s];
        if (dist_l + dist_r + min(dist_l, dist_r) <= l) {
            max_visited = max(max_visited, r - ltown + 1);
        }
    }

    cout << max_visited << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
    
    solve();
	return 0;
}

