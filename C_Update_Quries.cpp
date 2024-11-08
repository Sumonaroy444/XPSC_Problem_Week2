
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s1;
        cin>>s1;
        set<int>st;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        string s2;
        cin>>s2;
        sort(s2.begin(),s2.end());
        int idx =0;
        for(auto x : st){
            s1[x-1] = s2[idx];
            idx++;
        }
        cout<<s1<<endl;
    }
}
