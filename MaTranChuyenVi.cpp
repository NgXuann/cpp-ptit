#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l = 1; l <= t; l++)
    {
        int n, m;
        cin>>n>>m;
        int a[n+5][m+5], b[n+5][m+5], c[n+5][m+5];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin>>a[i][j];
                b[j][i] = a[i][j];
            }    
        }
        memset(c, 0, sizeof(c));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < m; k++)
                    c[i][j] += a[i][k]*b[k][j];
            }
        }
        cout<<"Test "<<l<<":"<<endl;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout<<c[i][j]<<" ";
            }    
            cout<<endl;
        }
    }
    
}
