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
		vi a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0;i < n; i++){
		    if(a[i]==-1)a[i]=1;
		    if(a[i]==1)break;
		}
		for(int i = n-1; i > -1; i--){
		    if(a[i]==-1) a[i]=1;
		    if(a[i]==1) break;
		}
		for(int i = 0;i < n; i++){
		    if(a[i]==-1) a[i]=0;
		}
		for(int i = 0;i < n; i++) cout<<a[i]<<' ';
		cout<<'\n';
	}
	return 0;
}
