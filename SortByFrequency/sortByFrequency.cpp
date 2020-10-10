#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> m2;

bool sort_by_value(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.second == b.second)
        return m2[a.first] < m2[b.first];
    return a.second > b.second;
}
void sort_by_frequency(vector<int> a, int n)
{
    
    unordered_map<int, int> m;
    vector<pair<int, int> > v;
    for (int i = 0; i < n; ++i) {
        m[a[i]]++;
        if (m2[a[i]] == 0)
            m2[a[i]] = i;
    }
    copy(m.begin(), m.end(), back_inserter(v));
    sort(v.begin(), v.end(), sort_by_value);
    for (int i = 0; i < v.size(); ++i)
        for (int j = 0; j < v[i].second; ++j)
            cout << v[i].first << " ";
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort_by_frequency(a, n);
    return 0;
}

/*
7
3 3 2 1 1 2 3
*/

// 3 3 3 2 2 1 1 