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

    int n; cin >> n;

    ll c100 = 0, c10 = 0, c1 = 0;
    for(int i = 0; i < n; i++){
        ll a;
        cin >> a;

        ll rem = a % 1000;
        ll change = (rem == 0) ? 0 : (1000 - rem);

        c100 += change/100;
        change %= 100;
        c10 += change/10;
        change%=10;
        c1 += change;
    }
    cout << c1 << " " << c10 << " " << c100 << endl;
	return 0;
}
