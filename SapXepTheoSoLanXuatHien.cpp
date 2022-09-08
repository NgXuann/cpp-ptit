#include<bits/stdc++.h>
using namespace std;

struct ST{
	int a;
	int dem;
};

bool cmp(ST x, ST y){
	if(x.dem > y.dem) return true;
	if(x.dem == y.dem && x.a < y.a)
	   return true;
	return false;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int d[100005];
		memset(d,0,sizeof(d));
		vector<ST> s(n);
		for(int i=0; i<n; i++){
			cin >> s[i].a;
			d[s[i].a]++;
		}
		for(int i=0; i<n; i++)
		   s[i].dem = d[s[i].a];
		sort(s.begin(), s.end(), cmp);
		for(int i=0; i<n;i++)
		   cout << s[i].a << " ";
		cout << endl;
		
	}
}
