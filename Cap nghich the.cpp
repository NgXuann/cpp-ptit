#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v;
	int flag=0;
	int dem=0;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(v[i]<=v[j]){
				flag=1;
			}else{
				flag=0;
				dem++;
			}
		}
	}
	cout << dem;
}
