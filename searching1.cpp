#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int a[10000];
	int n, k;
	
	while(t--){
		int flag=0;
		cin >> n >> k;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		for(int i=1; i<=n; i++){
			if(a[i]==k){
				cout << i;
			    flag=1;
			    break;
			}	   
		}
		if(flag==0) cout << -1;
		cout << endl;
	}
}
