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
        vector <pair<int, int>> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i].first;
            p[i].second = i+1;
        }

       vector<pair<int, int>> srt = p;
       sort(all(srt));

       vi idx;
       for(int i = 0; i < n; i++){
           if(p[i].first != srt[i].first){
               idx.push_back(i+1);
           }
       }

       if(idx.empty()){
           cout << "YES" << endl;
           continue;
       }

       int m = idx.size();
       bool possible = true;
       for(int k = 0; k < m; k++){
           int target = idx[m - 1 - k];
           if(p[idx[k]-1].first != target){
               possible = false;
               break;
           }
       }

       cout << (possible ? "YES" : "NO") << endl;
	}
	return 0;
}
