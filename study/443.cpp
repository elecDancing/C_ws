#include <bits/stdc++.h>
using namespace std;
int vis[10000];   
int l,m,ans=0;
int main(){
 cin>>l>>m;
 for(int i=0;i<m;i++){
  int v,u;
  cin>>v>>u;
  for(int j=v;j<=u;j++){
   vis[j]=1;    
  }
 }
 for(int k=0;k<=l;k++){
  if(vis[k]==0)
  ans++;
 }
 cout<<ans<<endl;
 return 0;
}