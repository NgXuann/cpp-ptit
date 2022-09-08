#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int dem=0;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[105][105], b[105][105], c[105][105];
		memset(b, 0, sizeof(b));
		memset(c, 0, sizeof(c));
		for(int i=0; i<n; i++)
		   for(int j=0; j<m; j++)
		      cin>>a[i][j]; 
		
		for(int i=0; i<m; i++)
		   for(int j=0; j<n; j++)
		      b[i][j] = a[j][i];
		      
	    for(int i=0; i<n; i++)
	       for(int j=0; j<n; j++)
	          for(int l=0; l<m; l++) 
	             c[i][j] += a[i][l]*b[l][j];
	    dem++;
		cout << "Test " << dem  << ":"<< endl;
	    for(int i=0; i<n; i++){
	    	for(int j=0; j<n; j++)
	    	  cout << c[i][j] << " ";
	    	cout << endl;
		}
		cout << endl;
	    
	 
	         
	             
		   
		
	}
}
