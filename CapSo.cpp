#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+5];
		vector<int>x;
		long long dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			x.push_back(a[i]);
		}
		sort(x.begin(),x.end());
		for(int i=0;i<n-1;i++){
			int temp =k - x[i];
			int c;
			int temp2 = lower_bound(x.begin(),x.end(),temp)-x.begin();
			if(temp2>i){
				c = n-temp2;
			}
			else{
				c=n-i-1;
			}
			if(c>=1){
				dem+=c;
			}
		}
		cout<<dem<<endl;
		
	}
}
