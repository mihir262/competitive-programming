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
        int n;
        cin >> n;
        if (n % 2 == 0){
            for (int i = 0; i < n; i += 2){
                cout << (i + 2) << ' ' << (i + 1) << ' ' << (i + 1) << ' ' << (i + 2) << ' ';
                cout << (i + 1) << ' ' << (i + 2) << ' ' << (i + 2) << ' ' << (i + 1) << ' ';
            }
        }
        else{
            cout << "3 3 2 1 1 2 1 2 2 3 1 3 ";
            for (int i = 3; i < n; i += 2){
                cout << (i + 2) << ' ' << (i + 1) << ' ' << (i + 1) << ' ' << (i + 2) << ' ';
                cout << (i + 1) << ' ' << (i + 2) << ' ' << (i + 2) << ' ' << (i + 1) << ' ';
            }
        }
        cout << '\n';
	}
	return 0;
}
