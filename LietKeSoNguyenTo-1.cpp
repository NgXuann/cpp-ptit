#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check[1000005];

void san(ll n){
	for(ll i=2; i<=n; i++)
	   check[i]=true;
	for(ll i=2; i<=sqrt(n); i++){
		if(check[i]){
			for(ll j=i*2; j<=n; j+=i)
			   check[j] = false;
		}
	}
}

int main(){
	ll a, b;
	cin >> a >> b;
	if(a>b) swap(a,b);
	san(b);
	for(ll i=a+1; i<b; i++){
		if(check[i])
		   cout << i << " ";
	}
}
