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

/// Tag : Smallest sub-array with given sum.

int main()
{

    int n, subarraylen = INT_MAX, sum;
    cin >> n >> sum;
    int arr[n + 1];
    for ( int i = 1 ; i<=n ; ++i )
        cin >> arr[i];


    int cursum = 0, we = 1, ws = 1;

    for ( we = 1 ; we<=n ; we++  )
    {
        cursum+=arr[we];
        while( cursum>=sum )
        {
            subarraylen = min ( subarraylen, we - ws + 1 );
            cursum-=arr[ws];
            ws++;
        }
    }

    cout << subarraylen << '\n';



}

/*


  Alhamdulillah
*/

