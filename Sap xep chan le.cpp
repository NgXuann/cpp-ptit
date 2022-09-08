#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v, a, b;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(int i=0; i<n; i++){
		if(v[i]%2==0){
			a.push_back(v[i]);
		}
		else{
			b.push_back(v[i]);
		}
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int c=0;
	int d=b.size()-1;
	for(int i=0; i<n; i++){
		if(v[i]%2==0)
		   cout << a[c++] << " ";
		else
		   cout << b[d--] << " ";
	}
}
