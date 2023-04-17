#include <bits/stdc++.h>

using namespace std;
struct distobj
{
    int len;
    int start;
    int end;
};



struct CompareByLen
{
    bool operator()(const distobj& obj1, const distobj& obj2) const
    {
        return obj1.len < obj2.len;
    }
};
struct CompareByEEE
{
    bool operator()(const distobj& obj1, const distobj& obj2) const
    {
        return obj1.end < obj2.end;
    }
};

int main()
{
    int x, n;
    cin >> x >> n;
    int t;
    multiset<distobj, CompareByLen> objects;
    multiset<distobj, CompareByEEE> l2;

    objects.insert(distobj{x, 0, x});
    l2.insert(distobj{x, 0, x});

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        
        auto e = upper_bound(l2.begin(), l2.end(), distobj{0, 0, t}, CompareByEEE());
        auto d = objects.find(*e);
        //cout << (*d).start << " " << (*d).end << " " << (*d).len <<"\n";
        objects.insert(distobj{t - (*d).start, (*d).start, t});
        objects.insert(distobj{(*d).end - t, t, (*d).end});
        l2.insert(distobj{t - (*d).start, (*d).start, t});
        l2.insert(distobj{(*d).end - t, t, (*d).end});
        objects.erase(d);
        l2.erase(e);

        cout << (*objects.rbegin()).len << " ";
    }
}