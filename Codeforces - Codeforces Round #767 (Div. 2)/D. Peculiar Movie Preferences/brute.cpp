#include<bits/stdc++.h>
#define ll      long long
using namespace std;

#define sz 200005

ll n;

string s[sz];

void Solve(int t)
{
    ll i, j, x, y, fg=0, ans = 0,k;
    cin>>n;
    map<string , int> m;
    string temp;
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
        temp = s[i];
        reverse(temp.begin(),temp.end());
        if(temp==s[i])
            fg=1;
    }
    for(i=1;i<=n;i++)
    {
        if(i>1)
        {
            temp = s[i];
            reverse(temp.begin(),temp.end());
            if(m[temp])
                fg=1;
            if(temp.size()>1)
                temp.pop_back();
            if(m[temp])
                fg=1;
        }
        m[s[i]]++;
    }

    m.clear();
    for(i=n;i>=1;i--)
    {
        if(i!=n)
        {
            temp = s[i];
            reverse(temp.begin(),temp.end());
            if(m[temp])
                fg=1;
            reverse(temp.begin(),temp.end());
            if(temp.size()>1){
            temp.pop_back();
            reverse(temp.begin(),temp.end());
            if(m[temp])
                fg=1;
            }
        }
        m[s[i]]++;
    }

    if(fg)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}

int main()
{
    int t,T=1;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        Solve(t);
    }
    return 0;
}
