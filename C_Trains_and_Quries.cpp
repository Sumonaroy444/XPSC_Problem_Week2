#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        for(int i=1;i<=m;i++){
            int l,r;
            cin>>l>>r;
            if(mp.find(l)== mp.end()||mp.find(r)== mp.end()){
                cout<<"NO"<<endl;
            }
            else{
                int Start_left_idx,End_right_idx;
                Start_left_idx= *mp[l].begin();
                End_right_idx= *mp[r].rbegin();
                if(Start_left_idx<End_right_idx){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}

