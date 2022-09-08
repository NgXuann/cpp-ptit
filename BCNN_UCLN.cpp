#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		ll bcnn = (a*b)/__gcd(a,b);
		cout << bcnn << " " << __gcd(a,b) << endl;
	}
}
