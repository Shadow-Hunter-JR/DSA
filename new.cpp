#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    int res = 0;
    auto it = freq.begin();
    while (it != freq.end())
    {
        int current = it->first;
        res++;
        // Check if current + 1 exists
        if (freq.count(current + 1))
        {
            it = freq.upper_bound(current);
        }
        else
        {
            ++it;
        }
    }
    cout << res << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}