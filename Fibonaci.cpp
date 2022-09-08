#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[100];

int main(){
	int t;
	cin>>t;
	a[0]=1, a[1]=1;
	for(ll i=2; i<=92; i++)
		  a[i] = a[i-1]+a[i-2];
	while(t--){
		ll n;
		cin>>n;
		cout << a[n-1] << endl;
	}
}
