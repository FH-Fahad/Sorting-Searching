#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, numFind, first, last, middle;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> numFind;

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (arr[middle] < numFind)
            first = middle + 1;

        else if (arr[middle] == numFind)
        {
            cout << "Found" << endl;
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        cout << "Not Found" << endl;

    return 0;
}
