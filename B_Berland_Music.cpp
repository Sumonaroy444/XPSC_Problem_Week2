
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        map<int, int> mp;
        vector<int> v, v2; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
            mp[a[i]] = i;  
        }

        string s;
        cin >> s;

        
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                v2.push_back(a[i]);
            else
                v.push_back(a[i]);
        }

        sort(v2.begin(), v2.end(), greater<int>());
        sort(v.begin(), v.end(), greater<int>());
        sort(a.begin(), a.end(), greater<int>());

        int idx = 0;

        for (int i = 0; i < v.size(); i++) {
            b[mp[v[i]]] = a[idx++];
        }

        for (int i = 0; i < v2.size(); i++) {
            b[mp[v2[i]]] = a[idx++];
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl; 
    }
    return 0;
}


