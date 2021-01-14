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
    sort(s.begin(),s.end());
    vector<string> v;
    do{
    	v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout << v.size() << "\n";
    for(ll i=0;i<v.size();i++) cout << v[i] << "\n";
	return 0;
}
