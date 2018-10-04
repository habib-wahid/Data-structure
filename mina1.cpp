#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i=1,x,y,j=0,a,k;
    vector<int>ch;
    queue<int>gh;
    while(i)
    {
        j++;
        cin>>n>>m;
        if(n==0 && m==0)
        {
            i=0;
            break;
        }
        else
        {
            while(n--)
            {
                cin>>y;
                ch.push_back(y);
            }
            while(m--)
            {
                cin>>x;
                gh.push(x);
            }
            sort(ch.begin(),ch.end());
            cout<<"CASE# "<<j<<":"<<endl;
            while(!gh.empty())
            {
                a=gh.front();gh.pop();
                for( k=0;k<ch.size();k++)
                {
                    if(ch[k]==a)
                    {
                        break;
                    }
                }
                if(k==ch.size())
                {
                    cout<<a<<" not found"<<endl;
                }
                else
                {
                    cout<<a<<" found at "<<++k<<endl;
                }
            }

            ch.clear();
        }
    }
    return 0;
}



