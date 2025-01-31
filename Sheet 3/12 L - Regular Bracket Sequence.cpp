// اذكر الله
// صلِ على خير خلق الله محمد

#include <iostream>
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
    string s;
    cin >> s;
    ll cnt1 = 0, cnt2 = 0;
    for (auto i : s)
    {
        if (i == '(')
            cnt1++;
        else if (i == ')' && cnt1 > 0)
        {
            cnt1--;
            cnt2++;
        }
    }
    cnt2 *= 2;
    cout << cnt2;
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