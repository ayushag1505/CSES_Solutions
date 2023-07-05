/*
You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

Input
The first input line has an integer n: the number of values.
The second line has n integers x1,x2,…,xn.

Output
Print one integers: the number of distinct values.

Constraints
1≤n≤2⋅105
1≤xi≤109

Example
Input:
5
2 3 2 2 3

Output:
2
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){

    // Approach-2 (using sort and search)
    long n ;
    cin>>n ;
    
    long a[n] ;
    for(int i=0; i<n; i++) cin>>a[i] ;
    sort(a, a+n) ;

    long count= 1 ;
    for(int i=1; i<n; i++){
        if(a[i] != a[i-1]) count++ ;
    }

    cout<<count ;

    // Approach-1 (using set)
    // long n ;
    // cin>>n ;
    // long a[n] ;
    // set<long>st ;

    // for(int i=0; i<n; i++){
    //     cin>>a[i] ;
    //     st.insert(a[i]) ;
    // }

    // cout<<st.size() ;
}