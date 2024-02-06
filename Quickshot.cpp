#include <bits/stdc++.h>
using namespace std;
int part(int a[], int l, int h)
{
    int pi = a[l];
    int i = l, j = h;
    while (i < j)
    {
        while (a[i] <= pi)
        {
            i++;
        }
        while (a[j] > pi)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[j],a[l]);
    return j;
}

void qs(int a[], int l, int h)
{
    if (l >= h)
        return;
    int p;
    p = part(a, l, h);
    qs(a, l, p - 1);
    qs(a, p + 1, h);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    qs(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}