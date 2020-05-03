// BISMILLAHIR RAHMANIR RAHEEM
// ALLAH IS WATCHING ME
// ALLAH save us from COVID-19.Amin.

//█▀█─█──█──█▀█─█─█
//█▄█─█──█──█▄█─█▄█
//█─█─█▄─█▄─█─█─█─█

/// Author : Md Mehraj Hossain

#include<bits/stdc++.h>
using namespace std;

///debug
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
clock_t tStart = clock();
#define timeStamp dbg("Execution Time: ", (double)(clock() - tStart)/CLOCKS_PER_SEC)
void faltu () {cerr << endl;}
template <typename T>void faltu( T a[], int n ) {for(int i = 0; i < n; ++i) cerr << a[i] << ' ';cerr << endl;}
template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}
//////

using ll = long long;

vector<int>z_function(string pattern)
{
    int n = pattern.size();

    vector<int> z(n);
    z.assign(n, 0);

    for(int i =1,l=0,r=0; i<n; i++)
    {
        if(i<=r)
        {
            z[i]=min(r-i+1,z[i-l]);
        }
        while(i+z[i]<n && pattern[z[i]]==pattern[i+z[i]])
            ++z[i];

        if(i+z[i]-1>r)
        {
            l=i;
            r=i+z[i]-1;
        }
    }
    return z;
}

int main()
{

    string pattern ;

    cin >> pattern;
    map<int,int> mp;
    vector<int>   z = z_function(pattern);
    int n = pattern.size();

    for(int i=1; i<n; i++)
    {
        if(z[i])
           mp[z[i]]++;
    }
    for(int i=n-1;i>0;i--){
         mp[i]+=mp[i+1];
    }
    vector<pair<int,int> > ans;

    for(int i=0; i<n-1; i++)
    {
        if(z[n-i-1]==i+1)
        {
            ans.push_back({i+1,mp[i+1]+1});
        }
    }
    ans.push_back({n,1});
    cout << ans.size() << '\n';
    for(auto it : ans)
    {
        cout << it.first << " " << it.second << '\n';
    }
     timeStamp;

}

