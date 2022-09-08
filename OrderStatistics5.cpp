#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> v;
		int n;
		cin>>n;
		int a[n+5];
		int flag=0;
		for(int i=1; i<=n; i++)
		   cin>>a[i];
		for(int i=1; i<=n-1; i++){
			for(int j=i+1; j<=n; j++){
				if(a[i]<a[j]){
					int x = a[j]-a[i];
					v.push_back(x);
					flag=1;
				}
			}
			
			
		}
		sort(v.begin(), v.end());
		if(flag==0) cout << -1;
		else cout << v[v.size()-1];
		cout<<endl;
		
	}
}
