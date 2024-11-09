#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int check = 0;
        int length = 0;
        int hight = n - 1;
        int mx = n;
        int mn = 1;
        while (hight >= length)
        {
            if ((v[hight] == mx && v[length] == mn) || (v[hight] == mn && v[length] == mx))
            {
                hight--;
                length++;
                mn++;
                mx--;
            }
            else if (v[hight] == mx)
            {
                hight--;
                mx--;
            }
            else if (v[hight] == mn)
            {
                hight--;
                mn++;
            }
            else if (v[length] == mx)
            {
                length++;
                mx--;
            }
            else if (v[length] == mn)
            {
                length++;
                mn++;
            }
            else
            {
                cout << length + 1 << " " << hight + 1 << endl;
                check = 1;
                break;
            }
        }
        if (check == 0)
            cout << -1 << endl;
    }
}


