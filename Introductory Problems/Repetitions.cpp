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
    string s;
    cin >> s;
    ll maxi=0;
    for(ll i=0;i<s.size();){
    	ll j=i;
    	ll count=0;
    	while(j<s.size() && s[j]==s[i]){
    		count++;
    		j++;
    	}
    	i=j;
    	maxi=max(count,maxi);
    }
    cout << maxi;
	return 0;
}
