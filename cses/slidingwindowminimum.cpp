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
    
    int n, k;
    cin >> n >> k;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    deque<pair<ll, int>> dq;
    ll cur = x;
    for(int i = 0; i < k; i++){
        while(!dq.empty() && dq.back().first > cur){
            dq.pop_back();
        }

        dq.push_back({cur, i});
        cur = (a * cur + b) % c;
    }

    ll ans = dq.front().first;

    for(int i = k; i < n; i++){
        if(!dq.empty() && dq.front().second <= i-k) dq.pop_front();

        while(!dq.empty() && dq.back().first > cur) dq.pop_back();

        dq.push_back({cur, i});
        ans ^= dq.front().first;
        cur = (a * cur + b) % c;
    }
    cout << ans << endl;
	return 0;
}

/* use a dequeue of (num, idx) pairs as the window 
 * generate the next element
 * remove expired elements from the front
 * remove larger elements from the baclk
 * add the new element to the back
 * dq.front() is the minimum
 * ans^= min
 */


