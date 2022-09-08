#include<bits/stdc++.h>
using namespace std;

bool check[1000005];


int main(){
	vector<int> v;
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		for(int i=1; i<1000005; i++){
		check[i]=true;
	}
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			if(x>0){
				v.push_back(x);
				check[x]=false;
			}
		}
		for(int i=1; i<1000005; i++){
			if(check[i]==true){
				cout << i;
				break;
			}
		}
		cout<<endl;
		v.clear();
	}
}
