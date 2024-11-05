#include <bits/stdc++.h>
using namespace std;
int main()
{
 
 int n, x;
cin >> n >> x;
vector<int> v;
while (n--)
{
int y;
cin >> y;
v.push_back(y);
}

vector<int> ans;
for (int p : v)
{
if (p != x)
{
ans.push_back(p);
}
}
for (int p : ans)
{
cout << p << " ";
 }

}


