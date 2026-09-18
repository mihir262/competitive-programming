#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;
using pll = pair<ll, ll>;
using dqi = deque<int, int>;
using dqll = deque<ll, ll>;

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

        int one = count(all(a), 1);
        int zero = n - one;

        if(one >= zero) cout << "Bessie" << endl;
        else cout << "Elsie" << endl;
	}
	return 0;
}
