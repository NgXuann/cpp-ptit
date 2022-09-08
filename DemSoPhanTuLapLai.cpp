#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		int d[100006];
    	memset(d, 0, sizeof(d));
    	for(int i=0; i<n; i++){
    		cin >> a[i];
    		d[a[i]]++;
		}
		int dem=0;
		for(int i=0; i<100006; i++){
			if(d[i]>1)
			  dem+=d[i];
		}
		cout << dem << endl;
	}
}
