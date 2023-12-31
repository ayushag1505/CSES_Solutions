/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105

Example

Input:
5
2 3 1 5

Output:
4
*/


#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n ;
    cin>>n ;

    // Approach-1 (using bit manipulation)
    int ans= 0 ;
    for(int i=1; i<=n; i++) ans^= i ;

    for(int i=0; i<n-1; i++){
        int x ;
        cin>>x ;
        ans^= x ;
    }
    cout<<ans ;



    // Approach-2 (using set data structure)
    // unordered_set<int>st ;

    // for(int i=1; i<n; i++){
    //     int x ;
    //     cin>>x ;
    //     st.insert(x) ;
    // }

    // int ans= -1 ;
    // for(int i=1; i<=n; i++){
    //     if(st.find(i) == st.end()){
    //         ans= i ;
    //         break ;
    //     }
    // }
    // cout<<ans ;

}