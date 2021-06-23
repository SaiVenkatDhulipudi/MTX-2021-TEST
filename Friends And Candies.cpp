#include <bits/stdc++.h>
using namespace std;

int main() {
int N,c,count=0;
cin>>N>>c;
vector<int>v(N);
for(int i=0;i<N;i++){
  cin>>v[i];
 }
int m;
cin>>m;
while(m--){
int x,y;
cin>>x>>y;
if(v[x-1]+v[y-1]<=c){
  count++;
}
v[x-1]=v[y-1]=0;
}
for(auto i:v){
if(i<c&&i>0)count++;
}
cout<<count<<endl;
}
