#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x, k;
		vector<int> v;
		for(int i=0; i<n; i++ ){
			int a;
			cin>>a;
			v.push_back(a);
		}
		cin>>k>>x;
		int vt=0;
		for(int i=0; i<n; i++)
		  if(v[i]==x)
		     vt=i;
		int dem=0;
		for(int i=vt-1; i>0; i--){
			cout << v[i] << " ";
			dem++;
			if(dem==k/2){
				dem=0;
				break;
			} 
		}
		for(int i=vt+1; i<n; i++){
			cout << v[i] << " ";
			dem++;
			if(dem==k/2)
			  break;
		}
		cout << endl;
	}
}
