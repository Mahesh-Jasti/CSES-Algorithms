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
    for(ll i=0;i<pow(2,n);i++){
    	string s="";
    	ll temp=i;
    	ll times=n;
    	while(times--){
    		if(temp%2) s.push_back('1');
    		else s.push_back('0');
    		temp/=2;
    	}
    	reverse(s.begin(),s.end());
    	string ans="";
    	ans.push_back(s[0]);
    	for(ll i=0;i<n-1;i++){
    		if(s[i]!=s[i+1]) ans.push_back('1');
    		else ans.push_back('0');
    	}
    	cout << ans << "\n";
    }
	return 0;
}
