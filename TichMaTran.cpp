#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int a[51][51], b[51][51], c[51][51];
	memset(c, 0, sizeof(c));
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
		   cin>>a[i][j];

	for(int i=0; i<m; i++)
		for(int j=0; j<p; j++)
		   cin>>b[i][j];
	
	for(int i=0; i<n; i++)
	   for(int j=0; j<p; j++)
	      for(int l=0; l<m; l++)
             c[i][j]+=a[i][l]*b[l][j];
    
    for(int i=0; i<n; i++){
    	for(int j=0; j<p; j++){
       	   cout << c[i][j] << " ";
	    }
	    cout << endl;
	}
       
           
}
