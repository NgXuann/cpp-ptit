#include<bits/stdc++.h>
#include<string>
using namespace std;



int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int b;
		vector <int> a;
		stringstream ss;
		ss << s;
		while(ss>>b){
			a.push_back(b);
		}
		
		
		int demchan=0;
		int demle=0;
		for(int i=0; i<a.size(); i++){
			if(a[i]%2==0)
			  demchan++;
			else 
	          demle++;
		}
		
		if((a.size()%2==0 && demchan > demle) || (a.size()%2==1 && demchan < demle))
		  cout << "YES";
		else cout << "NO";
		
		cout << endl;
	}
}
