#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int index = start;

    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            swap(a[i], a[index]);
            index++;
        }
    }
    swap(a[end], a[index]);

    return index;
}

void Quicksort(int a[], int start, int end)
{
    if (start < end)
    {
        int p = partition(a, start, end);
        Quicksort(a, start, p - 1);
        Quicksort(a, p + 1, end);
    }
}

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];

    Quicksort(a, 0, n - 1);

    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}
