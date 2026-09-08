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
        int x = n+1;
        bool isPrime = true;
        if (x < 2) isPrime = false;
        if (x == 2) isPrime = true;
        if(x % 2 == 0) isPrime = false;
        for(int i = 3; i*i <= x; i += 2){
            if(x % i == 0){
                isPrime = false;
                break;
            }
        }
        cout << (isPrime ? "YES" : "NO") << endl;
    }
	return 0;
}
