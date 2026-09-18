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

    string s; cin >> s;
    for(int i = 1; i < s.length(); i+=2){
        s.insert(s.begin() + i, 'o');
    }
    cout << s << endl;
	return 0;
}
