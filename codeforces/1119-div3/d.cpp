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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        if(count(all(a), 0) == 1) {
            cout << "NO" << endl;
            continue;
        }
        
        bool zeros = 0;
        cout << "YES" << endl;
        for(int i  = 0; i < n; i++){
            if(a[i] != 0) cout << 'A';
            else if (zeros) cout << 'B';
            else{
                zeros = true;
                cout << 'C';
            }
        }
        cout << endl;
	}
	return 0;
}

/* How to think about this question?
 * 
 * firstly, MEX(A) will be 0 if the multiset contains all +ve elements
 * for the array a
 *      if number of zeros = 0 -> all 3 MEX will have value 0, satisfying the condition
 *      if number of zeros = 1 -> which means 2 will have non-zero MEX
 *      if number of zeros is more than 2 -> one in A, others in B, and MEX(C) = 0
 *      
 *      make MEX(A) and MEX(B) = 1 and MEX(C) = 0, satisfying the condition
