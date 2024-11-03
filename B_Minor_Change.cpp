#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int op=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]!= t[i])
        {
            op++;
        }
    }
    cout<<op<<endl;

}


