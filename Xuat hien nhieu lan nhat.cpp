#include<bits/stdc++.h>
using namespace std;
long long b[1000005];
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n+5];
		memset(b, 0, sizeof(b));
		for(long long i=0; i<n; i++){
			cin>>a[i];
			b[a[i]]++;
		}
		sort(a, a+n);
		int flag=0;
		for(long long i=0; i<n; i++){
			if(b[a[i]] > n/2){
				cout << a[i]<<endl;
				flag=1;
				break;
			}
		}
		if(!flag)
		  cout <<"NO" << endl;
	}
}
