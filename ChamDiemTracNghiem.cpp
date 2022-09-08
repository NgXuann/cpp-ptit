#include<bits/stdc++.h>
using namespace std;
string de1[] = {"A","B","B","A","D","C","C","A","B","D","C","C","A","B","D"};
string de2[] = {"A","C","C","A","B","C","D","D","B","B","C","D","D","B","B"};

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){ 
		string s;
		vector<string> v;
		double diem=0;
		for(int i=0; i<16; i++){
			cin >> s;
			v.push_back(s);
		}
		if(v[0] == "101"){
			v.erase(v.begin());
			for(int i=0; i<15; i++)
			   if(v[i]==de1[i])
			     diem+= (double) 10/15;
		}
		if(v[0] == "102"){
			v.erase(v.begin());
			for(int i=0; i<15; i++)
			   if(v[i]==de2[i])
			     diem+= (double) 10/15;
		}
		
		printf("%.2lf", diem);
		cout << endl;
	
	}
}
