#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;

ll kadane(int arr[], int n)
{
    ll cur = 0;
    ll max_so_far = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cur = cur + arr[i];
        if (max_so_far < cur)
        {
            max_so_far = cur;
        }
        if (cur < 0)
        {
            cur = 0;
        }
    }
    return max_so_far;
}

ll max_sum(int arr[], int n, int k)
{

    ll kadane_sum = kadane(arr, n);
    ll prefix_sum = 0, suffix_sum = 0;
    ll max_prefix = INT_MIN, max_suffix = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        prefix_sum = prefix_sum + arr[i];
        max_prefix = max(prefix_sum, max_prefix);
    }
    ll total = prefix_sum;
    for (int i = n - 1; i >= 0; i--)
    {
        suffix_sum = suffix_sum + arr[i];
        max_suffix = max(prefix_sum, suffix_sum);
    }
    ll ans;
    if (total < 0)
    {
        ans = max((max_suffix + max_prefix), kadane_sum);
    }
    else
    {
        ans = max((max_prefix + max_suffix + total * (k * 2)), kadane_sum);
    }
    return ans;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << max_sum(arr, n, k) << endl;
    }
    return 0;
}
