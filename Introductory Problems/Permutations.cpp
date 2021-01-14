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
    if(n==1){
    	cout << 1;
    	return 0;
    }
    if(n<4){
    	cout << "NO SOLUTION";
    	return 0;
    }
    vector<ll> odd,even;
    for(ll i=1;i<=n;i+=2) odd.push_back(i);
    for(ll i=2;i<=n;i+=2) even.push_back(i);
    for(ll i=odd.size()-1;i>-1;i--) cout << odd[i] << " ";
    for(ll i=even.size()-1;i>-1;i--) cout << even[i] << " "; 
	return 0;
}
