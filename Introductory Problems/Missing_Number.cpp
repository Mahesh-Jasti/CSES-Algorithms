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
    ll a[n-1];
    for(ll i=0;i<n-1;i++) cin >> a[i];
    sort(a,a+n-1);
	bool flag=false;
	for(ll i=0;i<n-1;i++){
		if(i+1==a[i]) continue;
		else{
			cout << i+1;
			flag=true;
			break;
		}
	}
	if(!flag) cout << n;
	return 0;
}
