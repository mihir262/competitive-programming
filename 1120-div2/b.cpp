#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

using vi = vector<int>;
using vll = vector<ll>;
using pi = pair<int, int>;
using pll = pair<ll, ll>;
using dqi = deque<int>;   
using dqll = deque<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;

        if(k < n || k > 2*n - 1) {
            cout << -1 << "\n";
            continue;
        }
        
        vector<vector<int>> a(n, vector<int>(n, 0));

        // m is the number of elements that must be BOTH a row and a column minimum
        int m = 2 * n - k;
        
        int M = (m == n) ? n : m - 1;
        int nxt = 1;

        for (int i = 0; i < M; ++i) {
            a[i][i] = nxt++;
        }

        for (int i = M; i < n; ++i) {
            for (int j = M; j < n; ++j) {
                a[i][j] = nxt++;
            }
        }

        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j) {
                    a[i][j] = nxt++;
                }
            }
        }

        for (int j = 0; j < M; ++j) {
            for (int i = M; i < n; ++i) {
                a[i][j] = nxt++;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << a[i][j] << (j == n-1 ? "" : " ");
            }
            cout << '\n';
        }
    }
    return 0;
}

