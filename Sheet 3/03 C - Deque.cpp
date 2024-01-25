// اذكر الله
// صلِ على خير خلق الله محمد

#include <iostream>
#include <deque>

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
    ll q;
    cin >> q;
    string s;
    ll x;
    deque<ll> Deque;
    while (q--)
    {
        cin >> s;
        if (s == "push_back")
        {
            cin >> x;
            Deque.push_back(x);
        }
        else if(s=="push_front"){
            cin>>x; 
            Deque.push_front(x);
        }
        else if (s == "pop_back")
        {
            if (!Deque.empty())
                Deque.pop_back();
        }
        else if(s=="pop_front"){
            if(!Deque.empty())
            Deque.pop_front();
        }
        else if (s == "front")
        {
            if (!Deque.empty())
                cout << Deque.front() << '\n';
        }
        else if (s == "back")
        {
            if (!Deque.empty())
                cout << Deque.back() << '\n';
        }
        else if (s == "print")
        {
            cin >> x;
            cout << Deque[x-1] << '\n';
        }
    }
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