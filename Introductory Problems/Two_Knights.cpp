/*
Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

Input
The only input line contains an integer n.

Output
Print n integers: the results.

Constraints
1≤n≤10000

Example
Input:
8

Output:
0
6
28
96
252
550
1056
1848
*/

#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;

    for(int i=1; i<=n; ++i){
        long long sq= 1LL*(i*i) ;
        long long moves= (1LL*(sq)*(sq-1))/2 ;

        long long attack = 4*(i-1)*(i-2) ;

        cout<<moves- attack <<"\n" ;
    }
}