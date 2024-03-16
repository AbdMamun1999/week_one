/*https://atcoder.jp/contests/abc083/submissions/me*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int x, y;
    cin >> x >> y;

    int i = 0;
    while (x <= y)
    {
        x  *= 2;
        i++;
    }
    cout << i << "\n";

    return 0;
}