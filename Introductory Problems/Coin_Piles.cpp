/*
You have two coin piles containing a and b coins. 
On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.
Your task is to efficiently find out if you can empty both the piles.

Input
The first input line has an integer t: the number of tests.

After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.

Output
For each test, print "YES" if you can empty the piles and "NO" otherwise.

Constraints
1≤t≤105
0≤a,b≤109

Example
Input:
3
2 1
2 2
3 3

Output:
YES
NO
YES
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while (t--)
    {
        long long a, b ;
        cin>>a >>b ;

        // Approach-1
        if(b>a) swap(a,b) ;
        int dif= a-b ;

        if(b-dif >=0 and (b-dif)%3==0) cout<<"YES" ;
        else cout<<"NO" ;
        cout<<"\n" ;


        // Approach-2
        // if(max(a,b) > 2*min(a,b)) cout<<"NO" ;
        // else if((a+b)%3 == 0) cout<<"YES" ;
        // else {
        //     cout<<"NO" ;
        // }
        // cout<<"\n" ;
    }
    
}