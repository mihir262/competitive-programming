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
    int n; cin >> n;
    vll s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    ll counter = 0;
    
    sort(all(s));

    for(int i = 0; i < n-1;){
        if(s[i+1] - s[i] <= 1){
            counter++;
            i+=2;
        } else {
            i++;
        }
    }

    cout << counter << endl;
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
