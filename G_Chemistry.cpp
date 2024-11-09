#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k>>s;

        int freq[26]={0};
        for(char ch : s){
            freq[ch-'a']++;
        }
        int odd_cnt=0;
        for(int i=0;i<26;i++){
            if(freq[i]%2 != 0){
                odd_cnt++;
            }
        }

        int remain_L=n-k;
        if((remain_L%2 == 0 && odd_cnt <= k)||(remain_L % 2 != 0 && odd_cnt <= k + 1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}


