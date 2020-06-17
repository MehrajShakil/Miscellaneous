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

/// Tag : longest substr of k distinct character.

int main()
{

    string s;
    int longestsubstr =  0, k;

    cin >> s >> k;
    int freq[26] = { 0 }, distinct = 0 , ws = 0;
    for ( int we = 0 ; we<s.size() ; ++we )
    {
        int c = s[we] - 'a';
        if ( !freq[c] )
            ++distinct;
        ++freq[c];

        if ( distinct==k )
        {
            longestsubstr = max ( longestsubstr, we - ws + 1 );
        }
        else if ( distinct > k )
        {
            while( distinct > k )
            {
                int c = s[ws] - 'a';
                --freq[c];
                if( !freq[c] )
                    --distinct;
                ++ws;
            }
        }
    }
    cout << longestsubstr << '\n';
}

/*


  Alhamdulillah
*/

