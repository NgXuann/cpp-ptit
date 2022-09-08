#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1, s2;
		vector<string> v1, v2, v3;
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss1, ss2;
		string a, b;
		ss1<<s1;
		ss2<<s2;
		while(ss1>>a){
			v1.push_back(a);
		}
		  
		while(ss2>>b){
			v2.push_back(b);
		}
		
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		
		for(int i=0; i<v1.size(); i++){
			int flat=0;
			for(int j=0; j<v2.size(); j++){
				if(v1[i] == v2[j])
				  flat=1;
			}
			if(flat==0) 
			   v3.push_back(v1[i]);
		}
		for(int i=0; i<v3.size(); i++)
		  if(v3[i] != v3[i+1]) 
		     cout << v3[i] << " ";

		cout<<endl;
		
	}
}
