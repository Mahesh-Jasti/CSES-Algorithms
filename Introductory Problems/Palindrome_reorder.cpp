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
    ll can[26]={0};
    for(ll i=0;i<s.size();i++) can[s[i]-'A']++;
    ll odd=0;
    for(ll i=0;i<26;i++) if(can[i]%2) odd++;
    if(odd>1){
    	cout << "NO SOLUTION";
    	return 0;
    }
    ll idx=-1;
    string ans="";
    for(ll i=0;i<26;i++){
    	if(can[i]%2){
    		idx=i;
    		continue;
    	}
    	for(ll j=0;j<can[i]/2;j++) ans+=('A'+i);
    }
	string rev=ans;
	reverse(rev.begin(),rev.end());
	string mid="";
	if(idx!=-1){
		for(ll i=0;i<can[idx];i++) mid+=('A'+idx); 
	}
	cout << ans+mid+rev;
	return 0;
}
