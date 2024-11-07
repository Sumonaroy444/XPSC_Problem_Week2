
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,m,q;
cin>>n>>m>>q;
vector<int>ar(m);
for(int i=0;i<m;i++){
cin>>ar[i];
}
sort(ar.begin(),ar.end());
for(int i=0;i<q;i++){
int x;
cin>>x;
int right = lower_bound(ar.begin(),ar.end(),x)-ar.begin();
int left = right-1;
if(right == m){
cout<<(n-x)+(x-ar[left])<<endl;
}
else if(left == -1){
cout<<x-1+(ar[right]-x)<<endl;
}
else{
int dis_L = x-ar[left];
int dis_R = ar[right]-x;
cout<<abs(dis_L-dis_R)/2 + min(dis_R,dis_L)<<endl;
}
}
}
return 0;
}

