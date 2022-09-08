#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check[100005];

void san(ll n){
	for(ll i=2; i<=n; i++)
	   check[i]=true;
	for(ll i=2; i<=sqrt(n); i++){
		if(check[i]){
			for(ll j=i*2; j<=n; j+=i)
			   check[j]=false;
		}
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		san(n);
		for(ll i=2; i<n; i++){
			if(check[i]) 
			   cout << i << " ";
		}
		cout << endl;
		}
}
