#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n+5], b[n+5];
		for(ll i=0; i<n; i++){
			cin>>a[i];
		}
		for(ll i=0; i<n; i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		ll flag=0;
		for(ll i=0; i<n; i++){
			if(a[i]>b[i]){
				flag=1;
				break;
			}
		}
		if(flag==1) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}
