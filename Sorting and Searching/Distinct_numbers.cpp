#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
// GCD inbuilt func: __gcd(a,b)
// LCM formula: (a*b)/__gcd(a,b)

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	// CODE goes here
    ll n;
    cin >> n;
    ll a[n];
    set<ll> s;
    for(ll i=0;i<n;i++){
    	cin >> a[i];
    	s.insert(a[i]);
    }
    cout << s.size();
	return 0;
}
