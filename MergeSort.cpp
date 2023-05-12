#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int right)
{
    int left1 = l, mid = m + 1, left2 = l, temp[right];

    while (left1 <= m && mid <= right)
    {
        if (arr[left1] < arr[mid])
            temp[left2++] = arr[left1++];

        else
            temp[left2++] = arr[mid++];
    }
    while (left1 <= m)
        temp[left2++] = arr[left1++];

    while (mid <= right)
        temp[left2++] = arr[mid++];

    for (int left1 = l; left1 <= right; left1++)
        arr[left1] = temp[left1];
}

void merge_sort(int arr[], int l, int r)
{
    int m;
    m = (l + r) / 2;
    if (l < r)
    {
        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
