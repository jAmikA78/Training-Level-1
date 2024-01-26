// اذكر الله
// صلِ على خير خلق الله محمد

#include <iostream>
#include <stack>

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

    stack<ll> Stack;
    Stack.push(-1);
    ll ans = 0, k = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            Stack.push(i);
        else
        {
            Stack.pop();
            if (!Stack.empty())
            {
                ll top = i - Stack.top();
                if (top > ans)
                    ans = top, k = 1;
                else if (top == ans)
                    k++;
            }
            else
                Stack.push(i);
        }
    }

    cout << ans << " " << ((ans > 0) ? k : 1) << endl;
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