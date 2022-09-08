#include<bits/stdc++.h>
using namespace std;
vector<string> v;

void check1(){
	cout << v[v.size()-1] << " ";
	for(int i=0; i<v.size()-1;i++){
		cout << v[i] << " ";
	}
}

void check2(){
	for(int i=1; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << v[0];
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n;
		cin >> n;
		string s;
		cin.ignore();
		getline(cin, s);
		vector<string> a;
		for(int i=0; i<s.size(); i++){
			if(s[i]>='A' && s[i]<='Z')
			   s[i]+=32;
		}
		stringstream ss;
		ss<<s;
		string b;
		while(ss>>b){
			a.push_back(b);
		}
		for(int i=0; i<a.size(); i++){
			string c;
			c=a[i];
			c[0]-=32;
			v.push_back(c);
		}
		if(n==1) check1();
		else if (n==2) check2();
		cout << endl;
		v.clear();
	}
}
