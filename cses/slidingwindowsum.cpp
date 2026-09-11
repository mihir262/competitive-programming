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

    int n, k;
    cin >> n >> k;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;
    
    vll window(k);
    ll sum = 0;
    ll cur = x;

    for (int i = 0; i < k; i++) {
        window[i] = cur;
        sum += cur;
        cur = (a * cur + b) % c;
    }

    ll ans = sum;

    for (int i = k; i < n; i++) {
        int pos = i % k;
        sum -= window[pos];
        window[pos] = cur;
        sum += cur;
        ans ^= sum;
        cur = (a * cur + b) % c;
    }

    cout << ans << '\n';
	return 0;
}
