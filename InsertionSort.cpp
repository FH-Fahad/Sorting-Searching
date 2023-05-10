#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, x;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 1; i < n; i++)
    {
        x = i;
        while (x > 0 && a[x] < a[x - 1])
        {
            swap(a[x], a[x - 1]);
            x--;
        }
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}
