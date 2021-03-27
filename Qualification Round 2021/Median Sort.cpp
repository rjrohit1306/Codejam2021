#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll t, n, q;
    cin >> t >> n >> q;
    while (t-- != 0)
    {
        vector<ll> a;

        cout << "1 2 3" << endl;

        ll size = 3;
        ll p;
        cin >> p;
        if (p == 2)
        {
            a.push_back(1);
            a.push_back(2);
            a.push_back(3);
        }
        else if (p == 3)
        {
            a.push_back(1);
            a.push_back(3);
            a.push_back(2);
        }
        else
        {
            a.push_back(2);
            a.push_back(1);
            a.push_back(3);
        }
        for (ll i = 4; i <= (n); i++)
        {
            ll k = 0;
            ll r = size - 1;
            while (k < r)
            {
                ll mid = k + ((r - k) / 2);
                cout << a[mid] << " " << a[mid + 1] << " " << (i) << endl;
                cin >> p;
                if (p == a[mid])
                {
                    r = mid;
                }
                else if (p == a[mid + 1])
                {

                    k = mid + 1;
                }
                else
                {
                    a.insert(a.begin() + mid + 1, i);
                    size++;
                    break;
                }
            }
            if (size != i)
            {
                if (k == 0)
                {
                    a.insert(a.begin(), i);
                }
                else
                {
                    a.push_back(i);
                }
                size++;
            }
        }
        for (auto arr : a)
        {
            cout << arr << " ";
        }
        cout << endl;
        cin >> p;
        if (p == -1)
        {
            break;
        }
    }
}