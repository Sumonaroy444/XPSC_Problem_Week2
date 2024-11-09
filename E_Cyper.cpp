#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n; 
        vector<int> v1(n); 
        for (int i = 0; i < n; i++) {
            cin >>v1[i];
        }
        vector<int> v(n); 
        for (int i = 0; i < n; i++) {
            int move_cnt;
            string move;
            cin >> move_cnt >> move;
            
            int pos = v1[i];
            for (char m: move) {
                if (m == 'U') {
                    pos = (pos - 1 + 10) % 10; 
                }
                 else if (m == 'D') {
                    pos = (pos + 1) % 10; 
                }
            }
            v[i] = pos;
        }
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}



