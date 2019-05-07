#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    int n;
    cin >>n;
    vector< pair < int, int >  >v;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin >>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int ans1=0;
    for(int i=0; i<n; i++)
    {
        ans1 += ( v[i].first * ( i  ) + v[i].second * ( n-i ) );
    }
     sort(v.begin(),v.end(),sortbysec);

      int ans2=0;
    for(int i=0; i<n; i++)
    {
        ans2 += ( v[i].first * ( i  ) + v[i].second * ( n-i ) );
    }

    cout <<min(ans1,ans2) <<endl;
}
