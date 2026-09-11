#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
    ll n;
    cin >> n;
 
    // idea: compare the sum of the elements and then subtract to get the answer.
    
    ll sum = (n*(n+1))/2;
    ll addition = 0;
    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        addition += x;
    }
    cout << sum - addition << endl;
    return 0;
}
