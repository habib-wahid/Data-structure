#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,a,b,p,q;
    vector<int>ch,gh,kh,bh;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        ch.push_back(x);
        gh.push_back(y);
    }
    cin>>m;
    while(m--)
    {
        cin>>a>>b;
        kh.push_back(a);
        bh.push_back(b);
    }
    sort(ch.begin(),ch.end());
    sort(gh.begin(),gh.end());
    sort(kh.begin(),kh.end());
    sort(bh.begin(),bh.end());
    if((kh.back()>gh.front()) || (ch.back()>bh.front()))
    {
        p=kh.back()-gh.front();
        q=ch.back()-bh.front();
        if(p>=q)
            cout<<p<<endl;
        else
            cout<<q<<endl;
    }
    else
        cout<<"0"<<endl;
    return 0;
}
