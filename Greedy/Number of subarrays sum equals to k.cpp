#include<bits/stdc++.h>
using namespace std;

using ll =long long;
unordered_map<ll, ll > prevsum;

ll findsubarray(ll arr[], ll n, ll k)
{
    ll cursum=0,res=0;

    for(ll i=0; i<n; i++)
    {
        cursum+=arr[i];
        if(cursum==k)
        {
            res++;
        }
        if(prevsum[cursum-k]!=0)
        {
            res+=prevsum[cursum-k];
        }
        prevsum[cursum]++;

    }
    return res;
}


int main()
{
    ll n,k;
    cin >> n >> k;
    ll arr[n];
    for(ll i=0; i<n; i++)
        cin >> arr[i];

    cout << findsubarray(arr,n,k);
}
