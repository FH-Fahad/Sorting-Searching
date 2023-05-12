#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, numFind, count = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> numFind;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == numFind)
        {
            cout << "Found" << endl;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
