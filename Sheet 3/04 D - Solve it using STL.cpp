// اذكر الله
// صلِ على خير خلق الله محمد

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

#define cin(vv)          \
    for (auto &e : (vv)) \
        cin >> e;
#define cout(vv)         \
    for (auto &e : (vv)) \
        cout << e << ' ';

#define ll long long
#define ld long double

const ll MOD = 10000000007;

void jamika78_()
{
    cin.tie(nullptr)->sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
#endif
}

void s0lve()
{
    ll n;
    cin >> n;
    deque<ll> d(n);
    cin(d);
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            if (d.front() > d.back())
                sum1 += d.front(), d.pop_front();
            else
                sum1 += d.back(), d.pop_back();
        else if (d.front() > d.back())
            sum2 += d.front(), d.pop_front();
        else
            sum2 += d.back(), d.pop_back();
    }

    cout << sum1 << ' ' << sum2;
}

signed main()
{
    jamika78_();
    ll tc = 1;
    // cin >> tc;
    for (ll i = 0; i < tc; ++i)
        s0lve();
    return 0;
}