///   BISMILLAHIR RAHMANIR RAHEEM
#include<bits/stdc++.h>
using namespace std;


/*
/// It's also a algorithmic mental model.
/// Dynamically re-sizable window.
/// The sliding window tips :
  1. Things we iterate over sequentially.
     - contiguous sequence of elements.
/// question variant ::

  1. Fixed length ::
    - max sum sub-array of size k.
  2. Dynamic variant ::
    - smallest sum >= to sum value S.
    - longest sub-array / no more than k distinct characters.
    - String permutation.

*/

int main()
{

    int n, len;
    cin >> n >> len;
    int arr[n + 1];
    for ( int i = 1 ; i<=n ; ++i )
        cin >> arr[i];


    int mx = 0 , cursum = 0;

    for ( int i = 1 ; i<=n ; ++i )
    {
        cursum+=arr[i];
        if( i>=len )
        {
            mx = max ( mx , cursum );
            cursum-=arr[i-(len-1)];
        }
    }

    cout << mx << '\n';

}

/*


  Alhamdulillah
*/

