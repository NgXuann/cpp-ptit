#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	string s[n+5];
	for(int i=0; i<n; i++){
		getline(cin, s[i]);
	}
		
	sort(s,s+n);
	int dem=1;
	for(int i=0; i<n-1; i++){
		if(s[i]!=s[i+1])
		  dem++;
	}
	cout << dem << endl;

}
