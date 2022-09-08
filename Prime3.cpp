#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
bool check[n+5];
void san(){
	
	for(ll i=2; i<=n; i++){
		check[i] = true;
	}
	
	for(ll i=2; i<=sqrt(n); i++){
		if(check[i]==true){
			for(ll j=i*2; j<=n; j+=i)
			check[j]=false;
			}
		}
	} 

int main(){
	int t;
	cin>>t;
	while(t--){
		
		cin>>n;
		san();
		for(ll i=2; i<=n; i++){
			if(check[i]==true)
			  cout << i << " ";
		}
		cout << endl;
	}
	
}
