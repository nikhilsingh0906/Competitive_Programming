#include<iostream>
using namespace std;main(){int t,b[100][100],n,i=0,j;cin>>t;while(t--){cin>>n;for(;i<n;i++)for(j=0;j<i+1;j++)cin>>b[i][j];for(i=n-2;i>=0;i--)for(j=0;j<i+1;j++)b[i][j]+=b[i+1][j]>b[i+1][j+1]?b[i+1][j]:b[i+1][j+1];cout<<b[0][0]<<"\n";}}
