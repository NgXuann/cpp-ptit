#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+5][3]; //chu y cho chay den n+5
	int count=0;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=3; j++){
			cin >> a[i][j];
		}
	}
	for(int i=1; i<=n; i++){
		int dem0=0, dem1=0;
		for(int j=1; j<=3; j++){
			if(a[i][j] == 0)
			   dem0++;
			else
			   dem1++;
		}
		if(dem1>dem0) count++;
	}
	cout << count;
	cout << endl;
	
}
